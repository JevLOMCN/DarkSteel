// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticStruct @ 14dee55c0

UScriptStruct * __cdecl FIKRetargetPinBoneOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOp,(UObject *)pUVar1,
                         L"IKRetargetPinBoneOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton;
}

// Initialize @ 14dee5690

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetPinBoneOp::Initialize
          (FIKRetargetPinBoneOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  FName FVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FName *pFVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_148;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_138;
  uint local_128;
  FName *local_120;
  FTextFormat local_118;
  FText local_108;
  FTextFormat local_f8;
  FText local_e8;
  FFormatArgumentValue local_d8;
  FFormatArgumentValue local_b8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  this->bFoundAllBonesToPin = true;
  pFVar13 = (FName *)(this->Settings).BonesToPin.AllocatorInstance.Data;
  local_128 = (this->Settings).BonesToPin.ArrayNum;
  uVar10 = (ulonglong)(int)local_128;
  local_120 = pFVar13 + uVar10 * 0x2e;
LAB_14dee56f0:
  pFVar12 = local_120;
  if ((this->Settings).BonesToPin.ArrayNum != (int)uVar10) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FPinBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar13 == pFVar12) {
    this->field_0x1d = 1;
    return true;
  }
  pFVar12 = (FName *)param_3->_padding_;
  for (pFVar11 = pFVar12; pFVar11 != pFVar12 + (int)param_3->_padding_; pFVar11 = pFVar11 + 1) {
    if (*pFVar11 == pFVar13[2]) {
      uVar9 = (uint)((longlong)pFVar11 - (longlong)pFVar12 >> 3);
      goto LAB_14dee5749;
    }
  }
  uVar9 = 0xffffffff;
LAB_14dee5749:
  FVar1 = *pFVar13;
  pFVar13[3].ComparisonIndex.Value = (uVar9 ^ pFVar13[3].ComparisonIndex.Value) & 0x80000000 ^ uVar9
  ;
  if ((this->Settings).SkeletonToCopyFrom == Source) {
    pFVar12 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
    for (pFVar11 = pFVar12; pFVar11 != pFVar12 + (param_2->BoneNames).ArrayNum;
        pFVar11 = pFVar11 + 1) {
      if (*pFVar11 == FVar1) goto LAB_14dee5b28;
    }
  }
  else {
    pFVar12 = (FName *)param_3->_padding_;
    for (pFVar11 = pFVar12; pFVar11 != pFVar12 + (int)param_3->_padding_; pFVar11 = pFVar11 + 1) {
      if (*pFVar11 == FVar1) goto LAB_14dee5b28;
    }
  }
  uVar9 = 0xffffffff;
  goto LAB_14dee5797;
LAB_14dee5b28:
  uVar9 = (uint)((longlong)pFVar11 - (longlong)pFVar12 >> 3);
LAB_14dee5797:
  pFVar13[1].ComparisonIndex.Value = (uVar9 ^ pFVar13[1].ComparisonIndex.Value) & 0x80000000 ^ uVar9
  ;
  if ((pFVar13[3].ComparisonIndex.Value & 0x7fffffff) == 0x7fffffff) {
    this->bFoundAllBonesToPin = false;
    pFVar6 = FText::FromName(&local_78,pFVar13 + 2);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"PinBoneOp",L"MissingSourceBone",
                        L"Pin Bone retarget op refers to non-existant bone to pin, {0}.");
    pFVar8 = FTextFormat::FTextFormat(&local_68,pFVar7,Default);
    local_d8.Type = Text;
    FText::FText((FText *)&local_d8.TextValue,pFVar6);
    if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_148.AllocatorInstance,1,&local_148.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_148.AllocatorInstance.Data,&local_d8,1);
    local_118.TextFormatData.Object = (pFVar8->TextFormatData).Object;
    local_118.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_118.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_108,&local_118,&local_148);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
    if ((FFormatArgumentValue *)local_148.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar6->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    FIKRigLogger::LogWarning(param_5,&local_108);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  if ((int)(uVar9 * 2) >> 1 == -1) {
    this->bFoundAllBonesToPin = false;
    pFVar6 = FText::FromName(&local_58,pFVar13);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"PinBoneOp",L"MissingTargetBone",
                        L"Pin Bone retarget op refers to non-existant bone to pin to, {0}.");
    pFVar8 = FTextFormat::FTextFormat(&local_48,pFVar7,Default);
    local_b8.Type = Text;
    FText::FText((FText *)&local_b8.TextValue,pFVar6);
    if ((local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    local_f8.TextFormatData.Object = (pFVar8->TextFormatData).Object;
    local_f8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_f8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_e8,&local_f8,&local_138);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FFormatArgumentValue *)local_138.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar6->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    FIKRigLogger::LogWarning(param_5,&local_e8);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  uVar10 = (ulonglong)local_128;
  pFVar13[4].ComparisonIndex = 0;
  pFVar13[4].Number = 0xbff00000;
  pFVar13 = pFVar13 + 0x2e;
  goto LAB_14dee56f0;
}

