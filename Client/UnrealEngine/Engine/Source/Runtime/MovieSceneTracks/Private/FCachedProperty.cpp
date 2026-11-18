// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 19

// GetPropertyAddress<signed_char> @ 1465d5420

schar * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<signed_char>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  schar *psVar8;
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
          psVar8 = (schar *)(*pcVar4)();
          return psVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (schar *)(*pcVar4)();
          return psVar8;
        }
      }
      return (schar *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      psVar8 = (schar *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (schar *)(*pcVar4)();
          return psVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (schar *)(*pcVar4)();
          return psVar8;
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
          psVar8 = (schar *)(*pcVar4)();
          return psVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (schar *)(*pcVar4)();
          return psVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (schar *)(*pcVar4)();
          return psVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        psVar8 = (schar *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return psVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      psVar8 = (schar *)(*pcVar4)();
      return psVar8;
    }
  }
  return (schar *)0x0;
}

// GetPropertyAddress<unsigned_char> @ 1465d5670

uchar * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<unsigned_char>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  uchar *puVar8;
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
          puVar8 = (uchar *)(*pcVar4)();
          return puVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          puVar8 = (uchar *)(*pcVar4)();
          return puVar8;
        }
      }
      return (uchar *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      puVar8 = (uchar *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          puVar8 = (uchar *)(*pcVar4)();
          return puVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          puVar8 = (uchar *)(*pcVar4)();
          return puVar8;
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
          puVar8 = (uchar *)(*pcVar4)();
          return puVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          puVar8 = (uchar *)(*pcVar4)();
          return puVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          puVar8 = (uchar *)(*pcVar4)();
          return puVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        puVar8 = (uchar *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return puVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      puVar8 = (uchar *)(*pcVar4)();
      return puVar8;
    }
  }
  return (uchar *)0x0;
}

// GetPropertyAddress<short> @ 1465d58c0

short * __thiscall UE::MovieScene::FCachedProperty::GetPropertyAddress<short>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  short *psVar8;
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
          psVar8 = (short *)(*pcVar4)();
          return psVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (short *)(*pcVar4)();
          return psVar8;
        }
      }
      return (short *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      psVar8 = (short *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (short *)(*pcVar4)();
          return psVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (short *)(*pcVar4)();
          return psVar8;
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
          psVar8 = (short *)(*pcVar4)();
          return psVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (short *)(*pcVar4)();
          return psVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          psVar8 = (short *)(*pcVar4)();
          return psVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        psVar8 = (short *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return psVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      psVar8 = (short *)(*pcVar4)();
      return psVar8;
    }
  }
  return (short *)0x0;
}

// GetPropertyAddress<UE::Math::TRotator<double>_> @ 1465d5b10

