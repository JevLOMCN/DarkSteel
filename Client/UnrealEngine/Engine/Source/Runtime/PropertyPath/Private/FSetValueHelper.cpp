// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 15

// SetValue @ 1444937a0

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<int,UObject>::SetValue
          (UObject *param_1,FCachedPropertyPath *param_2,int *param_3)

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
      goto LAB_144493835;
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
LAB_144493835:
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
      cVar6 = (**(code **)((this.Field)->_padding_ + 0x70))(this.Field);
      if (cVar6 != '\0') {
        (**(code **)((this.Field)->_padding_ + 0x88))(this.Field,param_1,param_3);
        return true;
      }
      pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this.Field,param_1,iVar1);
      if (pvVar9 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar9);
        FProperty::CopySingleValue((FProperty *)this.Field,pvVar9,param_3);
        CallParentSetters(param_2);
      }
      return true;
    }
  }
  return false;
}

// SetValue @ 144493930

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<int,void>::SetValue
          (void *param_1,FCachedPropertyPath *param_2,int *param_3)

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
  int *_Dst;
  FFieldObjectUnion FVar10;
  FFieldClass **ppFVar11;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  FVar10 = (FFieldObjectUnion)(pFVar7->Field).Container.Field;
  iVar1 = pFVar7->ArrayIndex;
  if (((ulonglong)FVar10 & 1) == 0) {
    if ((FVar10 != (FField *)0x0) &&
       (((uint)(int)(*(FFieldClass **)((longlong)FVar10 + 8))->CastFlags >> 0xf & 1) != 0)) {
      ppFVar11 = (FFieldClass **)((longlong)FVar10 + 8);
      FVar9 = FVar10;
      if (((*(FFieldClass **)((longlong)FVar10 + 8))->CastFlags & CASTCLASS_FEnumProperty) !=
          CASTCLASS_None) {
        FVar9 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar10.Unknown + 0x70))->Field;
      }
      goto LAB_1444939c5;
    }
  }
  else if (((UObject *)((ulonglong)FVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar10 & 0xfffffffffffffffe));
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
  FVar9.Field = (FField *)0x0;
  FVar10.Field = (FField *)0x0;
LAB_1444939c5:
  pFVar2 = (FVar9.Field)->ClassPrivate;
  pFVar8 = FIntProperty::StaticClass();
  if (pFVar2 == pFVar8) {
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    if ((FVar10.Field == (FField *)0x0) ||
       (((*ppFVar11)->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)) {
      bVar4 = *(int *)(FVar10.Unknown + 0x34) == 4;
    }
    else {
      bVar4 = *(int *)(FVar10.Unknown + 0x34) == 1;
    }
    if ((bVar4) && (iVar1 < *(int *)(FVar10.Unknown + 0x30))) {
      cVar6 = (**(code **)((FVar10.Field)->_padding_ + 0x70))(FVar10.Field);
      if (cVar6 != '\0') {
        (**(code **)((FVar10.Field)->_padding_ + 0x88))(FVar10.Field,param_1,param_3);
        return true;
      }
      if (((iVar1 < 0) || (*(int *)(FVar10.Unknown + 0x30) <= iVar1)) &&
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
      _Dst = (int *)((longlong)param_1 +
                    (longlong)*(int *)(FVar10.Unknown + 0x44) +
                    (longlong)iVar1 * (longlong)*(int *)(FVar10.Unknown + 0x34));
      if (_Dst != (int *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,_Dst);
        if (_Dst != param_3) {
          if ((*(uint *)(FVar10.Unknown + 0x38) >> 0x1e & 1) != 0) {
            memcpy(_Dst,param_3,(longlong)*(int *)(FVar10.Unknown + 0x34));
            CallParentSetters(param_2);
            return true;
          }
          (**(code **)((FVar10.Field)->_padding_ + 0xf0))(FVar10.Field,_Dst,param_3,1);
        }
        CallParentSetters(param_2);
      }
      return true;
    }
  }
  return false;
}

// SetValue @ 144493b70

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<float,UObject>::SetValue
          (UObject *param_1,FCachedPropertyPath *param_2,float *param_3)

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
    goto LAB_144493bf7;
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
LAB_144493bf7:
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
      cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
      if (cVar5 != '\0') {
        (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3);
        return true;
      }
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar9);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        FProperty::CopySingleValue(this,pvVar8,param_3);
        CallParentSetters(param_2);
      }
      return true;
    }
  }
  return false;
}