// Run @ 14dee5ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetPinBoneOp::Run
          (FIKRetargetPinBoneOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FPinBoneData *this_00;
  FPinBoneData *pFVar14;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [4];
  uint local_234;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulonglong local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  ulonglong local_200;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_3e45798ee2308c3a;
  dVar5 = __real_3ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_00 = (FPinBoneData *)(this->Settings).BonesToPin.AllocatorInstance.Data;
  local_234 = (this->Settings).BonesToPin.ArrayNum;
  uVar11 = (ulonglong)(int)local_234;
  pTVar15 = param_4;
  if ((this->Settings).SkeletonToCopyFrom == Source) {
    pTVar15 = param_3;
  }
  pFVar14 = this_00 + uVar11;
  local_230 = param_3;
LAB_14dee5c5e:
  do {
    if ((this->Settings).BonesToPin.ArrayNum != (int)uVar11) {
      local_238[0] = 0;
      `TCheckedPointerIterator<FPinBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_238);
    }
    if (this_00 == pFVar14) {
      return;
    }
    iVar10 = (this_00->BoneToCopyFrom).BoneIndex;
    if ((iVar10 < 0) || (pTVar15->ArrayNum <= iVar10)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    iVar10 = (this_00->BoneToCopyTo).BoneIndex;
    if ((iVar10 < 0) || (param_4->ArrayNum <= iVar10)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar9) && (bVar4)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          TargetPoseScale.Factor = dVar5;
          TargetPoseScale.Pivot.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          TargetPoseScale.Pivot.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          TargetPoseScale.Pivot.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          _Init_thread_footer(&::_TSS0);
        }
      }
      dVar3 = (this_00->LastUsedSourceScale).Factor - (param_1->CurrentSourceScale).Factor;
      uVar16 = SUB84(dVar3,0) & uVar7;
      uVar17 = (uint)((ulonglong)dVar3 >> 0x20) & uVar8;
      if (dVar6 <= (double)CONCAT44(uVar17,uVar16) && (double)CONCAT44(uVar17,uVar16) != dVar6) {
        FPinBoneData::CachePinData(this_00,(this->Settings).SkeletonToCopyFrom,param_1);
      }
      GetNewBoneTransform(this,&local_138,this_00,param_1,param_3,param_4);
      local_198.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_198.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_198.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_198.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_198.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_198.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_198.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_198.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_198.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_198.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_198.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_198.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_198,&local_138,&(this->Settings).GlobalOffset);
      local_1f8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1f8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_1f8,&(this->Settings).LocalOffset,&local_198);
      uVar17 = (this_00->BoneToCopyTo).BoneIndex;
      uVar16 = 0;
      if ((int)uVar17 < param_4->ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar12 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x60;
      if ((this->Settings).bCopyTranslation == false) {
        local_218 = *(ulonglong *)&pFVar12[0x30].field_0x0;
        local_228 = *(undefined4 *)&pFVar12[0x20].field_0x0;
        uStack_224 = *(undefined4 *)(pFVar12 + 0x24);
        uStack_220 = *(undefined4 *)(pFVar12 + 0x28);
        uStack_21c = *(undefined4 *)(pFVar12 + 0x2c);
        local_1f8.Translation.XY.m128d_f64 = *(double (*) [2])(pFVar12 + 0x20);
        local_1f8.Translation.ZW.m128d_f64[1] = 0.0;
        local_1f8.Translation.ZW.m128d_f64[0] = (double)local_218;
        uVar22 = (int)local_218;
        uVar23 = (int)(local_218 >> 0x20);
        uVar24 = 0;
        uVar25 = 0;
        uVar30 = local_228;
        uVar31 = uStack_224;
        uVar32 = uStack_220;
        uVar33 = uStack_21c;
      }
      else {
        uVar22 = local_1f8.Translation.ZW.m128d_f64[0]._0_4_;
        uVar23 = local_1f8.Translation.ZW.m128d_f64[0]._4_4_;
        uVar24 = local_1f8.Translation.ZW.m128d_f64[1]._0_4_;
        uVar25 = local_1f8.Translation.ZW.m128d_f64[1]._4_4_;
        uVar30 = local_1f8.Translation.XY.m128d_f64[0]._0_4_;
        uVar31 = local_1f8.Translation.XY.m128d_f64[0]._4_4_;
        uVar32 = local_1f8.Translation.XY.m128d_f64[1]._0_4_;
        uVar33 = local_1f8.Translation.XY.m128d_f64[1]._4_4_;
      }
      if ((this->Settings).bCopyRotation == false) {
        local_1f8.Rotation.XY.m128d_f64 = *(double (*) [2])pFVar12;
        local_1f8.Rotation.ZW.m128d_f64 = *(double (*) [2])(pFVar12 + 0x10);
        uVar34 = *(undefined4 *)&pFVar12->field_0x0;
        uVar35 = *(undefined4 *)(pFVar12 + 4);
        uVar36 = *(undefined4 *)(pFVar12 + 8);
        uVar37 = *(undefined4 *)(pFVar12 + 0xc);
        uVar38 = *(undefined4 *)&pFVar12[0x10].field_0x0;
        uVar39 = *(undefined4 *)(pFVar12 + 0x14);
        uVar40 = *(undefined4 *)(pFVar12 + 0x18);
        uVar41 = *(undefined4 *)(pFVar12 + 0x1c);
      }
      else {
        uVar34 = local_1f8.Rotation.XY.m128d_f64[0]._0_4_;
        uVar35 = local_1f8.Rotation.XY.m128d_f64[0]._4_4_;
        uVar36 = local_1f8.Rotation.XY.m128d_f64[1]._0_4_;
        uVar37 = local_1f8.Rotation.XY.m128d_f64[1]._4_4_;
        uVar38 = local_1f8.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar39 = local_1f8.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar40 = local_1f8.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar41 = local_1f8.Rotation.ZW.m128d_f64[1]._4_4_;
      }
      if ((this->Settings).bCopyScale == false) {
        local_200 = *(ulonglong *)&pFVar12[0x50].field_0x0;
        local_210 = *(undefined4 *)&pFVar12[0x40].field_0x0;
        uStack_20c = *(undefined4 *)(pFVar12 + 0x44);
        uStack_208 = *(undefined4 *)(pFVar12 + 0x48);
        uStack_204 = *(undefined4 *)(pFVar12 + 0x4c);
        local_1f8.Scale3D.XY.m128d_f64 = *(double (*) [2])(pFVar12 + 0x40);
        local_1f8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_1f8.Scale3D.ZW.m128d_f64[0] = (double)local_200;
        uVar18 = (int)local_200;
        uVar19 = (int)(local_200 >> 0x20);
        uVar20 = 0;
        uVar21 = 0;
        uVar26 = local_210;
        uVar27 = uStack_20c;
        uVar28 = uStack_208;
        uVar29 = uStack_204;
      }
      else {
        uVar18 = local_1f8.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar19 = local_1f8.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar20 = local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar21 = local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar26 = local_1f8.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar27 = local_1f8.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar28 = local_1f8.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar29 = local_1f8.Scale3D.XY.m128d_f64[1]._4_4_;
      }
      uVar16 = (this_00->BoneToCopyTo).BoneIndex;
      if ((this->Settings).bPropagateToChildren != false) {
        FRetargetSkeleton::SetGlobalTransformAndUpdateChildren
                  ((FRetargetSkeleton *)&param_1->TargetSkeleton,uVar16,&local_1f8,param_4);
        uVar11 = (ulonglong)local_234;
        this_00 = this_00 + 1;
        param_3 = local_230;
        goto LAB_14dee5c5e;
      }
      uVar17 = 0;
      if ((int)uVar16 < param_4->ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (param_4->AllocatorInstance).Data;
      lVar13 = (longlong)(int)uVar16 * 0x60;
      pFVar12 = pFVar1 + lVar13;
      *(undefined4 *)pFVar12 = uVar34;
      *(undefined4 *)(pFVar12 + 4) = uVar35;
      *(undefined4 *)(pFVar12 + 8) = uVar36;
      *(undefined4 *)(pFVar12 + 0xc) = uVar37;
      pFVar12 = pFVar1 + lVar13 + 0x10;
      *(undefined4 *)pFVar12 = uVar38;
      *(undefined4 *)(pFVar12 + 4) = uVar39;
      *(undefined4 *)(pFVar12 + 8) = uVar40;
      *(undefined4 *)(pFVar12 + 0xc) = uVar41;
      pFVar12 = pFVar1 + lVar13 + 0x20;
      *(undefined4 *)pFVar12 = uVar30;
      *(undefined4 *)(pFVar12 + 4) = uVar31;
      *(undefined4 *)(pFVar12 + 8) = uVar32;
      *(undefined4 *)(pFVar12 + 0xc) = uVar33;
      pFVar12 = pFVar1 + lVar13 + 0x30;
      *(undefined4 *)pFVar12 = uVar22;
      *(undefined4 *)(pFVar12 + 4) = uVar23;
      *(undefined4 *)(pFVar12 + 8) = uVar24;
      *(undefined4 *)(pFVar12 + 0xc) = uVar25;
      pFVar12 = pFVar1 + lVar13 + 0x40;
      *(undefined4 *)pFVar12 = uVar26;
      *(undefined4 *)(pFVar12 + 4) = uVar27;
      *(undefined4 *)(pFVar12 + 8) = uVar28;
      *(undefined4 *)(pFVar12 + 0xc) = uVar29;
      pFVar1 = pFVar1 + lVar13 + 0x50;
      *(undefined4 *)pFVar1 = uVar18;
      *(undefined4 *)(pFVar1 + 4) = uVar19;
      *(undefined4 *)(pFVar1 + 8) = uVar20;
      *(undefined4 *)(pFVar1 + 0xc) = uVar21;
      param_3 = local_230;
    }
    uVar11 = (ulonglong)local_234;
    this_00 = this_00 + 1;
  } while( true );
}

// GetSettings @ 14dee6060

FIKRetargetOpSettingsBase * __thiscall FIKRetargetPinBoneOp::GetSettings(FIKRetargetPinBoneOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14dee6070

UScriptStruct * __thiscall FIKRetargetPinBoneOp::GetSettingsType(FIKRetargetPinBoneOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings,(UObject *)pUVar1,
                         L"IKRetargetPinBoneOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton;
}

// GetType @ 14dee60b0

UScriptStruct * __thiscall FIKRetargetPinBoneOp::GetType(FIKRetargetPinBoneOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOp,(UObject *)pUVar1,
                         L"IKRetargetPinBoneOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton;
}

// operator() @ 14df1f710

TVector<double> * __thiscall
`FIKRetargetPinBoneOp::GetNewBoneTransform'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  TTransform<double> *pTVar11;
  uint uVar12;
  
  uVar12 = *(int *)((longlong)this + 0x68) * 2 >> 1;
  uVar9 = 0;
  if ((int)uVar12 < *(int *)((longlong)this + 8)) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TVector<double> *)(*pcVar3)();
      return pTVar10;
    }
  }
  lVar2 = *(longlong *)this;
  pTVar11 = FRetargetSkeleton::GetParentTransform
                      ((FRetargetSkeleton *)((longlong)this + 0x10),
                       *(int *)((longlong)this + 0x68) * 2 >> 1,this);
  pdVar1 = (double *)((longlong)(int)uVar12 * 0x60 + 0x20 + lVar2);
  dVar4 = pdVar1[1];
  dVar5 = *(double *)((longlong)(int)uVar12 * 0x60 + 0x30 + lVar2);
  dVar6 = (pTVar11->Translation).XY.m128d_f64[1];
  dVar7 = (pTVar11->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1 - (pTVar11->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 - dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 - dVar6;
  return __return_storage_ptr__;
}

// GetNewBoneTransform @ 14df3a370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FIKRetargetPinBoneOp::GetNewBoneTransform
          (FIKRetargetPinBoneOp *this,TTransform<double> *__return_storage_ptr__,
          FPinBoneData *param_1,FIKRetargetProcessor *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  EPinBoneTranslationMode EVar3;
  EPinBoneRotationMode EVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  FName FVar20;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  FCompactPoseBoneIndex FVar24;
  FCompactPoseBoneIndex FVar25;
  __m128d _Var26;
  FPinBoneData *pFVar27;
  FName *pFVar28;
  uint uVar29;
  uint uVar30;
  FPinBoneData *pFVar31;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar32;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar33;
  TTransform<double> *pTVar34;
  FName *pFVar35;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  FRetargetSkeleton *pFVar39;
  uint uVar40;
  bool bVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined1 auStackY_568 [32];
  undefined1 local_528;
  undefined1 local_527 [7];
  FRetargetSkeleton *local_520;
  double local_518 [2];
  FIKRetargetPinBoneOp *local_508;
  FScriptContainerElement *local_500;
  TVector<double>_u_0 local_4f8;
  TVector<double>_u_0 local_4e0;
  TVector<double>_u_0 local_4c8;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  double local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double local_480;
  double dStack_478;
  double local_470;
  double local_468;
  double dStack_460;
  double local_458;
  undefined1 local_450 [16];
  double local_440;
  double local_438;
  double dStack_430;
  double local_428;
  double local_420;
  double dStack_418;
  double local_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  undefined1 local_3f0 [16];
  double local_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  undefined1 local_3c0 [16];
  double local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  TTransform<double> local_388;
  TTransform<double> local_328;
  ForAnyElementType local_2c8;
  int local_2c0;
  int local_2bc;
  FRetargetSkeleton local_2b8;
  FName local_268 [46];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_568;
  bVar41 = (this->Settings).SkeletonToCopyFrom == Source;
  local_518[0] = (double)param_2;
  pTVar36 = param_4;
  if (bVar41) {
    pTVar36 = param_3;
  }
  lVar38 = 0x48;
  if (!bVar41) {
    lVar38 = 0x98;
  }
  local_520 = (FRetargetSkeleton *)&param_2->TargetSkeleton;
  pFVar39 = (FRetargetSkeleton *)((longlong)&(param_2->Log).LogName.ComparisonIndex.Value + lVar38);
  local_2c8.Data = (FScriptContainerElement *)0x0;
  local_2c0 = pTVar36->ArrayNum;
  lVar38 = (longlong)local_2c0;
  local_500 = (pTVar36->AllocatorInstance).Data;
  local_508 = this;
  if (local_2c0 == 0) {
    local_2bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_2c0,0,&local_2c8,local_2c0,&local_2bc);
    memcpy(local_2c8.Data,local_500,lVar38 * 0x60);
  }
  FRetargetSkeleton::FRetargetSkeleton(&local_2b8,pFVar39);
  lVar38 = 2;
  pFVar27 = param_1;
  pFVar28 = local_268;
  do {
    pFVar35 = pFVar28;
    pFVar31 = pFVar27;
    uVar44 = *(undefined4 *)&(pFVar31->BoneToCopyFrom).field_0x8;
    FVar24 = (pFVar31->BoneToCopyFrom).CachedCompactPoseIndex;
    FVar20 = (pFVar31->BoneToCopyTo).BoneName;
    uVar45 = *(undefined4 *)&(pFVar31->BoneToCopyTo).field_0x8;
    FVar25 = (pFVar31->BoneToCopyTo).CachedCompactPoseIndex;
    pFVar27 = (FPinBoneData *)&(pFVar31->LocalRefPoseBoneToCopyTo).Scale3D;
    *pFVar35 = (pFVar31->BoneToCopyFrom).BoneName;
    pFVar35[1].ComparisonIndex = (FNameEntryId)uVar44;
    pFVar35[1].Number = (uint)FVar24;
    FVar21 = (FName)(pFVar31->LastUsedSourceScale).Factor;
    FVar22 = (FName)(pFVar31->LastUsedSourceScale).Pivot.field0_0x0._s_0.X;
    pFVar35[2] = FVar20;
    pFVar35[3].ComparisonIndex = (FNameEntryId)uVar45;
    pFVar35[3].Number = (uint)FVar25;
    FVar20 = (FName)(pFVar31->LastUsedSourceScale).Pivot.field0_0x0._s_0.Y;
    FVar23 = (FName)(pFVar31->LastUsedSourceScale).Pivot.field0_0x0._s_0.Z;
    pFVar35[4] = FVar21;
    pFVar35[5] = FVar22;
    FVar21 = (FName)(pFVar31->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64[0];
    FVar22 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64 + 1);
    pFVar35[6] = FVar20;
    pFVar35[7] = FVar23;
    FVar20 = (FName)(pFVar31->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64[0];
    FVar23 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64 + 1);
    pFVar35[8] = FVar21;
    pFVar35[9] = FVar22;
    FVar21 = (FName)(pFVar31->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[0];
    FVar22 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64 + 1);
    pFVar35[10] = FVar20;
    pFVar35[0xb] = FVar23;
    FVar20 = (FName)(pFVar31->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64[0];
    FVar23 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64 + 1);
    pFVar35[0xc] = FVar21;
    pFVar35[0xd] = FVar22;
    pFVar35[0xe] = FVar20;
    pFVar35[0xf] = FVar23;
    lVar38 = lVar38 + -1;
    pFVar28 = pFVar35 + 0x10;
  } while (lVar38 != 0);
  FVar20 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyTo).Scale3D.XY.m128d_f64 + 1);
  FVar21 = (FName)(pFVar31->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64[0];
  FVar22 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64 + 1);
  pFVar35[0x10] = (FName)(((VectorRegister4Double *)pFVar27)->XY).m128d_f64[0];
  pFVar35[0x11] = FVar20;
  FVar20 = (FName)(pFVar31->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64[0];
  FVar23 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64 + 1);
  pFVar35[0x12] = FVar21;
  pFVar35[0x13] = FVar22;
  FVar21 = (FName)(pFVar31->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64[0];
  FVar22 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64 + 1);
  pFVar35[0x14] = FVar20;
  pFVar35[0x15] = FVar23;
  FVar20 = (FName)(pFVar31->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[0];
  FVar23 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64 + 1);
  pFVar35[0x16] = FVar21;
  pFVar35[0x17] = FVar22;
  FVar21 = (FName)(pFVar31->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64[0];
  FVar22 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64 + 1);
  pFVar35[0x18] = FVar20;
  pFVar35[0x19] = FVar23;
  FVar20 = (FName)(pFVar31->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64[0];
  FVar23 = *(FName *)((pFVar31->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64 + 1);
  pFVar35[0x1a] = FVar21;
  pFVar35[0x1b] = FVar22;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  pFVar35[0x1c] = FVar20;
  pFVar35[0x1d] = FVar23;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  EVar3 = (local_508->Settings).TranslationMode;
  uVar30 = 0;
  if (EVar3 == CopyGlobalPosition) {
    uVar40 = (param_1->BoneToCopyFrom).BoneIndex;
    uVar29 = uVar30;
    if ((int)uVar40 < pTVar36->ArrayNum) {
      uVar29 = ~uVar40 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar41)) {
      pcVar5 = (code *)swi(3);
      pTVar34 = (TTransform<double> *)(*pcVar5)();
      return pTVar34;
    }
    pFVar2 = (pTVar36->AllocatorInstance).Data;
    pFVar37 = pFVar2 + (longlong)(int)uVar40 * 0x60 + 0x20;
    uVar44 = *(undefined4 *)pFVar37;
    uVar45 = *(undefined4 *)(pFVar37 + 4);
    uVar46 = *(undefined4 *)(pFVar37 + 8);
    uVar47 = *(undefined4 *)(pFVar37 + 0xc);
    local_398 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar40 * 0x60 + 0x30);
    uVar42 = (undefined4)local_398;
    uVar43 = (undefined4)((ulonglong)local_398 >> 0x20);
    local_3a8 = uVar44;
    uStack_3a4 = uVar45;
    uStack_3a0 = uVar46;
    uStack_39c = uVar47;
LAB_14df3aab1:
    dVar54 = (double)CONCAT44(uVar43,uVar42);
    *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar44;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar45;
    *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uVar46;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar47;
  }
  else {
    if (EVar3 != CopyLocalPosition) {
      if (EVar3 == CopyLocalPositionRelativeOffset) {
        local_438 = (param_1->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[0];
        dStack_430 = (param_1->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[1];
        local_420 = (param_1->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[0];
        dStack_418 = (param_1->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[1];
        local_428 = (param_1->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64[0];
        local_410 = (param_1->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64[0];
        dVar54 = local_438 * local_438;
        dVar14 = dStack_430 * dStack_430;
        dVar11 = local_428 * local_428;
        dVar48 = local_410 * local_410;
        dVar51 = local_420 * local_420;
        dVar12 = dStack_418 * dStack_418;
        `FIKRetargetPinBoneOp::GetNewBoneTransform'::__l2::<lambda_1>::operator()
                  (&local_2c8,(TVector<double> *)&local_4e0._s_0);
        auVar53._8_8_ = 0;
        auVar53._0_8_ =
             local_4e0._s_0.X * local_4e0._s_0.X + local_4e0._s_0.Y * local_4e0._s_0.Y +
             local_4e0._s_0.Z * local_4e0._s_0.Z;
        auVar53 = sqrtpd(unaff_XMM9,auVar53);
        dVar49 = auVar53._0_8_;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (__real_3e45798ee0000000 < dVar49) {
          dVar50 = __real_3ff0000000000000 / dVar49;
          uVar17 = local_4e0._s_0.X * dVar50;
          uVar18 = local_4e0._s_0.Y * dVar50;
          uVar19 = local_4e0._s_0.Z * dVar50;
        }
        dVar49 = dVar49 + (SQRT(dVar54 + dVar14 + dVar11) - SQRT(dVar51 + dVar12 + dVar48));
        pTVar34 = FRetargetSkeleton::GetParentTransform
                            (local_520,(param_1->BoneToCopyTo).BoneIndex,param_4);
        local_408 = (pTVar34->Translation).XY.m128d_f64[0];
        dStack_400 = (pTVar34->Translation).XY.m128d_f64[1];
        local_3f8 = (pTVar34->Translation).ZW.m128d_f64[0];
        dVar54 = (double)uVar17 * dVar49 + local_408;
        local_3e0 = (double)uVar19 * dVar49 + local_3f8;
        dVar51 = (double)uVar18 * dVar49 + dStack_400;
        uVar44 = SUB84(dVar51,0);
        uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
        local_3f0._8_4_ = uVar44;
        local_3f0._0_8_ = dVar54;
        local_3f0._12_4_ = uVar45;
        auVar7._8_4_ = uVar44;
        auVar7._0_8_ = dVar54;
        auVar7._12_4_ = uVar45;
        *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_3e0;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
        goto LAB_14df3aabc;
      }
      if (EVar3 == CopyLocalPositionRelativeScaled) {
        `FIKRetargetPinBoneOp::GetNewBoneTransform'::__l2::<lambda_1>::operator()
                  (&local_2c8,(TVector<double> *)&local_4f8._s_0);
        auVar10._8_8_ = 0;
        auVar10._0_8_ =
             local_4f8._s_0.X * local_4f8._s_0.X + local_4f8._s_0.Y * local_4f8._s_0.Y +
             local_4f8._s_0.Z * local_4f8._s_0.Z;
        auVar53 = sqrtpd(unaff_XMM9,auVar10);
        dVar54 = auVar53._0_8_;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (__real_3e45798ee0000000 < dVar54) {
          dVar51 = __real_3ff0000000000000 / dVar54;
          uVar17 = local_4f8._s_0.X * dVar51;
          uVar18 = local_4f8._s_0.Y * dVar51;
          uVar19 = local_4f8._s_0.Z * dVar51;
        }
        local_498 = (param_1->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[0];
        dStack_490 = (param_1->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[1];
        local_488 = (param_1->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64[0];
        local_480 = (param_1->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[0];
        dStack_478 = (param_1->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[1];
        local_470 = (param_1->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64[0];
        dVar51 = (dVar54 / SQRT(local_498 * local_498 + dStack_490 * dStack_490 +
                                local_488 * local_488)) *
                 SQRT(local_480 * local_480 + dStack_478 * dStack_478 + local_470 * local_470);
        pTVar34 = FRetargetSkeleton::GetParentTransform
                            (local_520,(param_1->BoneToCopyTo).BoneIndex,param_4);
        local_468 = (pTVar34->Translation).XY.m128d_f64[0];
        dStack_460 = (pTVar34->Translation).XY.m128d_f64[1];
        local_458 = (pTVar34->Translation).ZW.m128d_f64[0];
        dVar54 = (double)uVar17 * dVar51 + local_468;
        local_440 = (double)uVar19 * dVar51 + local_458;
        dVar51 = (double)uVar18 * dVar51 + dStack_460;
        uVar44 = SUB84(dVar51,0);
        uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
        local_450._8_4_ = uVar44;
        local_450._0_8_ = dVar54;
        local_450._12_4_ = uVar45;
        auVar6._8_4_ = uVar44;
        auVar6._0_8_ = dVar54;
        auVar6._12_4_ = uVar45;
        *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_440;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
        goto LAB_14df3aabc;
      }
      if (EVar3 != CopyGlobalPositionAndMaintainOffset) {
        local_527[0] = 0;
        `FIKRetargetPinBoneOp::GetNewBoneTransform'::__l4::<lambda_2>::operator()(local_527);
        goto LAB_14df3aabc;
      }
      uVar40 = (param_1->BoneToCopyFrom).BoneIndex;
      uVar29 = 0;
      if ((int)uVar40 < pTVar36->ArrayNum) {
        uVar29 = ~uVar40 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar5 = (code *)swi(3);
        pTVar34 = (TTransform<double> *)(*pcVar5)();
        return pTVar34;
      }
      pFVar37 = (pTVar36->AllocatorInstance).Data;
      lVar38 = (longlong)(int)uVar40 * 0x60;
      local_328.Rotation.XY.m128d_f64[0] = *(double *)(pFVar37 + lVar38);
      local_328.Rotation.XY.m128d_f64[1] = *(double *)(pFVar37 + lVar38 + 8);
      local_328.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar37 + lVar38 + 0x10);
      local_328.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar37 + lVar38 + 0x10 + 8);
      local_328.Translation.XY.m128d_f64[0] = *(double *)(pFVar37 + lVar38 + 0x20);
      local_328.Translation.XY.m128d_f64[1] = *(double *)(pFVar37 + lVar38 + 0x20 + 8);
      local_328.Translation.ZW.m128d_f64[0] = *(double *)(pFVar37 + lVar38 + 0x30);
      local_328.Translation.ZW.m128d_f64[1] = *(double *)(pFVar37 + lVar38 + 0x30 + 8);
      local_328.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar37 + lVar38 + 0x40);
      local_328.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar37 + lVar38 + 0x40 + 8);
      local_328.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar37 + lVar38 + 0x50);
      local_328.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar37 + lVar38 + 0x50 + 8);
      local_388.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_388.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_388.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_388.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_388.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_388.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_388.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_388.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_388.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_388.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_388.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_388,&param_1->OffsetFromBoneToCopyFromInRefPose,&local_328);
      uVar42 = local_388.Translation.ZW.m128d_f64[0]._0_4_;
      uVar43 = local_388.Translation.ZW.m128d_f64[0]._4_4_;
      local_4b0 = local_388.Translation.XY.m128d_f64[0]._0_4_;
      uStack_4ac = local_388.Translation.XY.m128d_f64[0]._4_4_;
      uStack_4a8 = local_388.Translation.XY.m128d_f64[1]._0_4_;
      uStack_4a4 = local_388.Translation.XY.m128d_f64[1]._4_4_;
      local_4a0 = local_388.Translation.ZW.m128d_f64[0];
      uVar44 = local_388.Translation.XY.m128d_f64[0]._0_4_;
      uVar45 = local_388.Translation.XY.m128d_f64[0]._4_4_;
      uVar46 = local_388.Translation.XY.m128d_f64[1]._0_4_;
      uVar47 = local_388.Translation.XY.m128d_f64[1]._4_4_;
      goto LAB_14df3aab1;
    }
    `FIKRetargetPinBoneOp::GetNewBoneTransform'::__l2::<lambda_1>::operator()
              (&local_2c8,(TVector<double> *)&local_4c8._s_0);
    pTVar34 = FRetargetSkeleton::GetParentTransform
                        (local_520,(param_1->BoneToCopyTo).BoneIndex,param_4);
    local_3d8 = (pTVar34->Translation).XY.m128d_f64[0];
    dStack_3d0 = (pTVar34->Translation).XY.m128d_f64[1];
    local_3c8 = (pTVar34->Translation).ZW.m128d_f64[0];
    dVar54 = local_3c8 + local_4c8._s_0.Z;
    uVar44 = SUB84(dStack_3d0 + local_4c8._s_0.Y,0);
    uVar45 = (undefined4)((ulonglong)(dStack_3d0 + local_4c8._s_0.Y) >> 0x20);
    local_3c0._8_4_ = uVar44;
    local_3c0._0_8_ = local_3d8 + local_4c8._s_0.X;
    local_3c0._12_4_ = uVar45;
    auVar8._8_4_ = uVar44;
    auVar8._0_8_ = local_3d8 + local_4c8._s_0.X;
    auVar8._12_4_ = uVar45;
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar8;
    local_3b0 = dVar54;
  }
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar54;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
LAB_14df3aabc:
  EVar4 = (local_508->Settings).RotationMode;
  if (EVar4 == CopyGlobalRotation) {
    uVar29 = (param_1->BoneToCopyFrom).BoneIndex;
    if ((int)uVar29 < pTVar36->ArrayNum) {
      uVar30 = ~uVar29 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar41)) {
      pcVar5 = (code *)swi(3);
      pTVar34 = (TTransform<double> *)(*pcVar5)();
      return pTVar34;
    }
    pFVar2 = (pTVar36->AllocatorInstance).Data;
    pFVar37 = pFVar2 + (longlong)(int)uVar29 * 0x60;
    dVar54 = *(double *)(pFVar37 + 8);
    pFVar2 = pFVar2 + (longlong)(int)uVar29 * 0x60 + 0x10;
    dVar51 = *(double *)pFVar2;
    dVar14 = *(double *)(pFVar2 + 8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)pFVar37;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar54;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar51;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar14;
  }
  else if (EVar4 == MaintainOffsetFromBoneToCopyFrom) {
    pTVar32 = FResolvedRetargetPoseSet::GetGlobalRetargetPose(&pFVar39->RetargetPoses);
    pTVar33 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                        ((FResolvedRetargetPoseSet *)((longlong)local_518[0] + 0xb8));
    uVar40 = (param_1->BoneToCopyFrom).BoneIndex;
    local_518[0] = (double)pTVar33;
    uVar29 = uVar30;
    if ((int)uVar40 < pTVar32->ArrayNum) {
      uVar29 = ~uVar40 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar41)) {
      pcVar5 = (code *)swi(3);
      pTVar34 = (TTransform<double> *)(*pcVar5)();
      return pTVar34;
    }
    uVar29 = (param_1->BoneToCopyTo).BoneIndex;
    pFVar37 = (pTVar32->AllocatorInstance).Data + (longlong)(int)uVar40 * 0x60;
    dVar54 = local_518[0];
    if ((int)uVar29 < (int)*(longlong *)((longlong)local_518[0] + 8)) {
      uVar30 = ~uVar29 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar41)) {
      pcVar5 = (code *)swi(3);
      pTVar34 = (TTransform<double> *)(*pcVar5)();
      return pTVar34;
    }
    dVar49 = *(double *)(pFVar37 + 0x10) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar50 = *(double *)(pFVar37 + 0x18) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar40 = (param_1->BoneToCopyFrom).BoneIndex;
    dVar51 = *(double *)pFVar37 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar14 = *(double *)(pFVar37 + 8) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]
    ;
    uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
    uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
    uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
    uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
    pdVar1 = (double *)((longlong)(int)uVar29 * 0x60 + *(longlong *)dVar54);
    dVar11 = *pdVar1;
    dVar12 = pdVar1[1];
    pdVar1 = (double *)((longlong)(int)uVar29 * 0x60 + 0x10 + *(longlong *)dVar54);
    dVar54 = *pdVar1;
    dVar48 = pdVar1[1];
    uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
    uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
    uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
    uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
    uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
    uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
    uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
    uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
    uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
    uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
    uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
    uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
    uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
    uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
    uVar67 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
    uVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
    uVar30 = 0;
    if ((int)uVar40 < pTVar36->ArrayNum) {
      uVar30 = ~uVar40 >> 0x1f;
    }
    dVar15 = dVar11 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar48 * dVar51 +
             dVar12 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar54 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar16 = dVar11 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar48 * dVar14 +
             dVar12 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar54 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_518[0] = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_518[1] = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar52 = dVar11 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar48 * dVar49 +
             dVar12 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar54 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar54 = dVar11 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar48 * dVar50 +
             dVar12 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar54 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    if (uVar30 == 0) {
      bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar41) {
        pcVar5 = (code *)swi(3);
        pTVar34 = (TTransform<double> *)(*pcVar5)();
        return pTVar34;
      }
      uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
      uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
      uVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
      uVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
      uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
      uVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
      uVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
      uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
      uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
      uVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
      uVar67 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
      uVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
      uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
      uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
      uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
      uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
      uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
      uVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
      uVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
      uVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
    }
    _Var26.m128d_f64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64;
    pFVar37 = (pTVar36->AllocatorInstance).Data;
    pFVar2 = pFVar37 + (longlong)(int)uVar40 * 0x60 + 0x10;
    dVar11 = *(double *)pFVar2;
    dVar12 = *(double *)(pFVar2 + 8);
    pFVar37 = pFVar37 + (longlong)(int)uVar40 * 0x60;
    dVar48 = *(double *)pFVar37;
    dVar49 = *(double *)(pFVar37 + 8);
    local_518[0] = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_518[1] = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar51 = dVar11 * dVar15 * (double)CONCAT44(uVar56,uVar55) + dVar49 * dVar54 +
             dVar12 * dVar16 * (double)CONCAT44(uVar59,uVar58) +
             dVar48 * dVar52 * (double)CONCAT44(uVar62,uVar61);
    dVar14 = dVar48 * dVar15 * (double)CONCAT44(uVar65,uVar64) + dVar12 * dVar54 +
             dVar49 * dVar16 * (double)CONCAT44(uVar68,uVar67) + dVar11 * dVar52 * local_518[1];
    auVar9._8_4_ = SUB84(dVar51,0);
    auVar9._0_8_ = dVar12 * dVar15 * (double)CONCAT44(uVar43,uVar44) + dVar48 * dVar54 +
                   dVar11 * dVar16 * (double)CONCAT44(uVar57,uVar45) +
                   dVar49 * dVar52 * (double)CONCAT44(uVar60,uVar47);
    auVar9._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar9;
    auVar13._8_4_ = SUB84(dVar14,0);
    auVar13._0_8_ =
         dVar49 * dVar15 * (double)CONCAT44(uVar63,uVar46) + dVar11 * dVar54 +
         dVar48 * dVar16 * (double)CONCAT44(uVar66,uVar42) + dVar12 * dVar52 * local_518[0];
    auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar13;
    local_518 = _Var26.m128d_f64;
  }
  else {
    `FIKRetargetPinBoneOp::GetNewBoneTransform'::__l11::<lambda_3>::operator()(&local_528);
  }
  if (local_2b8.CachedEndOfBranchIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.CachedEndOfBranchIndices.AllocatorInstance.Data);
  }
  DestructItems<FResolvedRetargetPose,int>
            ((FResolvedRetargetPose *)local_2b8.RetargetPoses.RetargetPoses.AllocatorInstance.Data,
             local_2b8.RetargetPoses.RetargetPoses.ArrayNum);
  if ((FResolvedRetargetPose *)local_2b8.RetargetPoses.RetargetPoses.AllocatorInstance.Data !=
      (FResolvedRetargetPose *)0x0) {
    FMemory::Free(local_2b8.RetargetPoses.RetargetPoses.AllocatorInstance.Data);
  }
  if (local_2b8.ParentIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.ParentIndices.AllocatorInstance.Data);
  }
  if (local_2b8.BoneNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.BoneNames.AllocatorInstance.Data);
  }
  if (local_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 1505917c0

bool __thiscall
`FIKRetargetPinBoneOp::GetNewBoneTransform'::__l4::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4305714824593014452>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4305714824593014452>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150591800

bool __thiscall
`FIKRetargetPinBoneOp::GetNewBoneTransform'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4305714824593014423>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4305714824593014423>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