TRotator<double> * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TRotator<double>_>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  TRotator<double> *pTVar8;
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
          pTVar8 = (TRotator<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TRotator<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      return (TRotator<double> *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pTVar8 = (TRotator<double> *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TRotator<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TRotator<double> *)(*pcVar4)();
          return pTVar8;
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
          pTVar8 = (TRotator<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TRotator<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TRotator<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pTVar8 = (TRotator<double> *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pTVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TRotator<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TRotator<double> *)0x0;
}

// GetPropertyAddress<UE::Math::TTransform<double>_> @ 1465d5d60

TTransform<double> * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TTransform<double>_>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  TTransform<double> *pTVar8;
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
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      return (TTransform<double> *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pTVar8 = (TTransform<double> *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
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
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pTVar8 = (TTransform<double> *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pTVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TTransform<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TTransform<double> *)0x0;
}

// GetPropertyAddress<UE::Math::TVector2<float>_> @ 1465d5fb0

TVector2<float> * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector2<float>_>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  TVector2<float> *pTVar8;
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
          pTVar8 = (TVector2<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      return (TVector2<float> *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pTVar8 = (TVector2<float> *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<float> *)(*pcVar4)();
          return pTVar8;
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
          pTVar8 = (TVector2<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pTVar8 = (TVector2<float> *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pTVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector2<float> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TVector2<float> *)0x0;
}

// GetPropertyAddress<UE::Math::TVector2<double>_> @ 1465d6200

TVector2<double> * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector2<double>_>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  TVector2<double> *pTVar8;
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
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      return (TVector2<double> *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pTVar8 = (TVector2<double> *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
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
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pTVar8 = (TVector2<double> *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pTVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector2<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TVector2<double> *)0x0;
}

// GetPropertyAddress<UE::Math::TVector4<float>_> @ 1465d6450

TVector4<float> * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector4<float>_>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  TVector4<float> *pTVar8;
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
          pTVar8 = (TVector4<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      return (TVector4<float> *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pTVar8 = (TVector4<float> *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<float> *)(*pcVar4)();
          return pTVar8;
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
          pTVar8 = (TVector4<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pTVar8 = (TVector4<float> *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pTVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector4<float> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TVector4<float> *)0x0;
}

// GetPropertyAddress<UE::Math::TVector4<double>_> @ 1465d66a0

TVector4<double> * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector4<double>_>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  TVector4<double> *pTVar8;
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
          pTVar8 = (TVector4<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      return (TVector4<double> *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pTVar8 = (TVector4<double> *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<double> *)(*pcVar4)();
          return pTVar8;
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
          pTVar8 = (TVector4<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector4<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pTVar8 = (TVector4<double> *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pTVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector4<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TVector4<double> *)0x0;
}

// GetPropertyAddress<UE::Math::TVector<float>_> @ 1465d68f0

TVector<float> * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector<float>_>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  TVector<float> *pTVar8;
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
          pTVar8 = (TVector<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      return (TVector<float> *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pTVar8 = (TVector<float> *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<float> *)(*pcVar4)();
          return pTVar8;
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
          pTVar8 = (TVector<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pTVar8 = (TVector<float> *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pTVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<float> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TVector<float> *)0x0;
}

// GetPropertyAddress<UE::Math::TVector<double>_> @ 1465d6b40

TVector<double> * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::Math::TVector<double>_>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  TVector<double> *pTVar8;
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
          pTVar8 = (TVector<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      return (TVector<double> *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pTVar8 = (TVector<double> *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar4)();
          return pTVar8;
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
          pTVar8 = (TVector<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pTVar8 = (TVector<double> *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pTVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return (TVector<double> *)0x0;
}

// GetPropertyAddress<FColor> @ 1465d6d90

FColor * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<FColor>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FColor *pFVar8;
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
          pFVar8 = (FColor *)(*pcVar4)();
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
          pFVar8 = (FColor *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FColor *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FColor *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FColor *)(*pcVar4)();
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
          pFVar8 = (FColor *)(*pcVar4)();
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
          pFVar8 = (FColor *)(*pcVar4)();
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
          pFVar8 = (FColor *)(*pcVar4)();
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
          pFVar8 = (FColor *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FColor *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FColor *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FColor *)0x0;
}

// GetPropertyAddress<FEulerTransform> @ 1465d6fe0

FEulerTransform * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<FEulerTransform>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FEulerTransform *pFVar8;
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
          pFVar8 = (FEulerTransform *)(*pcVar4)();
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
          pFVar8 = (FEulerTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FEulerTransform *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FEulerTransform *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FEulerTransform *)(*pcVar4)();
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
          pFVar8 = (FEulerTransform *)(*pcVar4)();
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
          pFVar8 = (FEulerTransform *)(*pcVar4)();
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
          pFVar8 = (FEulerTransform *)(*pcVar4)();
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
          pFVar8 = (FEulerTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FEulerTransform *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FEulerTransform *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FEulerTransform *)0x0;
}

// GetPropertyAddress<UE::MovieScene::FIntermediate3DTransform> @ 1465d7230

FIntermediate3DTransform * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<UE::MovieScene::FIntermediate3DTransform>
          (FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FIntermediate3DTransform *pFVar8;
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
          pFVar8 = (FIntermediate3DTransform *)(*pcVar4)();
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
          pFVar8 = (FIntermediate3DTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FIntermediate3DTransform *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FIntermediate3DTransform *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FIntermediate3DTransform *)(*pcVar4)();
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
          pFVar8 = (FIntermediate3DTransform *)(*pcVar4)();
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
          pFVar8 = (FIntermediate3DTransform *)(*pcVar4)();
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
          pFVar8 = (FIntermediate3DTransform *)(*pcVar4)();
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
          pFVar8 = (FIntermediate3DTransform *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FIntermediate3DTransform *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FIntermediate3DTransform *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FIntermediate3DTransform *)0x0;
}

// GetPropertyAddress<FLinearColor> @ 1465d7480

FLinearColor * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<FLinearColor>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FLinearColor *pFVar8;
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
          pFVar8 = (FLinearColor *)(*pcVar4)();
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
          pFVar8 = (FLinearColor *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FLinearColor *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FLinearColor *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FLinearColor *)(*pcVar4)();
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
          pFVar8 = (FLinearColor *)(*pcVar4)();
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
          pFVar8 = (FLinearColor *)(*pcVar4)();
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
          pFVar8 = (FLinearColor *)(*pcVar4)();
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
          pFVar8 = (FLinearColor *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FLinearColor *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FLinearColor *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FLinearColor *)0x0;
}

// GetPropertyAddress<FSlateColor> @ 1465d76d0

FSlateColor * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<FSlateColor>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FSlateColor *pFVar8;
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
          pFVar8 = (FSlateColor *)(*pcVar4)();
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
          pFVar8 = (FSlateColor *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FSlateColor *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FSlateColor *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FSlateColor *)(*pcVar4)();
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
          pFVar8 = (FSlateColor *)(*pcVar4)();
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
          pFVar8 = (FSlateColor *)(*pcVar4)();
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
          pFVar8 = (FSlateColor *)(*pcVar4)();
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
          pFVar8 = (FSlateColor *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FSlateColor *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateColor *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FSlateColor *)0x0;
}

// GetPropertyAddress<FString> @ 1465d7920

FString * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<FString>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FString *pFVar8;
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
          pFVar8 = (FString *)(*pcVar4)();
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
          pFVar8 = (FString *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FString *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FString *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar4)();
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
          pFVar8 = (FString *)(*pcVar4)();
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
          pFVar8 = (FString *)(*pcVar4)();
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
          pFVar8 = (FString *)(*pcVar4)();
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
          pFVar8 = (FString *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FString *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FString *)0x0;
}

// GetPropertyAddress<FText> @ 1465d7b70

FText * __thiscall UE::MovieScene::FCachedProperty::GetPropertyAddress<FText>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  FText *pFVar8;
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
          pFVar8 = (FText *)(*pcVar4)();
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
          pFVar8 = (FText *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FText *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar8 = (FText *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FText *)(*pcVar4)();
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
          pFVar8 = (FText *)(*pcVar4)();
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
          pFVar8 = (FText *)(*pcVar4)();
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
          pFVar8 = (FText *)(*pcVar4)();
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
          pFVar8 = (FText *)(*pcVar4)();
          return pFVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        pFVar8 = (FText *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return pFVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FText *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FText *)0x0;
}

// GetPropertyAddress<__int64> @ 1465d7dc0

long64 * __thiscall
UE::MovieScene::FCachedProperty::GetPropertyAddress<__int64>(FCachedProperty *this)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FProperty *pFVar7;
  long64 *plVar8;
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
          plVar8 = (long64 *)(*pcVar4)();
          return plVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          plVar8 = (long64 *)(*pcVar4)();
          return plVar8;
        }
      }
      return (long64 *)((longlong)pFVar7->Offset_Internal + (longlong)pvVar2);
    }
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      plVar8 = (long64 *)0x0;
      pvVar2 = this->ContainerAddress;
      if (pFVar7->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          plVar8 = (long64 *)(*pcVar4)();
          return plVar8;
        }
      }
      if (pvVar2 == (void *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          plVar8 = (long64 *)(*pcVar4)();
          return plVar8;
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
          plVar8 = (long64 *)(*pcVar4)();
          return plVar8;
        }
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          plVar8 = (long64 *)(*pcVar4)();
          return plVar8;
        }
      }
      if ((this->ArrayIndex < 0) || ((int)puVar10[1] <= this->ArrayIndex)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayHelper.IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                           ,0x34,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          plVar8 = (long64 *)(*pcVar4)();
          return plVar8;
        }
      }
      if ((int)puVar10[1] != 0) {
        uVar9 = *puVar10;
        if (((lVar5 & 1) != 0) && ((uVar9 & 1) != 0)) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar10;
        }
        plVar8 = (long64 *)((longlong)this->ArrayIndex * (longlong)iVar1 + uVar9);
      }
      return plVar8;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      plVar8 = (long64 *)(*pcVar4)();
      return plVar8;
    }
  }
  return (long64 *)0x0;
}

