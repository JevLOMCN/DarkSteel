// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// GetPropertyAddress<FMargin> @ 1468edaf0

FMargin * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<FMargin>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FMargin *pFVar8;
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
          pFVar8 = (FMargin *)(*pcVar4)();
          return pFVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FMargin *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FMargin *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FMargin *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FMargin *)(*pcVar4)();
          return pFVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FMargin *)(*pcVar4)();
          return pFVar8;
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
          pFVar8 = (FMargin *)(*pcVar4)();
          return pFVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FMargin *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FMargin *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FMargin *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMargin *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FMargin *)0x0;
}

// GetPropertyAddress<FWidgetTransform> @ 1468edd40

FWidgetTransform * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<FWidgetTransform>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FWidgetTransform *pFVar8;
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
          pFVar8 = (FWidgetTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FWidgetTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FWidgetTransform *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FWidgetTransform *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FWidgetTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FWidgetTransform *)(*pcVar4)();
          return pFVar8;
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
          pFVar8 = (FWidgetTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FWidgetTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FWidgetTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FWidgetTransform *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FWidgetTransform *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FWidgetTransform *)0x0;
}

