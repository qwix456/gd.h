#include <windows.h>

template <class R, class T>
class FromWrapper {
public:
    FromWrapper(T base, intptr_t offset) 
        : base_(base), offset_(offset) {}

    operator R&() const {
        return *reinterpret_cast<R*>(reinterpret_cast<uintptr_t>(static_cast<void*>(base_)) + offset_);
    }

    FromWrapper& operator=(const R& value) {
        *reinterpret_cast<R*>(reinterpret_cast<uintptr_t>(static_cast<void*>(base_)) + offset_) = value;
        return *this;
    }

    R operator->() const {
        return *reinterpret_cast<R*>(reinterpret_cast<uintptr_t>(static_cast<void*>(base_)) + offset_);
    }

private:
    T base_;
    intptr_t offset_;
};

template <class R, class T>
FromWrapper<R, T> from(T base, intptr_t offset) {
    return FromWrapper<R, T>(base, offset);
}