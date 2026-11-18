// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticStruct @ 14df08070

UScriptStruct * __cdecl FIKRetargetFilterBoneOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFilterBoneOp,(UObject *)pUVar1,
                         L"IKRetargetFilterBoneOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.OuterSingleton;
}

// Initialize @ 14df080b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetFilterBoneOp::Initialize
          (FIKRetargetFilterBoneOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  int iVar1;
  FName *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  FName *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FName *pFVar11;
  FName *pFVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FTextFormat local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  iVar1 = (this->Settings).BonesToFilter.ArrayNum;
  pFVar11 = (FName *)(this->Settings).BonesToFilter.AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar1 * 0x10;
  do {
    if ((this->Settings).BonesToFilter.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFilterBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar12) {
      *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
      this->bResetPlayback = true;
      return true;
    }
    pFVar2 = (FName *)param_3->_padding_;
    for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (int)param_3->_padding_; pFVar7 = pFVar7 + 1) {
      if (*pFVar7 == *pFVar11) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 3);
        goto LAB_14df0813b;
      }
    }
    uVar6 = 0xffffffff;
LAB_14df0813b:
    pFVar11[1].ComparisonIndex.Value =
         (uVar6 ^ pFVar11[1].ComparisonIndex.Value) & 0x80000000 ^ uVar6;
    bVar13 = (int)(uVar6 * 2) >> 1 != -1;
    *(bool *)&pFVar11[2].ComparisonIndex.Value = bVar13;
    if (!bVar13) {
      pFVar8 = FText::FromName(&local_68,pFVar11);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"FilterBoneOp",L"MissingSourceBone",
                          L"Filter Bone op refers to non-existant target bone, {0}.");
      pFVar10 = FTextFormat::FTextFormat(&local_58,pFVar9,Default);
      local_48.Type = Text;
      FText::FText((FText *)&local_48.TextValue,pFVar8);
      if ((local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_a8.AllocatorInstance.Data,&local_48,1);
      local_98.TextFormatData.Object = (pFVar10->TextFormatData).Object;
      local_98.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_88,&local_98,&local_a8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar3 = (pFVar8->TextData).Reference;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      FIKRigLogger::LogWarning(param_5,&local_88);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// Run @ 14df08340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetFilterBoneOp::Run
          (FIKRetargetFilterBoneOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107 [15];
  TQuat<double> local_f8;
  TQuat<double> local_d8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (this->bResetPlayback != false) {
    iVar1 = (this->Settings).BonesToFilter.ArrayNum;
    pFVar7 = (this->Settings).BonesToFilter.AllocatorInstance.Data;
    pFVar9 = pFVar7 + (longlong)iVar1 * 0x80;
    while( true ) {
      if ((this->Settings).BonesToFilter.ArrayNum != iVar1) {
        local_108 = 0;
        `TCheckedPointerIterator<FFilterBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_108);
      }
      if (pFVar7 == pFVar9) break;
      if (pFVar7[0x10] != (FScriptContainerElement)0x0) {
        pFVar7[0x70] = (FScriptContainerElement)0x1;
      }
      pFVar7 = pFVar7 + 0x80;
    }
    this->bResetPlayback = false;
  }
  pFVar7 = (this->Settings).BonesToFilter.AllocatorInstance.Data;
  iVar1 = (this->Settings).BonesToFilter.ArrayNum;
  pFVar9 = pFVar7 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->Settings).BonesToFilter.ArrayNum != iVar1) {
      local_107[0] = 0;
      `TCheckedPointerIterator<FFilterBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_107);
    }
    if (pFVar7 == pFVar9) break;
    if (pFVar7[0x10] != (FScriptContainerElement)0x0) {
      uVar8 = *(int *)(pFVar7 + 8) * 2 >> 1;
      uVar5 = 0;
      if ((int)uVar8 < param_4->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_4->AllocatorInstance).Data;
      lVar6 = (longlong)(int)uVar8 * 0x60;
      local_f8.X = *(double *)(pFVar2 + lVar6);
      local_f8.Y = *(double *)(pFVar2 + lVar6 + 8);
      local_f8.Z = *(double *)(pFVar2 + lVar6 + 0x10);
      local_f8.W = *(double *)(pFVar2 + lVar6 + 0x10 + 8);
      local_b8.Translation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar6 + 0x20);
      local_b8.Translation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar6 + 0x20 + 8);
      local_b8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar6 + 0x30);
      local_b8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar6 + 0x30 + 8);
      local_b8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar6 + 0x40);
      local_b8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar6 + 0x40 + 8);
      local_b8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar6 + 0x50);
      local_b8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar6 + 0x50 + 8);
      local_b8.Rotation.XY.m128d_f64[0] = local_f8.X;
      local_b8.Rotation.XY.m128d_f64[1] = local_f8.Y;
      local_b8.Rotation.ZW.m128d_f64[0] = local_f8.Z;
      local_b8.Rotation.ZW.m128d_f64[1] = local_f8.W;
      FOneEuroRotationFilter::Update
                ((FOneEuroRotationFilter *)(pFVar7 + 0x20),&local_d8,&local_f8,param_2,
                 &this->Settings);
      local_b8.Rotation.XY.m128d_f64[0] = local_d8.X;
      local_b8.Rotation.XY.m128d_f64[1] = local_d8.Y;
      local_b8.Rotation.ZW.m128d_f64[0] = local_d8.Z;
      local_b8.Rotation.ZW.m128d_f64[1] = local_d8.W;
      FRetargetSkeleton::SetGlobalTransformAndUpdateChildren
                ((FRetargetSkeleton *)&param_1->TargetSkeleton,*(int *)(pFVar7 + 8) * 2 >> 1,
                 &local_b8,param_4);
    }
    pFVar7 = pFVar7 + 0x80;
  }
  return;
}

// GetSettings @ 14df08560

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetFilterBoneOp::GetSettings(FIKRetargetFilterBoneOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14df08570

UScriptStruct * __thiscall FIKRetargetFilterBoneOp::GetSettingsType(FIKRetargetFilterBoneOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetFilterBoneOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOpSettings.OuterSingleton;
}

// GetType @ 14df085d0

UScriptStruct * __thiscall FIKRetargetFilterBoneOp::GetType(FIKRetargetFilterBoneOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFilterBoneOp,(UObject *)pUVar1,
                         L"IKRetargetFilterBoneOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFilterBoneOp.OuterSingleton;
}

// OnPlaybackReset @ 14df08610

void __thiscall FIKRetargetFilterBoneOp::OnPlaybackReset(FIKRetargetFilterBoneOp *this)

{
  if ((this->Settings).bResetPlayback != false) {
    this->bResetPlayback = true;
  }
  return;
}

// ResetFilters @ 14df4f050

void __thiscall
FIKRetargetFilterBoneOp::ResetFilters
          (FIKRetargetFilterBoneOp *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Settings).BonesToFilter.ArrayNum;
  pFVar2 = (this->Settings).BonesToFilter.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->Settings).BonesToFilter.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFilterBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x10] != (FScriptContainerElement)0x0) {
      pFVar2[0x70] = (FScriptContainerElement)0x1;
    }
    pFVar2 = pFVar2 + 0x80;
  }
  return;
}