// SetValue @ 144493cd0

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<float,void>::SetValue
          (void *param_1,FCachedPropertyPath *param_2,float *param_3)

{
  int iVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FFieldClass *pFVar8;
  float *_Dst;
  int iVar9;
  FField *pFVar10;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar10 = (pFVar7->Field).Container.Field;
  iVar9 = pFVar7->ArrayIndex;
  if (((ulonglong)pFVar10 & 1) == 0) {
    if ((pFVar10 != (FField *)0x0) &&
       (((uint)(int)pFVar10->ClassPrivate->CastFlags >> 0xf & 1) != 0)) goto LAB_144493d57;
  }
  else if (((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  pFVar10 = (FField *)0x0;
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_144493d57:
  pFVar2 = pFVar10->ClassPrivate;
  pFVar8 = FFloatProperty::StaticClass();
  if (pFVar2 == pFVar8) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    iVar1 = *(int *)((longlong)&pFVar10[1]._padding_ + 4);
    if (((pFVar10->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None) ||
       (pFVar10 == (FField *)0x0)) {
      bVar4 = iVar1 == 4;
    }
    else {
      bVar4 = iVar1 == 1;
    }
    if ((bVar4) && (iVar9 < (int)pFVar10[1]._padding_)) {
      cVar6 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10);
      if (cVar6 != '\0') {
        (**(code **)(pFVar10->_padding_ + 0x88))(pFVar10,param_1,param_3);
        return true;
      }
      if (((iVar9 < 0) || ((int)pFVar10[1]._padding_ <= iVar9)) &&
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
      _Dst = (float *)((longlong)param_1 +
                      (longlong)*(int *)((longlong)&pFVar10[1].Owner.Container + 4) +
                      (longlong)iVar9 * (longlong)*(int *)((longlong)&pFVar10[1]._padding_ + 4));
      if (_Dst != (float *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,_Dst);
        if (_Dst != param_3) {
          if ((*(uint *)&pFVar10[1].ClassPrivate >> 0x1e & 1) != 0) {
            memcpy(_Dst,param_3,(longlong)*(int *)((longlong)&pFVar10[1]._padding_ + 4));
            CallParentSetters(param_2);
            return true;
          }
          (**(code **)(pFVar10->_padding_ + 0xf0))(pFVar10,_Dst,param_3,1);
        }
        CallParentSetters(param_2);
      }
      return true;
    }
  }
  return false;
}

// SetValue @ 144493ee0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<TObjectPtr<UPropertyPathTestObject>,UObject>::SetValue
          (UObject *param_1,FCachedPropertyPath *param_2,
          TObjectPtr<UPropertyPathTestObject> *param_3)

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
      cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
      if (cVar5 == '\0') {
        pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar8);
        if (pvVar7 != (void *)0x0) {
          FCachedPropertyPath::ResolveLeaf(param_2,pvVar7);
          FProperty::CopySingleValue(this,pvVar7,param_3);
          CallParentSetters(param_2);
        }
        return true;
      }
      (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3);
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

// SetValue @ 144494020

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<TObjectPtr<UPropertyPathTestObject>,void>::SetValue
          (void *param_1,FCachedPropertyPath *param_2,TObjectPtr<UPropertyPathTestObject> *param_3)

{
  FField *pFVar1;
  EClassCastFlags EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  int iVar8;
  TObjectPtr<UPropertyPathTestObject> *_Dst;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar1 = (pFVar7->Field).Container.Field;
  iVar8 = pFVar7->ArrayIndex;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if ((pFVar1 != (FField *)0x0) &&
       (EVar2 = pFVar1->ClassPrivate->CastFlags, (EVar2 >> 0xf & 1) != 0)) {
      if ((EVar2 >> 0x10 & 1) == 0) {
        return false;
      }
      if (iVar8 == -1) {
        iVar8 = 0;
      }
      if ((EVar2 & CASTCLASS_FByteProperty) == CASTCLASS_None) {
        bVar4 = *(int *)((longlong)&pFVar1[1]._padding_ + 4) == 8;
      }
      else {
        bVar4 = *(int *)((longlong)&pFVar1[1]._padding_ + 4) == 1;
      }
      if (!bVar4) {
        return false;
      }
      if ((int)pFVar1[1]._padding_ <= iVar8) {
        return false;
      }
      cVar6 = (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1);
      if (cVar6 == '\0') {
        if (((iVar8 < 0) || ((int)pFVar1[1]._padding_ <= iVar8)) &&
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
        _Dst = (TObjectPtr<UPropertyPathTestObject> *)
               ((longlong)param_1 +
               (longlong)*(int *)((longlong)&pFVar1[1].Owner.Container + 4) +
               (longlong)iVar8 * (longlong)*(int *)((longlong)&pFVar1[1]._padding_ + 4));
        if (_Dst != (TObjectPtr<UPropertyPathTestObject> *)0x0) {
          FCachedPropertyPath::ResolveLeaf(param_2,_Dst);
          if (_Dst != param_3) {
            if ((*(uint *)&pFVar1[1].ClassPrivate >> 0x1e & 1) != 0) {
              memcpy(_Dst,param_3,(longlong)*(int *)((longlong)&pFVar1[1]._padding_ + 4));
              CallParentSetters(param_2);
              return true;
            }
            (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,_Dst,param_3,1);
          }
          CallParentSetters(param_2);
        }
        return true;
      }
      (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,param_1,param_3);
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

// SetValue @ 144494200

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<FPropertyPathTestStruct,UObject>::SetValue
          (UObject *param_1,FCachedPropertyPath *param_2,FPropertyPathTestStruct *param_3)

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
        cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
        if (cVar5 == '\0') {
          pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar9);
          if (pvVar8 != (void *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
            FProperty::CopySingleValue(this,pvVar8,param_3);
            CallParentSetters(param_2);
          }
          return true;
        }
        (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3);
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

// SetValue @ 1444943a0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<FPropertyPathTestStruct,void>::SetValue
          (void *param_1,FCachedPropertyPath *param_2,FPropertyPathTestStruct *param_3)

{
  FField *pFVar1;
  EClassCastFlags EVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FPropertyPathSegment *pFVar8;
  UPackage *pUVar9;
  int iVar10;
  FPropertyPathTestStruct *_Dst;
  
  pFVar8 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar1 = (pFVar8->Field).Container.Field;
  iVar10 = pFVar8->ArrayIndex;
  if (((ulonglong)pFVar1 & 1) == 0) {
    if (pFVar1 != (FField *)0x0) {
      EVar2 = pFVar1->ClassPrivate->CastFlags;
      if ((EVar2 >> 0xf & 1) != 0) {
        if ((EVar2 >> 0x14 & 1) == 0) {
          return false;
        }
        if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_PropertyPath();
          Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar9,
                               L"PropertyPathTestStruct");
        }
        pUVar3 = (UScriptStruct *)pFVar1[2].Owner.Container.Field;
        if (pUVar3 == (UScriptStruct *)0x0) {
          bVar5 = Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
                  (UScriptStruct *)0x0;
        }
        else {
          bVar5 = pUVar3 == Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton
          ;
        }
        if (!bVar5) {
          return false;
        }
        if (iVar10 == -1) {
          iVar10 = 0;
        }
        if ((pFVar1->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None) {
          bVar5 = *(int *)((longlong)&pFVar1[1]._padding_ + 4) == 0x60;
        }
        else {
          bVar5 = *(int *)((longlong)&pFVar1[1]._padding_ + 4) == 1;
        }
        if (!bVar5) {
          return false;
        }
        if ((int)pFVar1[1]._padding_ <= iVar10) {
          return false;
        }
        cVar7 = (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1);
        if (cVar7 == '\0') {
          if (((iVar10 < 0) || ((int)pFVar1[1]._padding_ <= iVar10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((param_1 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          _Dst = (FPropertyPathTestStruct *)
                 ((longlong)param_1 +
                 (longlong)*(int *)((longlong)&pFVar1[1].Owner.Container + 4) +
                 (longlong)iVar10 * (longlong)*(int *)((longlong)&pFVar1[1]._padding_ + 4));
          if (_Dst != (FPropertyPathTestStruct *)0x0) {
            FCachedPropertyPath::ResolveLeaf(param_2,_Dst);
            if (_Dst != param_3) {
              if ((*(uint *)&pFVar1[1].ClassPrivate >> 0x1e & 1) != 0) {
                memcpy(_Dst,param_3,(longlong)*(int *)((longlong)&pFVar1[1]._padding_ + 4));
                CallParentSetters(param_2);
                return true;
              }
              (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,_Dst,param_3,1);
            }
            CallParentSetters(param_2);
          }
          return true;
        }
        (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,param_1,param_3);
        return true;
      }
    }
  }
  else if (((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar1 & 0xfffffffffffffffe));
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  if (!bVar5) {
    return false;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// SetValue @ 1444945f0

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<PropertyPathHelpersInternal::FPropertyStructView,void>
::SetValue(void *param_1,FCachedPropertyPath *param_2,FPropertyStructView *param_3)

{
  uchar *_Src;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FPropertyPathSegment *pFVar5;
  int iVar6;
  FField *pFVar7;
  int iVar8;
  uchar *_Dst;
  
  pFVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar7 = (pFVar5->Field).Container.Field;
  iVar8 = pFVar5->ArrayIndex;
  if (((ulonglong)pFVar7 & 1) == 0) {
    if ((pFVar7 != (FField *)0x0) && (((uint)(int)pFVar7->ClassPrivate->CastFlags >> 0xf & 1) != 0))
    goto LAB_144494675;
  }
  else if (((UObject *)((ulonglong)pFVar7 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar7 & 0xfffffffffffffffe));
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  pFVar7 = (FField *)0x0;
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_144494675:
  if (iVar8 == -1) {
    iVar8 = 0;
  }
  iVar6 = (int)*(short *)((longlong)&param_3->ScriptStruct->_padding_ + 4);
  if ((*(uint *)((longlong)&pFVar7[1]._padding_ + 4) ==
       (iVar6 + -1 + (int)param_3->ScriptStruct->_padding_ & -iVar6)) &&
     (iVar8 < (int)pFVar7[1]._padding_)) {
    cVar4 = (**(code **)(pFVar7->_padding_ + 0x70))(pFVar7);
    if (cVar4 == '\0') {
      if (((iVar8 < 0) || ((int)pFVar7[1]._padding_ <= iVar8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      _Dst = (uchar *)((longlong)param_1 +
                      (longlong)*(int *)((longlong)&pFVar7[1].Owner.Container + 4) +
                      (longlong)iVar8 * (longlong)*(int *)((longlong)&pFVar7[1]._padding_ + 4));
      if (_Dst != (uchar *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,_Dst);
        _Src = param_3->Memory;
        if (_Dst != _Src) {
          if ((*(uint *)&pFVar7[1].ClassPrivate >> 0x1e & 1) != 0) {
            memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&pFVar7[1]._padding_ + 4));
            CallParentSetters(param_2);
            return true;
          }
          (**(code **)(pFVar7->_padding_ + 0xf0))(pFVar7,_Dst,_Src,1);
        }
        CallParentSetters(param_2);
      }
      bVar2 = true;
    }
    else {
      (**(code **)(pFVar7->_padding_ + 0x88))(pFVar7,param_1,param_3->Memory);
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// SetValue @ 1444947e0

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<FString,UObject>::SetValue
          (UObject *param_1,FCachedPropertyPath *param_2,FString *param_3)

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
    goto LAB_144494867;
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
LAB_144494867:
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
      cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
      if (cVar5 != '\0') {
        (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3);
        return true;
      }
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar9);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        FProperty::CopySingleValue(this,pvVar8,param_3);
        CallParentSetters(param_2);
      }
      return true;
    }
  }
  return false;
}

// SetValue @ 144494940

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<FString,void>::SetValue
          (void *param_1,FCachedPropertyPath *param_2,FString *param_3)

{
  int iVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FPropertyPathSegment *pFVar7;
  FFieldClass *pFVar8;
  FString *_Dst;
  int iVar9;
  FField *pFVar10;
  
  pFVar7 = FCachedPropertyPath::GetLastSegment(param_2);
  pFVar10 = (pFVar7->Field).Container.Field;
  iVar9 = pFVar7->ArrayIndex;
  if (((ulonglong)pFVar10 & 1) == 0) {
    if ((pFVar10 != (FField *)0x0) &&
       (((uint)(int)pFVar10->ClassPrivate->CastFlags >> 0xf & 1) != 0)) goto LAB_1444949c7;
  }
  else if (((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)pFVar10 & 0xfffffffffffffffe));
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
  pFVar10 = (FField *)0x0;
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_1444949c7:
  pFVar2 = pFVar10->ClassPrivate;
  pFVar8 = FStrProperty::StaticClass();
  if (pFVar2 == pFVar8) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    iVar1 = *(int *)((longlong)&pFVar10[1]._padding_ + 4);
    if (((pFVar10->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None) ||
       (pFVar10 == (FField *)0x0)) {
      bVar4 = iVar1 == 0x10;
    }
    else {
      bVar4 = iVar1 == 1;
    }
    if ((bVar4) && (iVar9 < (int)pFVar10[1]._padding_)) {
      cVar6 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10);
      if (cVar6 != '\0') {
        (**(code **)(pFVar10->_padding_ + 0x88))(pFVar10,param_1,param_3);
        return true;
      }
      if (((iVar9 < 0) || ((int)pFVar10[1]._padding_ <= iVar9)) &&
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
      _Dst = (FString *)
             ((longlong)param_1 +
             (longlong)*(int *)((longlong)&pFVar10[1].Owner.Container + 4) +
             (longlong)iVar9 * (longlong)*(int *)((longlong)&pFVar10[1]._padding_ + 4));
      if (_Dst != (FString *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,_Dst);
        if (_Dst != param_3) {
          if ((*(uint *)&pFVar10[1].ClassPrivate >> 0x1e & 1) != 0) {
            memcpy(_Dst,param_3,(longlong)*(int *)((longlong)&pFVar10[1]._padding_ + 4));
            CallParentSetters(param_2);
            return true;
          }
          (**(code **)(pFVar10->_padding_ + 0xf0))(pFVar10,_Dst,param_3,1);
        }
        CallParentSetters(param_2);
      }
      return true;
    }
  }
  return false;
}

// SetValue @ 144494b50

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<enum_EPropertyPathTestEnum,UObject>::SetValue
          (UObject *param_1,FCachedPropertyPath *param_2,EPropertyPathTestEnum *param_3)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  FFieldClass *pFVar7;
  void *pvVar8;
  FFieldClass **ppFVar9;
  FFieldObjectUnion FVar10;
  int iVar11;
  FFieldObjectUnion this;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FFieldObjectUnion)(pFVar6->Field).Container.Field;
  iVar11 = pFVar6->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this == (FField *)0x0) ||
       (((uint)(int)(*(FFieldClass **)((longlong)this + 8))->CastFlags >> 0xf & 1) == 0))
    goto LAB_144494ba7;
    ppFVar9 = (FFieldClass **)((longlong)this + 8);
    FVar10 = this;
    if (((*(FFieldClass **)((longlong)this + 8))->CastFlags & CASTCLASS_FEnumProperty) ==
        CASTCLASS_None) goto LAB_144494be0;
    FVar10 = (FFieldObjectUnion)((FFieldObjectUnion *)(this.Unknown + 0x70))->Field;
  }
  else {
    if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
    }
LAB_144494ba7:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    ppFVar9 = (FFieldClass **)&DAT_00000008;
    FVar10.Field = (FField *)0x0;
LAB_144494be0:
    this = FVar10;
    if ((FVar10.Field != (FField *)0x0) && (((uint)(int)(*ppFVar9)->CastFlags >> 0x11 & 1) != 0)) {
      bVar3 = *(char *)(FVar10.Unknown + 0x73) != -1;
      goto LAB_144494c3f;
    }
  }
  pFVar1 = (FVar10.Field)->ClassPrivate;
  pFVar7 = FByteProperty::StaticClass();
  bVar3 = pFVar1 == pFVar7;
LAB_144494c3f:
  if (bVar3) {
    if (iVar11 == -1) {
      iVar11 = 0;
    }
    if ((this.Field == (FField *)0x0) ||
       (((this.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)) {
      bVar3 = *(int *)(this.Unknown + 0x34) == 4;
    }
    else {
      bVar3 = *(int *)(this.Unknown + 0x34) == 1;
    }
    if ((bVar3) && (iVar11 < *(int *)(this.Unknown + 0x30))) {
      cVar5 = (**(code **)((this.Field)->_padding_ + 0x70))(this.Field);
      if (cVar5 != '\0') {
        (**(code **)((this.Field)->_padding_ + 0x88))(this.Field,param_1,param_3);
        return true;
      }
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this.Field,param_1,iVar11);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        FProperty::CopySingleValue((FProperty *)this.Field,pvVar8,param_3);
        CallParentSetters(param_2);
      }
      return true;
    }
  }
  return false;
}

// SetValue @ 144494cf0

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<enum_EPropertyPathTestEnum,void>::SetValue
          (void *param_1,FCachedPropertyPath *param_2,EPropertyPathTestEnum *param_3)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyPathSegment *pFVar6;
  FFieldClass *pFVar7;
  FFieldClass **ppFVar8;
  FFieldObjectUnion FVar9;
  EPropertyPathTestEnum *_Dst;
  int iVar10;
  FFieldObjectUnion FVar11;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  FVar11 = (FFieldObjectUnion)(pFVar6->Field).Container.Field;
  iVar10 = pFVar6->ArrayIndex;
  if (((ulonglong)FVar11 & 1) == 0) {
    if ((FVar11 == (FField *)0x0) ||
       (((uint)(int)(*(FFieldClass **)((longlong)FVar11 + 8))->CastFlags >> 0xf & 1) == 0))
    goto LAB_144494d47;
    ppFVar8 = (FFieldClass **)((longlong)FVar11 + 8);
    FVar9 = FVar11;
    if (((*(FFieldClass **)((longlong)FVar11 + 8))->CastFlags & CASTCLASS_FEnumProperty) ==
        CASTCLASS_None) goto LAB_144494d80;
    FVar9 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar11.Unknown + 0x70))->Field;
  }
  else {
    if (((UObject *)((ulonglong)FVar11 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar11 & 0xfffffffffffffffe));
    }
LAB_144494d47:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    ppFVar8 = (FFieldClass **)&DAT_00000008;
    FVar9.Field = (FField *)0x0;
LAB_144494d80:
    FVar11 = FVar9;
    if ((FVar9.Field != (FField *)0x0) && (((uint)(int)(*ppFVar8)->CastFlags >> 0x11 & 1) != 0)) {
      bVar3 = *(char *)(FVar9.Unknown + 0x73) != -1;
      goto LAB_144494ddf;
    }
  }
  pFVar1 = (FVar9.Field)->ClassPrivate;
  pFVar7 = FByteProperty::StaticClass();
  bVar3 = pFVar1 == pFVar7;
LAB_144494ddf:
  if (bVar3) {
    if (iVar10 == -1) {
      iVar10 = 0;
    }
    if ((FVar11.Field == (FField *)0x0) ||
       (((FVar11.Field)->ClassPrivate->CastFlags & CASTCLASS_FByteProperty) == CASTCLASS_None)) {
      bVar3 = *(int *)(FVar11.Unknown + 0x34) == 4;
    }
    else {
      bVar3 = *(int *)(FVar11.Unknown + 0x34) == 1;
    }
    if ((bVar3) && (iVar10 < *(int *)(FVar11.Unknown + 0x30))) {
      cVar5 = (**(code **)((FVar11.Field)->_padding_ + 0x70))(FVar11.Field);
      if (cVar5 != '\0') {
        (**(code **)((FVar11.Field)->_padding_ + 0x88))(FVar11.Field,param_1,param_3);
        return true;
      }
      if (((iVar10 < 0) || (*(int *)(FVar11.Unknown + 0x30) <= iVar10)) &&
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
      _Dst = (EPropertyPathTestEnum *)
             ((longlong)param_1 +
             (longlong)*(int *)(FVar11.Unknown + 0x44) +
             (longlong)iVar10 * (longlong)*(int *)(FVar11.Unknown + 0x34));
      if (_Dst != (EPropertyPathTestEnum *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,_Dst);
        if (_Dst != param_3) {
          if ((*(uint *)(FVar11.Unknown + 0x38) >> 0x1e & 1) != 0) {
            memcpy(_Dst,param_3,(longlong)*(int *)(FVar11.Unknown + 0x34));
            CallParentSetters(param_2);
            return true;
          }
          (**(code **)((FVar11.Field)->_padding_ + 0xf0))(FVar11.Field,_Dst,param_3,1);
        }
        CallParentSetters(param_2);
      }
      return true;
    }
  }
  return false;
}

// SetValue @ 144494f40

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<bool,UObject>::SetValue
          (UObject *param_1,FCachedPropertyPath *param_2,bool *param_3)

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
  FBoolProperty *this;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FBoolProperty *)(pFVar6->Field).Container.Field;
  iVar9 = pFVar6->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FBoolProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)this->_padding_)->CastFlags >> 0xf & 1) != 0))
    goto LAB_144494fca;
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
LAB_144494fca:
  pFVar1 = (FFieldClass *)this->_padding_;
  pFVar7 = FBoolProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    if (((*(int *)((longlong)&this->_padding_ + 4) == 1) && (iVar9 < (int)this->_padding_)) &&
       (pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this,param_1,iVar9),
       pvVar8 != (void *)0x0)) {
      FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
      cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
      if (cVar5 != '\0') {
        (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3);
        return true;
      }
      if (((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x472,L"CastFieldChecked failed with 0x%016llx"),
         this = (FBoolProperty *)0x0, bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FBoolProperty::SetPropertyValue(this,param_2->CachedAddress,*param_3);
      CallParentSetters(param_2);
      return true;
    }
  }
  return false;
}

