// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 16

// GetValue @ 14448f210

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<int,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,int *param_3,FProperty **param_4)

{
  int iVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FFieldClass *pFVar8;
  void *pvVar9;
  FFieldObjectUnion FVar10;
  FFieldObjectUnion this;
  FFieldClass **ppFVar11;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FFieldObjectUnion)(pFVar7->Field).Container.Field;
  iVar1 = pFVar7->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FField *)0x0) &&
       (((uint)(int)(*(FFieldClass **)((longlong)this + 8))->CastFlags >> 0xf & 1) != 0)) {
      ppFVar11 = (FFieldClass **)((longlong)this + 8);
      FVar10 = this;
      if (((*(FFieldClass **)((longlong)this + 8))->CastFlags & CASTCLASS_FEnumProperty) !=
          CASTCLASS_None) {
        FVar10 = (FFieldObjectUnion)((FFieldObjectUnion *)(this.Unknown + 0x70))->Field;
      }
      goto LAB_14448f2aa;
    }
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppFVar11 = (FFieldClass **)&DAT_00000008;
  FVar10.Field = (FField *)0x0;
  this.Field = (FField *)0x0;
LAB_14448f2aa:
  pFVar2 = (FVar10.Field)->ClassPrivate;
  pFVar8 = FIntProperty::StaticClass();
  if (pFVar2 == pFVar8) {
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    if ((this.Field == (FField *)0x0) ||
       (((*ppFVar11)->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)) {
      bVar4 = *(int *)(this.Unknown + 0x34) == 4;
    }
    else {
      bVar4 = *(int *)(this.Unknown + 0x34) == 1;
    }
    if ((bVar4) && (iVar1 < *(int *)(this.Unknown + 0x30))) {
      cVar6 = (**(code **)((this.Field)->_padding_ + 0x78))(this.Field);
      if (cVar6 != '\0') {
        (**(code **)((this.Field)->_padding_ + 0x90))(this.Field,param_1,param_3);
        *param_4 = (FProperty *)this;
        return true;
      }
      pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this.Field,param_1,iVar1);
      if (pvVar9 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar9);
        CallParentGetters(param_3,param_2,pvVar9);
      }
      *param_4 = (FProperty *)this;
      return true;
    }
  }
  return false;
}

// GetValue @ 14448f3b0

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<int,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,int *param_3,FProperty **param_4)

