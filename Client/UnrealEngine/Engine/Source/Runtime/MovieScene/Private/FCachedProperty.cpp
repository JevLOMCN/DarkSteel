// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// GetPropertyAddress<int> @ 146281730

int * __thiscall UE::MovieScene::FCachedProperty::GetPropertyAddress<int>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  
  pFVar7 = GetValidProperty(this);
  if (pFVar7 != (FProperty *)0x0) {
    if (this->ArrayIndex == -1) {
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          piVar8 = (int *)(*pcVar4)();
          return piVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          piVar8 = (int *)(*pcVar4)();
          return piVar8;
        }
      }
      return (int *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      piVar8 = (int *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          piVar8 = (int *)(*pcVar4)();
          return piVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          piVar8 = (int *)(*pcVar4)();
          return piVar8;
        }
      }
      iVar1 = pFVar7->Offset_Internal;
      lVar5 = pFVar7[1]._padding_;
      (**(code **)(*(longlong *)pFVar7[1]._padding_ + 0x168))();
      lVar3 = pFVar7[1]._padding_;
      puVar10 = (ulonglong *)((longlong)iVar1 + (longlong)pvVar2);
      iVar1 = *(int *)(lVar3 + 0x34);
      if (iVar1 < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          piVar8 = (int *)(*pcVar4)();
          return piVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          piVar8 = (int *)(*pcVar4)();
          return piVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          piVar8 = (int *)(*pcVar4)();
          return piVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        piVar8 = (int *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return piVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      piVar8 = (int *)(*pcVar4)();
      return piVar8;
    }
  }
  return (int *)0x0;
}

// GetPropertyAddress<float> @ 146281980

float * __thiscall UE::MovieScene::FCachedProperty::GetPropertyAddress<float>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  
  pFVar7 = GetValidProperty(this);
  if (pFVar7 != (FProperty *)0x0) {
    if (this->ArrayIndex == -1) {
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pfVar8 = (float *)(*pcVar4)();
          return pfVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pfVar8 = (float *)(*pcVar4)();
          return pfVar8;
        }
      }
      return (float *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pfVar8 = (float *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pfVar8 = (float *)(*pcVar4)();
          return pfVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pfVar8 = (float *)(*pcVar4)();
          return pfVar8;
        }
      }
      iVar1 = pFVar7->Offset_Internal;
      lVar5 = pFVar7[1]._padding_;
      (**(code **)(*(longlong *)pFVar7[1]._padding_ + 0x168))();
      lVar3 = pFVar7[1]._padding_;
      puVar10 = (ulonglong *)((longlong)iVar1 + (longlong)pvVar2);
      iVar1 = *(int *)(lVar3 + 0x34);
      if (iVar1 < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pfVar8 = (float *)(*pcVar4)();
          return pfVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pfVar8 = (float *)(*pcVar4)();
          return pfVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pfVar8 = (float *)(*pcVar4)();
          return pfVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pfVar8 = (float *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pfVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pfVar8 = (float *)(*pcVar4)();
      return pfVar8;
    }
  }
  return (float *)0x0;
}

// GetPropertyAddress<double> @ 146281bd0

double * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<double>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  double *pdVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  
  pFVar7 = GetValidProperty(this);
  if (pFVar7 != (FProperty *)0x0) {
    if (this->ArrayIndex == -1) {
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pdVar8 = (double *)(*pcVar4)();
          return pdVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pdVar8 = (double *)(*pcVar4)();
          return pdVar8;
        }
      }
      return (double *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pdVar8 = (double *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pdVar8 = (double *)(*pcVar4)();
          return pdVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pdVar8 = (double *)(*pcVar4)();
          return pdVar8;
        }
      }
      iVar1 = pFVar7->Offset_Internal;
      lVar5 = pFVar7[1]._padding_;
      (**(code **)(*(longlong *)pFVar7[1]._padding_ + 0x168))();
      lVar3 = pFVar7[1]._padding_;
      puVar10 = (ulonglong *)((longlong)iVar1 + (longlong)pvVar2);
      iVar1 = *(int *)(lVar3 + 0x34);
      if (iVar1 < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pdVar8 = (double *)(*pcVar4)();
          return pdVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pdVar8 = (double *)(*pcVar4)();
          return pdVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pdVar8 = (double *)(*pcVar4)();
          return pdVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pdVar8 = (double *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pdVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pdVar8 = (double *)(*pcVar4)();
      return pdVar8;
    }
  }
  return (double *)0x0;
}

// FCachedProperty @ 146299190

FCachedProperty * __thiscall
UE::MovieScene::FCachedProperty::FCachedProperty(FCachedProperty *this,FCachedProperty *param_1)

{
  FFieldClass *pFVar1;
  
  (this->Property).Owner.WeakPtr = (param_1->Property).Owner.WeakPtr;
  *(undefined8 *)&(this->Property).Field = 0;
  *(undefined8 *)&(this->Property).Field.field_0x8 = 0;
  *(undefined8 *)&(this->Property).Field.field_0x10 = 0;
  *(undefined8 *)&(this->Property).Field.field_0x18 = 0;
  pFVar1 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&(param_1->Property).Field,pFVar1,(UStruct *)0x0);
  FFieldPath::operator=
            ((FFieldPath *)&(this->Property).Field,(FFieldPath *)&(param_1->Property).Field);
  this->ContainerAddress = param_1->ContainerAddress;
  this->ArrayIndex = param_1->ArrayIndex;
  return this;
}

// GetValidProperty @ 1462b1030

FProperty * __thiscall UE::MovieScene::FCachedProperty::GetValidProperty(FCachedProperty *this)

{
  UObject *pUVar1;
  FFieldClass *pFVar2;
  FProperty *pFVar3;
  FProperty *pFVar4;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar1 == (UObject *)0x0) {
    *(undefined8 *)&(this->Property).Field = 0;
    pFVar3 = (FProperty *)0x0;
  }
  else {
    pFVar2 = FProperty::StaticClass();
    pFVar3 = (FProperty *)
             FFieldPath::GetTyped((FFieldPath *)&(this->Property).Field,pFVar2,(UStruct *)0x0);
  }
  if ((this->ContainerAddress != (void *)0x0) && (pFVar3 != (FProperty *)0x0)) {
    pFVar4 = (FProperty *)0x0;
    if ((*(EObjectFlags *)&pFVar3->_padding_ & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags
       ) {
      pFVar4 = pFVar3;
    }
    return pFVar4;
  }
  return (FProperty *)0x0;
}

