// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FSlateInvalidationRootHandle @ 14242db00

FSlateInvalidationRootHandle * __thiscall
FSlateInvalidationRootHandle::FSlateInvalidationRootHandle
          (FSlateInvalidationRootHandle *this,int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  this->UniqueId = param_1;
  if (param_1 == -1) {
    this->InvalidationRoot = (FSlateInvalidationRoot *)0x0;
    return this;
  }
  if (GSlateInvalidationRootListInstance.InvalidationRoots._8_4_ !=
      GSlateInvalidationRootListInstance.InvalidationRoots._52_4_) {
    lVar3 = 0x154ba6198;
    if (GSlateInvalidationRootListInstance.InvalidationRoots._64_8_ != 0) {
      lVar3 = GSlateInvalidationRootListInstance.InvalidationRoots._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (GSlateInvalidationRootListInstance.InvalidationRoots._72_4_ - 1 &
                             param_1) * 4);
    while (iVar1 != -1) {
      lVar3 = GSlateInvalidationRootListInstance.InvalidationRoots._0_8_ + (longlong)iVar1 * 0x18;
      if (*(int *)(GSlateInvalidationRootListInstance.InvalidationRoots._0_8_ +
                  (longlong)iVar1 * 0x18) == param_1) {
        puVar2 = (undefined8 *)(lVar3 + 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          this->InvalidationRoot = (FSlateInvalidationRoot *)*puVar2;
          return this;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  this->InvalidationRoot = (FSlateInvalidationRoot *)0x0;
  return this;
}

// FSlateInvalidationRootHandle @ 14242dba0

FSlateInvalidationRootHandle * __thiscall
FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(FSlateInvalidationRootHandle *this)

{
  this->InvalidationRoot = (FSlateInvalidationRoot *)0x0;
  this->UniqueId = -1;
  return this;
}

// GetInvalidationRoot @ 14243ef10

FSlateInvalidationRoot * __thiscall
FSlateInvalidationRootHandle::GetInvalidationRoot(FSlateInvalidationRootHandle *this)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = this->UniqueId;
  if ((uVar1 != 0xffffffff) &&
     (GSlateInvalidationRootListInstance.InvalidationRoots._8_4_ !=
      GSlateInvalidationRootListInstance.InvalidationRoots._52_4_)) {
    lVar4 = 0x154ba6198;
    if (GSlateInvalidationRootListInstance.InvalidationRoots._64_8_ != 0) {
      lVar4 = GSlateInvalidationRootListInstance.InvalidationRoots._64_8_;
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (GSlateInvalidationRootListInstance.InvalidationRoots._72_4_ - 1 &
                             uVar1) * 4);
    while (iVar2 != -1) {
      lVar4 = GSlateInvalidationRootListInstance.InvalidationRoots._0_8_ + (longlong)iVar2 * 0x18;
      if (*(uint *)(GSlateInvalidationRootListInstance.InvalidationRoots._0_8_ +
                   (longlong)iVar2 * 0x18) == uVar1) {
        puVar3 = (undefined8 *)(lVar4 + 8);
        if (lVar4 == 0) {
          puVar3 = (undefined8 *)0x0;
        }
        if (puVar3 == (undefined8 *)0x0) {
          return (FSlateInvalidationRoot *)0x0;
        }
        return (FSlateInvalidationRoot *)*puVar3;
      }
      iVar2 = *(int *)(lVar4 + 0x10);
    }
  }
  return (FSlateInvalidationRoot *)0x0;
}