{
  int iVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FFieldClass *pFVar8;
  FFieldObjectUnion FVar9;
  void *pvVar10;
  FFieldObjectUnion FVar11;
  FFieldClass **ppFVar12;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  FVar11 = (FFieldObjectUnion)(pFVar7->Field).Container.Field;
  iVar1 = pFVar7->ArrayIndex;
  if (((ulonglong)FVar11 & 1) == 0) {
    if ((FVar11 != (FField *)0x0) &&
       (((uint)(int)(*(FFieldClass **)((longlong)FVar11 + 8))->CastFlags >> 0xf & 1) != 0)) {
      ppFVar12 = (FFieldClass **)((longlong)FVar11 + 8);
      FVar9 = FVar11;
      if (((*(FFieldClass **)((longlong)FVar11 + 8))->CastFlags & CASTCLASS_FEnumProperty) !=
          CASTCLASS_None) {
        FVar9 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar11.Unknown + 0x70))->Field;
      }
      goto LAB_14448f44a;
    }
  }
  else if (((UObject *)((ulonglong)FVar11 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar11 & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppFVar12 = (FFieldClass **)&DAT_00000008;
  FVar9.Field = (FField *)0x0;
  FVar11.Field = (FField *)0x0;
LAB_14448f44a:
  pFVar2 = (FVar9.Field)->ClassPrivate;
  pFVar8 = FIntProperty::StaticClass();
  if (pFVar2 == pFVar8) {
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    if ((FVar11.Field == (FField *)0x0) ||
       (((*ppFVar12)->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)) {
      bVar4 = *(int *)(FVar11.Unknown + 0x34) == 4;
    }
    else {
      bVar4 = *(int *)(FVar11.Unknown + 0x34) == 1;
    }
    if ((bVar4) && (iVar1 < *(int *)(FVar11.Unknown + 0x30))) {
      cVar6 = (**(code **)((FVar11.Field)->_padding_ + 0x78))(FVar11.Field);
      if (cVar6 != '\0') {
        (**(code **)((FVar11.Field)->_padding_ + 0x90))(FVar11.Field,param_1,param_3);
        *param_4 = (FProperty *)FVar11;
        return true;
      }
      if (((iVar1 < 0) || (*(int *)(FVar11.Unknown + 0x30) <= iVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pvVar10 = (void *)((longlong)param_1 +
                        (longlong)*(int *)(FVar11.Unknown + 0x44) +
                        (longlong)iVar1 * (longlong)*(int *)(FVar11.Unknown + 0x34));
      if (pvVar10 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar10);
        CallParentGetters(param_3,param_2,pvVar10);
      }
      *param_4 = (FProperty *)FVar11;
      return true;
    }
  }
  return false;
}

// GetValue @ 14448f5c0

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<float,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,float *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  int iVar9;
  FProperty *this;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FProperty *)(pFVar6->Field).Container.Field;
  iVar9 = pFVar6->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)this->_padding_)->CastFlags >> 0xf & 1) != 0))
    goto LAB_14448f648;
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  this = (FProperty *)0x0;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14448f648:
  pFVar1 = (FFieldClass *)this->_padding_;
  pFVar7 = FFloatProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    if (((*(byte *)(this->_padding_ + 0x18) & 0x40) == 0) || (this == (FProperty *)0x0)) {
      bVar3 = this->ElementSize == 4;
    }
    else {
      bVar3 = this->ElementSize == 1;
    }
    if ((bVar3) && (iVar9 < this->ArrayDim)) {
      cVar5 = (**(code **)(this->_padding_ + 0x78))(this);
      if (cVar5 != '\0') {
        (**(code **)(this->_padding_ + 0x90))(this,param_1,param_3);
        *param_4 = this;
        return true;
      }
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar9);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = this;
      return true;
    }
  }
  return false;
}

// GetValue @ 14448f720

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<float,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,float *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  int iVar9;
  FProperty *pFVar10;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar10 = (FProperty *)(pFVar6->Field).Container.Field;
  iVar9 = pFVar6->ArrayIndex;
  if (((ulonglong)pFVar10 & 1) == 0) {
    if ((pFVar10 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar10->_padding_)->CastFlags >> 0xf & 1) != 0))
    goto LAB_14448f7a8;
  }
  else if (((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  pFVar10 = (FProperty *)0x0;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14448f7a8:
  pFVar1 = (FFieldClass *)pFVar10->_padding_;
  pFVar7 = FFloatProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    if (((((FFieldClass *)pFVar10->_padding_)->CastFlags & CASTCLASS_FByteProperty) ==
         CASTCLASS_None) || (pFVar10 == (FProperty *)0x0)) {
      bVar3 = pFVar10->ElementSize == 4;
    }
    else {
      bVar3 = pFVar10->ElementSize == 1;
    }
    if ((bVar3) && (iVar9 < pFVar10->ArrayDim)) {
      cVar5 = (**(code **)(pFVar10->_padding_ + 0x78))(pFVar10);
      if (cVar5 != '\0') {
        (**(code **)(pFVar10->_padding_ + 0x90))(pFVar10,param_1,param_3);
        *param_4 = pFVar10;
        return true;
      }
      if (((iVar9 < 0) || (pFVar10->ArrayDim <= iVar9)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pvVar8 = (void *)((longlong)param_1 +
                       (longlong)pFVar10->Offset_Internal +
                       (longlong)iVar9 * (longlong)pFVar10->ElementSize);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = pFVar10;
      return true;
    }
  }
  return false;
}

// GetValue @ 14448f900

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<UObject_*,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,UObject **param_3,FProperty **param_4)

{
  FProperty *this;
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  void *pvVar7;
  int iVar8;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FProperty *)(pFVar6->Field).Container.Field;
  iVar8 = pFVar6->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FProperty *)0x0) &&
       (uVar1 = *(ulonglong *)(this->_padding_ + 0x18), (uVar1 >> 0xf & 1) != 0)) {
      if ((uVar1 >> 0x10 & 1) == 0) {
        return false;
      }
      if (iVar8 == -1) {
        iVar8 = 0;
      }
      if ((uVar1 & 0x40) == 0) {
        bVar3 = this->ElementSize == 8;
      }
      else {
        bVar3 = this->ElementSize == 1;
      }
      if (!bVar3) {
        return false;
      }
      if (this->ArrayDim <= iVar8) {
        return false;
      }
      cVar5 = (**(code **)(this->_padding_ + 0x78))(this);
      if (cVar5 == '\0') {
        pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar8);
        if (pvVar7 != (void *)0x0) {
          FCachedPropertyPath::ResolveLeaf(param_2,pvVar7);
          CallParentGetters(param_3,param_2,pvVar7);
        }
        *param_4 = this;
        return true;
      }
      (**(code **)(this->_padding_ + 0x90))(this,param_1,param_3);
      *param_4 = this;
      return true;
    }
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// GetValue @ 14448fa40

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<UObject_*,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,UObject **param_3,FProperty **param_4)