// SetValue @ 1444950f0

bool __cdecl
PropertyPathHelpersInternal::FSetValueHelper<bool,void>::SetValue
          (void *param_1,FCachedPropertyPath *param_2,bool *param_3)

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
  FBoolProperty *this;
  
  pFVar6 = FCachedPropertyPath::GetLastSegment(param_2);
  this = (FBoolProperty *)(pFVar6->Field).Container.Field;
  iVar9 = pFVar6->ArrayIndex;
  if (((ulonglong)this & 1) == 0) {
    if ((this != (FBoolProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)this->_padding_)->CastFlags >> 0xf & 1) != 0))
    goto LAB_14449517a;
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
LAB_14449517a:
  pFVar1 = (FFieldClass *)this->_padding_;
  pFVar7 = FBoolProperty::StaticClass();
  if (pFVar1 == pFVar7) {
    if (iVar9 == -1) {
      iVar9 = 0;
    }
    if ((*(int *)((longlong)&this->_padding_ + 4) == 1) && (iVar9 < (int)this->_padding_)) {
      if ((iVar9 < 0) &&
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
                       (longlong)*(int *)((longlong)&this->_padding_ + 4) +
                       (longlong)*(int *)((longlong)&this->_padding_ + 4) * (longlong)iVar9);
      if (pvVar8 != (void *)0x0) {
        FCachedPropertyPath::ResolveLeaf(param_2,pvVar8);
        cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
        if (cVar5 != '\0') {
          (**(code **)(this->_padding_ + 0x88))(this,param_1,param_3);
          return true;
        }
        if ((((uint)(int)((FFieldClass *)this->_padding_)->CastFlags >> 0x11 & 1) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"),
           this = (FBoolProperty *)0x0, bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FBoolProperty::SetPropertyValue(this,param_2->CachedAddress,*param_3);
        CallParentSetters(param_2);
        return true;
      }
    }
  }
  return false;
}