{
  FProperty *pFVar1;
  EClassCastFlags EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  int iVar8;
  void *pvVar9;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar1 = (FProperty *)(pFVar7->Field).Container.Field;
  iVar8 = pFVar7->ArrayIndex;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if ((pFVar1 != (FProperty *)0x0) &&
       (EVar2 = ((FFieldClass *)pFVar1->_padding_)->CastFlags, (EVar2 >> 0xf & 1) != 0)) {
      if ((EVar2 >> 0x10 & 1) == 0) {
        return false;
      }
      if (iVar8 == -1) {
        iVar8 = 0;
      }
      if ((EVar2 & CASTCLASS_FByteProperty) == CASTCLASS_None) {
        bVar4 = pFVar1->ElementSize == 8;
      }
      else {
        bVar4 = pFVar1->ElementSize == 1;
      }
      if (!bVar4) {
        return false;
      }
      if (pFVar1->ArrayDim <= iVar8) {
        return false;
      }
      cVar6 = (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1);
      if (cVar6 == '\0') {
        if (((iVar8 < 0) || (pFVar1->ArrayDim <= iVar8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((param_1 == (void *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pvVar9 = (void *)((longlong)param_1 +
                         (longlong)pFVar1->Offset_Internal +
                         (longlong)iVar8 * (longlong)pFVar1->ElementSize);
        if (pvVar9 != (void *)0x0) {
          FCachedPropertyPath::ResolveLeaf(param_2,pvVar9);
          CallParentGetters(param_3,param_2,pvVar9);
        }
        *param_4 = pFVar1;
        return true;
      }
      (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,param_1,param_3);
      *param_4 = pFVar1;
      return true;
    }
  }
  else if (((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// GetValue @ 14448fbf0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<TObjectPtr<UPropertyPathTestObject>,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,
          TObjectPtr<UPropertyPathTestObject> *param_3,FProperty **param_4)

{
  FProperty *this;
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  void *pvVar7;
  int iVar8;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FProperty *)(pFVar6->Field).Container.Field;
  iVar8 = pFVar6->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FProperty *)0x0) &&
       (uVar1 = *(ulonglong *)(this->_padding_ + 0x18), (uVar1 >> 0xf & 1) != 0)) {
      if ((uVar1 >> 0x10 & 1) == 0) {
        return false;
      }
      if (iVar8 == -1) {
        iVar8 = 0;
      }
      if ((uVar1 & 0x40) == 0) {
        bVar3 = this->ElementSize == 8;
      }
      else {
        bVar3 = this->ElementSize == 1;
      }
      if (!bVar3) {
        return false;
      }
      if (this->ArrayDim <= iVar8) {
        return false;
      }
      cVar5 = (**(code **)(this->_padding_ + 0x78))(this);
      if (cVar5 == '\0') {
        pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar8);
        if (pvVar7 != (void *)0x0) {
          FCachedPropertyPath::ResolveLeaf(param_2,pvVar7);
          CallParentGetters(param_3,param_2,pvVar7);
        }
        *param_4 = this;
        return true;
      }
      (**(code **)(this->_padding_ + 0x90))(this,param_1,param_3);
      *param_4 = this;
      return true;
    }
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// GetValue @ 14448fd30

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<TObjectPtr<UPropertyPathTestObject>,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,TObjectPtr<UPropertyPathTestObject> *param_3,
          FProperty **param_4)

{
  FProperty *pFVar1;
  EClassCastFlags EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  int iVar8;
  void *pvVar9;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar1 = (FProperty *)(pFVar7->Field).Container.Field;
  iVar8 = pFVar7->ArrayIndex;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if ((pFVar1 != (FProperty *)0x0) &&
       (EVar2 = ((FFieldClass *)pFVar1->_padding_)->CastFlags, (EVar2 >> 0xf & 1) != 0)) {
      if ((EVar2 >> 0x10 & 1) == 0) {
        return false;
      }
      if (iVar8 == -1) {
        iVar8 = 0;
      }
      if ((EVar2 & CASTCLASS_FByteProperty) == CASTCLASS_None) {
        bVar4 = pFVar1->ElementSize == 8;
      }
      else {
        bVar4 = pFVar1->ElementSize == 1;
      }
      if (!bVar4) {
        return false;
      }
      if (pFVar1->ArrayDim <= iVar8) {
        return false;
      }
      cVar6 = (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1);
      if (cVar6 == '\0') {
        if (((iVar8 < 0) || (pFVar1->ArrayDim <= iVar8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((param_1 == (void *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pvVar9 = (void *)((longlong)param_1 +
                         (longlong)pFVar1->Offset_Internal +
                         (longlong)iVar8 * (longlong)pFVar1->ElementSize);
        if (pvVar9 != (void *)0x0) {
          FCachedPropertyPath::ResolveLeaf(param_2,pvVar9);
          CallParentGetters(param_3,param_2,pvVar9);
        }
        *param_4 = pFVar1;
        return true;
      }
      (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,param_1,param_3);
      *param_4 = pFVar1;
      return true;
    }
  }
  else if (((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// GetValue @ 14448fee0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FPropertyPathTestStruct,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,FPropertyPathTestStruct *param_3,
          FProperty **param_4)

{
  FProperty *this;
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  UPackage *pUVar7;
  void *pvVar8;
  int iVar9;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FProperty *)(pFVar6->Field).Container.Field;
  iVar9 = pFVar6->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if (this != (FProperty *)0x0) {
      uVar1 = *(ulonglong *)(this->_padding_ + 0x18);
      if ((uVar1 >> 0xf & 1) != 0) {
        if ((uVar1 >> 0x14 & 1) == 0) {
          return false;
        }
        if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar7 = Z_Construct_UPackage__Script_PropertyPath();
          Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar7,
                               L"PropertyPathTestStruct");
        }
        if ((UScriptStruct *)this[1]._padding_ == (UScriptStruct *)0x0) {
          bVar3 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
                  (UScriptStruct *)0x0;
        }
        else {
          bVar3 = (UScriptStruct *)this[1]._padding_ ==
                  Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton;
        }
        if (!bVar3) {
          return false;
        }
        if (iVar9 == -1) {
          iVar9 = 0;
        }
        if ((*(byte *)(this->_padding_ + 0x18) & 0x40) == 0) {
          bVar3 = this->ElementSize == 0x60;
        }
        else {
          bVar3 = this->ElementSize == 1;
        }
        if (!bVar3) {
          return false;
        }
        if (this->ArrayDim <= iVar9) {
          return false;
        }
        cVar5 = (**(code **)(this->_padding_ + 0x78))(this);
        if (cVar5 == '\0') {
          pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar9);
          if (pvVar8 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
            CallParentGetters(param_3,param_2,pvVar8);
          }
          *param_4 = this;
          return true;
        }
        (**(code **)(this->_padding_ + 0x90))(this,param_1,param_3);
        *param_4 = this;
        return true;
      }
    }
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// GetValue @ 144490080

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FPropertyPathTestStruct,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,FPropertyPathTestStruct *param_3,
          FProperty **param_4)

{
  FProperty *pFVar1;
  EClassCastFlags EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  UPackage *pUVar8;
  int iVar9;
  void *pvVar10;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar1 = (FProperty *)(pFVar7->Field).Container.Field;
  iVar9 = pFVar7->ArrayIndex;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if (pFVar1 != (FProperty *)0x0) {
      EVar2 = ((FFieldClass *)pFVar1->_padding_)->CastFlags;
      if ((EVar2 >> 0xf & 1) != 0) {
        if ((EVar2 >> 0x14 & 1) == 0) {
          return false;
        }
        if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_PropertyPath();
          Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar8,
                               L"PropertyPathTestStruct");
        }
        if (((FFieldObjectUnion *)(pFVar1 + 1))->Field == (FField *)0x0) {
          bVar4 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
                  (UScriptStruct *)0x0;
        }
        else {
          bVar4 = (UScriptStruct *)((FFieldObjectUnion *)(pFVar1 + 1))->Field ==
                  Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton;
        }
        if (!bVar4) {
          return false;
        }
        if (iVar9 == -1) {
          iVar9 = 0;
        }
        if ((((FFieldClass *)pFVar1->_padding_)->CastFlags & CASTCLASS_FByteProperty) ==
            CASTCLASS_None) {
          bVar4 = pFVar1->ElementSize == 0x60;
        }
        else {
          bVar4 = pFVar1->ElementSize == 1;
        }
        if (!bVar4) {
          return false;
        }
        if (pFVar1->ArrayDim <= iVar9) {
          return false;
        }
        cVar6 = (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1);
        if (cVar6 == '\0') {
          if (((iVar9 < 0) || (pFVar1->ArrayDim <= iVar9)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pvVar10 = (void *)((longlong)param_1 +
                            (longlong)pFVar1->Offset_Internal +
                            (longlong)iVar9 * (longlong)pFVar1->ElementSize);
          if (pvVar10 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar10);
            CallParentGetters(param_3,param_2,pvVar10);
          }
          *param_4 = pFVar1;
          return true;
        }
        (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,param_1,param_3);
        *param_4 = pFVar1;
        return true;
      }
    }
  }
  else if (((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// GetValue @ 144490290

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<TEnumAsByte<enum_EPropertyPathTestEnum>,UObject>::
GetValue(UObject *param_1,FCachedPropertyPath *param_2,TEnumAsByte<EPropertyPathTestEnum> *param_3,
        FProperty **param_4)

{
  int iVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FFieldClass *pFVar8;
  void *pvVar9;
  FFieldClass **ppFVar10;
  FFieldObjectUnion FVar11;
  FFieldObjectUnion this;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FFieldObjectUnion)(pFVar7->Field).Container.Field;
  iVar1 = pFVar7->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this == (FField *)0x0) ||
       (((uint)(int)(*(FFieldClass **)((longlong)this + 8))->CastFlags >> 0xf & 1) == 0))
    goto LAB_1444902e8;
    ppFVar10 = (FFieldClass **)((longlong)this + 8);
    FVar11 = this;
    if (((*(FFieldClass **)((longlong)this + 8))->CastFlags & CASTCLASS_FEnumProperty) ==
        CASTCLASS_None) goto LAB_14449031e;
    FVar11 = (FFieldObjectUnion)((FFieldObjectUnion *)(this.Unknown + 0x70))->Field;
  }
  else {
    if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
    }
LAB_1444902e8:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    ppFVar10 = (FFieldClass **)&DAT_00000008;
    FVar11.Field = (FField *)0x0;
LAB_14449031e:
    this = FVar11;
    if ((FVar11.Field != (FField *)0x0) && (((uint)(int)(*ppFVar10)->CastFlags >> 0x11 & 1) != 0)) {
      bVar4 = *(char *)(FVar11.Unknown + 0x73) != -1;
      goto LAB_14449037d;
    }
  }
  pFVar2 = (FVar11.Field)->ClassPrivate;
  pFVar8 = FByteProperty::StaticClass();
  bVar4 = pFVar2 == pFVar8;
LAB_14449037d:
  if (bVar4) {
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    if ((*(int *)(this.Unknown + 0x34) == 1) && (iVar1 < *(int *)(this.Unknown + 0x30))) {
      cVar6 = (**(code **)((this.Field)->_padding_ + 0x78))(this.Field);
      if (cVar6 != '\0') {
        (**(code **)((this.Field)->_padding_ + 0x90))(this.Field,param_1,param_3);
        *param_4 = (FProperty *)this;
        return true;
      }
      pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this.Field,param_1,iVar1);
      if (pvVar9 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar9);
        CallParentGetters(param_3,param_2,pvVar9);
      }
      *param_4 = (FProperty *)this;
      return true;
    }
  }
  return false;
}

// GetValue @ 144490430

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<TEnumAsByte<enum_EPropertyPathTestEnum>,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,TEnumAsByte<EPropertyPathTestEnum> *param_3,
          FProperty **param_4)

{
  int iVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FFieldClass *pFVar8;
  FFieldClass **ppFVar9;
  FFieldObjectUnion FVar10;
  void *pvVar11;
  FFieldObjectUnion FVar12;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  FVar12 = (FFieldObjectUnion)(pFVar7->Field).Container.Field;
  iVar1 = pFVar7->ArrayIndex;
  if (((ulonglong)FVar12 & 1) == 0) {
    if ((FVar12 == (FField *)0x0) ||
       (((uint)(int)(*(FFieldClass **)((longlong)FVar12 + 8))->CastFlags >> 0xf & 1) == 0))
    goto LAB_144490488;
    ppFVar9 = (FFieldClass **)((longlong)FVar12 + 8);
    FVar10 = FVar12;
    if (((*(FFieldClass **)((longlong)FVar12 + 8))->CastFlags & CASTCLASS_FEnumProperty) ==
        CASTCLASS_None) goto LAB_1444904be;
    FVar10 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar12.Unknown + 0x70))->Field;
  }
  else {
    if (((UObject *)((ulonglong)FVar12 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar12 & 0xfffffffffffffffe));
    }
LAB_144490488:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    ppFVar9 = (FFieldClass **)&DAT_00000008;
    FVar10.Field = (FField *)0x0;
LAB_1444904be:
    FVar12 = FVar10;
    if ((FVar10.Field != (FField *)0x0) && (((uint)(int)(*ppFVar9)->CastFlags >> 0x11 & 1) != 0)) {
      bVar4 = *(char *)(FVar10.Unknown + 0x73) != -1;
      goto LAB_14449051d;
    }
  }
  pFVar2 = (FVar10.Field)->ClassPrivate;
  pFVar8 = FByteProperty::StaticClass();
  bVar4 = pFVar2 == pFVar8;
LAB_14449051d:
  if (bVar4) {
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    if ((*(int *)(FVar12.Unknown + 0x34) == 1) && (iVar1 < *(int *)(FVar12.Unknown + 0x30))) {
      cVar6 = (**(code **)((FVar12.Field)->_padding_ + 0x78))(FVar12.Field);
      if (cVar6 != '\0') {
        (**(code **)((FVar12.Field)->_padding_ + 0x90))(FVar12.Field,param_1,param_3);
        *param_4 = (FProperty *)FVar12;
        return true;
      }
      if (((iVar1 < 0) || (*(int *)(FVar12.Unknown + 0x30) <= iVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pvVar11 = (void *)((longlong)param_1 +
                        (longlong)*(int *)(FVar12.Unknown + 0x44) +
                        (longlong)iVar1 * (longlong)*(int *)(FVar12.Unknown + 0x34));
      if (pvVar11 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar11);
        CallParentGetters(param_3,param_2,pvVar11);
      }
      *param_4 = (FProperty *)FVar12;
      return true;
    }
  }
  return false;
}

// GetValue @ 144490640

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FString,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,FString *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  int iVar9;
  FProperty *this;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FProperty *)(pFVar6->Field).Container.Field;
  iVar9 = pFVar6->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)this->_padding_)->CastFlags >> 0xf & 1) != 0))
    goto LAB_1444906c8;
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  this = (FProperty *)0x0;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1444906c8:
  pFVar1 = (FFieldClass *)this->_padding_;
  pFVar7 = FStrProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    if (((*(byte *)(this->_padding_ + 0x18) & 0x40) == 0) || (this == (FProperty *)0x0)) {
      bVar3 = this->ElementSize == 0x10;
    }
    else {
      bVar3 = this->ElementSize == 1;
    }
    if ((bVar3) && (iVar9 < this->ArrayDim)) {
      cVar5 = (**(code **)(this->_padding_ + 0x78))(this);
      if (cVar5 != '\0') {
        (**(code **)(this->_padding_ + 0x90))(this,param_1,param_3);
        *param_4 = this;
        return true;
      }
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar9);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = this;
      return true;
    }
  }
  return false;
}

// GetValue @ 1444907a0

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<FString,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,FString *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  int iVar9;
  FProperty *pFVar10;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar10 = (FProperty *)(pFVar6->Field).Container.Field;
  iVar9 = pFVar6->ArrayIndex;
  if (((ulonglong)pFVar10 & 1) == 0) {
    if ((pFVar10 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar10->_padding_)->CastFlags >> 0xf & 1) != 0))
    goto LAB_144490828;
  }
  else if (((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  pFVar10 = (FProperty *)0x0;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_144490828:
  pFVar1 = (FFieldClass *)pFVar10->_padding_;
  pFVar7 = FStrProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    if (((((FFieldClass *)pFVar10->_padding_)->CastFlags & CASTCLASS_FByteProperty) ==
         CASTCLASS_None) || (pFVar10 == (FProperty *)0x0)) {
      bVar3 = pFVar10->ElementSize == 0x10;
    }
    else {
      bVar3 = pFVar10->ElementSize == 1;
    }
    if ((bVar3) && (iVar9 < pFVar10->ArrayDim)) {
      cVar5 = (**(code **)(pFVar10->_padding_ + 0x78))(pFVar10);
      if (cVar5 != '\0') {
        (**(code **)(pFVar10->_padding_ + 0x90))(pFVar10,param_1,param_3);
        *param_4 = pFVar10;
        return true;
      }
      if (((iVar9 < 0) || (pFVar10->ArrayDim <= iVar9)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pvVar8 = (void *)((longlong)param_1 +
                       (longlong)pFVar10->Offset_Internal +
                       (longlong)iVar9 * (longlong)pFVar10->ElementSize);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        CallParentGetters(param_3,param_2,pvVar8);
      }
      *param_4 = pFVar10;
      return true;
    }
  }
  return false;
}

// GetValue @ 144490980

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<bool,UObject>::GetValue
          (UObject *param_1,FCachedPropertyPath *param_2,bool *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPropertyPathSegment *pFVar5;
  FFieldClass *pFVar6;
  void *pvVar7;
  int iVar8;
  FBoolProperty *this;
  FBoolProperty *this_00;
  
  pFVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  this_00 = (FBoolProperty *)(pFVar5->Field).Container.Field;
  iVar8 = pFVar5->ArrayIndex;
  if (((ulonglong)this_00 & 1) == 0) {
    if ((this_00 == (FBoolProperty *)0x0) ||
       (((uint)(int)((FFieldClass *)this_00->_padding_)->CastFlags >> 0xf & 1) == 0))
    goto LAB_1444909e2;
  }
  else {
    if (((UObject *)((ulonglong)this_00 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)this_00 & 0xfffffffffffffffe));
    }
LAB_1444909e2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    this_00 = (FBoolProperty *)0x0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FFieldClass *)this_00->_padding_;
  pFVar6 = FBoolProperty::StaticClass();
  if (pFVar1 != pFVar6) {
    return false;
  }
  if (iVar8 == -1) {
    iVar8 = 0;
  }
  if (*(int *)((longlong)&this_00->_padding_ + 4) != 1) {
    return false;
  }
  if ((int)this_00->_padding_ <= iVar8) {
    return false;
  }
  pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,param_1,iVar8);
  if (pvVar7 == (void *)0x0) {
    return false;
  }
  FCachedPropertyPath::ResolveLeaf(param_2,pvVar7);
  this = (FBoolProperty *)(pFVar5->Field).Container.Field;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FBoolProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)this->_padding_)->CastFlags >> 0x11 & 1) != 0))
    goto LAB_144490ac1;
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  this = (FBoolProperty *)0x0;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_144490ac1:
  bVar3 = FBoolProperty::GetPropertyValue(this,pvVar7);
  *param_3 = bVar3;
  *param_4 = (FProperty *)this_00;
  return true;
}

// GetValue @ 144490b40

bool __cdecl
PropertyPathHelpersInternal::FGetValueHelper<bool,void>::GetValue
          (void *param_1,FCachedPropertyPath *param_2,bool *param_3,FProperty **param_4)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPropertyPathSegment *pFVar5;
  FFieldClass *pFVar6;
  void *pvVar7;
  int iVar8;
  FBoolProperty *this;
  FBoolProperty *pFVar9;
  
  pFVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar9 = (FBoolProperty *)(pFVar5->Field).Container.Field;
  iVar8 = pFVar5->ArrayIndex;
  if (((ulonglong)pFVar9 & 1) == 0) {
    if ((pFVar9 == (FBoolProperty *)0x0) ||
       (((uint)(int)((FFieldClass *)pFVar9->_padding_)->CastFlags >> 0xf & 1) == 0))
    goto LAB_144490ba2;
  }
  else {
    if (((UObject *)((ulonglong)pFVar9 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar9 & 0xfffffffffffffffe));
    }
LAB_144490ba2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar9 = (FBoolProperty *)0x0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FFieldClass *)pFVar9->_padding_;
  pFVar6 = FBoolProperty::StaticClass();
  if (pFVar1 != pFVar6) {
    return false;
  }
  if (iVar8 == -1) {
    iVar8 = 0;
  }
  if (*(int *)((longlong)&pFVar9->_padding_ + 4) != 1) {
    return false;
  }
  if ((int)pFVar9->_padding_ <= iVar8) {
    return false;
  }
  if ((iVar8 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pvVar7 = (void *)((longlong)param_1 +
                   (longlong)*(int *)((longlong)&pFVar9->_padding_ + 4) +
                   (longlong)*(int *)((longlong)&pFVar9->_padding_ + 4) * (longlong)iVar8);
  if (pvVar7 == (void *)0x0) {
    return false;
  }
  FCachedPropertyPath::ResolveLeaf(param_2,pvVar7);
  this = (FBoolProperty *)(pFVar5->Field).Container.Field;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FBoolProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)this->_padding_)->CastFlags >> 0x11 & 1) != 0))
    goto LAB_144490ce1;
  }
  else if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  this = (FBoolProperty *)0x0;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_144490ce1:
  bVar3 = FBoolProperty::GetPropertyValue(this,pvVar7);
  *param_3 = bVar3;
  *param_4 = (FProperty *)pFVar9;
  return true;
}

