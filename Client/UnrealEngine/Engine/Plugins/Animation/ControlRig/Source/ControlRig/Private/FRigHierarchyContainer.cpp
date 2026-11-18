// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a2be460

UScriptStruct * __cdecl FRigHierarchyContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigHierarchyContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyContainer,(UObject *)pUVar1,
                         L"RigHierarchyContainer");
  }
  return Z_Registration_Info_UScriptStruct_FRigHierarchyContainer.OuterSingleton;
}

// FRigHierarchyContainer @ 14a2dc3c0

FRigHierarchyContainer * __thiscall
FRigHierarchyContainer::FRigHierarchyContainer
          (FRigHierarchyContainer *this,FRigHierarchyContainer *param_1)

{
  (this->BoneHierarchy).Bones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneHierarchy).Bones.ArrayNum = 0;
  (this->BoneHierarchy).Bones.ArrayMax = 0;
  FRigSpaceHierarchy::FRigSpaceHierarchy(&this->SpaceHierarchy);
  (this->ControlHierarchy).Controls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlHierarchy).Controls.ArrayNum = 0;
  (this->ControlHierarchy).Controls.ArrayMax = 0;
  (this->CurveContainer).Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveContainer).Curves.ArrayNum = 0;
  (this->CurveContainer).Curves.ArrayMax = 0;
  FRigBoneHierarchy::operator=(&this->BoneHierarchy,&param_1->BoneHierarchy);
  FRigSpaceHierarchy::operator=(&this->SpaceHierarchy,&param_1->SpaceHierarchy);
  FRigControlHierarchy::operator=(&this->ControlHierarchy,&param_1->ControlHierarchy);
  FRigCurveContainer::operator=(&this->CurveContainer,&param_1->CurveContainer);
  return this;
}

// FRigHierarchyContainer @ 14a2dc460

FRigHierarchyContainer * __thiscall
FRigHierarchyContainer::FRigHierarchyContainer(FRigHierarchyContainer *this)

{
  (this->BoneHierarchy).Bones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneHierarchy).Bones.ArrayNum = 0;
  (this->BoneHierarchy).Bones.ArrayMax = 0;
  FRigSpaceHierarchy::FRigSpaceHierarchy(&this->SpaceHierarchy);
  (this->ControlHierarchy).Controls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlHierarchy).Controls.ArrayNum = 0;
  (this->ControlHierarchy).Controls.ArrayMax = 0;
  (this->CurveContainer).Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveContainer).Curves.ArrayNum = 0;
  (this->CurveContainer).Curves.ArrayMax = 0;
  return this;
}

// ~FRigHierarchyContainer @ 14a2debb0

void __thiscall FRigHierarchyContainer::~FRigHierarchyContainer(FRigHierarchyContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRigCurve,int>
            ((FRigCurve *)(this->CurveContainer).Curves.AllocatorInstance.Data,
             (this->CurveContainer).Curves.ArrayNum);
  pFVar1 = (this->CurveContainer).Curves.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigControl,int>
            ((FRigControl *)(this->ControlHierarchy).Controls.AllocatorInstance.Data,
             (this->ControlHierarchy).Controls.ArrayNum);
  pFVar1 = (this->ControlHierarchy).Controls.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigSpace,int>
            ((FRigSpace *)(this->SpaceHierarchy).Spaces.AllocatorInstance.Data,
             (this->SpaceHierarchy).Spaces.ArrayNum);
  pFVar1 = (this->SpaceHierarchy).Spaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigBone,int>
            ((FRigBone *)(this->BoneHierarchy).Bones.AllocatorInstance.Data,
             (this->BoneHierarchy).Bones.ArrayNum);
  pFVar1 = (this->BoneHierarchy).Bones.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a2e06a0

FRigHierarchyContainer * __thiscall
FRigHierarchyContainer::operator=(FRigHierarchyContainer *this,FRigHierarchyContainer *param_1)

{
  FRigBoneHierarchy::operator=(&this->BoneHierarchy,&param_1->BoneHierarchy);
  FRigSpaceHierarchy::operator=(&this->SpaceHierarchy,&param_1->SpaceHierarchy);
  FRigControlHierarchy::operator=(&this->ControlHierarchy,&param_1->ControlHierarchy);
  FRigCurveContainer::operator=(&this->CurveContainer,&param_1->CurveContainer);
  return this;
}

// ImportFromText @ 14a31ff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
FRigHierarchyContainer::ImportFromText
          (FRigHierarchyContainer *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigHierarchyCopyPasteContent *param_1)

{
  FRigCurveContainer *pFVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FRigHierarchyContainer *pFVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  UPackage *pUVar18;
  UScriptStruct *pUVar19;
  UScriptStruct *pUVar20;
  FRigElementKey *pFVar21;
  TTuple<FRigElementKey,FRigElementKey> *pTVar22;
  FRigControl *pFVar23;
  FRigSpace *pFVar24;
  ForAnyElementType FVar25;
  wchar_t *pwVar26;
  ForElementType<FSetElementId> FVar27;
  ERigElementType *pEVar28;
  longlong lVar29;
  longlong lVar30;
  FScriptContainerElement *pFVar31;
  undefined1 *puVar32;
  FRigElement *pFVar33;
  FRigHierarchyCopyPasteContent *pFVar34;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  uint uVar40;
  FRigHierarchyContainer *pFVar41;
  undefined1 auStackY_4c8 [32];
  longlong local_478;
  undefined1 local_470;
  undefined1 local_46f;
  undefined1 local_46e;
  undefined1 local_46d [5];
  ForAnyElementType local_468;
  undefined8 local_460;
  FRigHierarchyContainer *local_458;
  FRigHierarchyCopyPasteContent *local_450;
  TSharedPtr<FRigElement,1> local_448;
  FName local_438;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 local_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 local_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  FName local_400;
  FName local_3f8;
  FName local_3f0;
  FName local_3e8;
  FOutputDevice local_3e0;
  int local_3d0;
  FRigElementKey local_3c8;
  FRigElementKey local_3bc;
  FRigElementKey local_3b0;
  FRigElementKey local_3a4;
  undefined **local_398;
  longlong local_390;
  undefined4 local_388;
  undefined4 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  uint uStack_370;
  undefined4 local_36c;
  undefined4 uStack_368;
  uint uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  uint uStack_358;
  undefined4 local_354;
  undefined4 uStack_350;
  uint uStack_34c;
  undefined8 local_348;
  FSharedReferencer<1> local_340;
  undefined8 local_338;
  FSharedReferencer<1> local_330;
  undefined8 local_328;
  FSharedReferencer<1> local_320;
  undefined8 local_318;
  FSharedReferencer<1> local_310;
  FRigElementKey local_308;
  FRigElementKey local_2fc;
  FRigElementKey local_2f0;
  FRigElementKey local_2e4;
  FRigElementKey local_2d8;
  FRigElementKey local_2cc;
  FRigElementKey local_2c0;
  FRigElementKey local_2b4;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  undefined1 local_248 [12];
  undefined1 local_23c [12];
  undefined1 local_230 [12];
  undefined1 local_224 [12];
  TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
  local_218;
  FRigBone local_1c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar13 = (param_1->Contents).ArrayNum;
  if ((((iVar13 != 0) && ((param_1->Types).ArrayNum == iVar13)) &&
      ((param_1->LocalTransforms).ArrayNum == iVar13)) &&
     ((param_1->GlobalTransforms).ArrayNum == iVar13)) {
    iVar13 = (this->BoneHierarchy).Bones.ArrayNum;
    pFVar31 = (this->BoneHierarchy).Bones.AllocatorInstance.Data;
    pFVar35 = pFVar31 + (longlong)iVar13 * 0x170;
    local_218.Elements._0_8_ = 0;
    local_218.Elements._8_8_ = 0;
    local_218.Elements._32_8_ = 0;
    local_218.Elements._40_4_ = 0;
    local_218.Elements._44_4_ = 0x80;
    local_218.Elements._48_4_ = 0xffffffff;
    local_218.Elements._52_4_ = 0;
    local_218.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_218.HashSize = 0;
    local_458 = this;
    local_450 = param_1;
    local_438 = (FName)__return_storage_ptr__;
    while( true ) {
      if ((this->BoneHierarchy).Bones.ArrayNum != iVar13) {
        local_470 = 0;
        `TCheckedPointerIterator<FRigBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_470);
      }
      __return_storage_ptr__ = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)local_438;
      if (pFVar31 == pFVar35) break;
      local_308.Type = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
      local_308.Name = *(FName *)(pFVar31 + 8);
      local_2fc.Type = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
      local_2fc.Name = *(FName *)(pFVar31 + 8);
      TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
      ::Emplace<FRigElementKey,FRigElementKey>
                ((TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                  *)&local_218,&local_2fc,&local_308);
      pFVar31 = pFVar31 + 0x170;
    }
    iVar13 = (this->ControlHierarchy).Controls.ArrayNum;
    pFVar31 = (this->ControlHierarchy).Controls.AllocatorInstance.Data;
    pFVar35 = pFVar31 + (longlong)iVar13 * 0x360;
    while( true ) {
      if ((local_458->ControlHierarchy).Controls.ArrayNum != iVar13) {
        local_46f = 0;
        `TCheckedPointerIterator<FRigControl,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_46f);
      }
      if (pFVar31 == pFVar35) break;
      local_2f0.Type = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
      local_2f0.Name = *(FName *)(pFVar31 + 8);
      local_2e4.Type = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
      local_2e4.Name = *(FName *)(pFVar31 + 8);
      TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
      ::Emplace<FRigElementKey,FRigElementKey>
                ((TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                  *)&local_218,&local_2e4,&local_2f0);
      pFVar31 = pFVar31 + 0x360;
    }
    iVar13 = (local_458->SpaceHierarchy).Spaces.ArrayNum;
    pFVar31 = (local_458->SpaceHierarchy).Spaces.AllocatorInstance.Data;
    pFVar35 = pFVar31 + (longlong)iVar13 * 0xf0;
    while( true ) {
      if ((local_458->SpaceHierarchy).Spaces.ArrayNum != iVar13) {
        local_46e = 0;
        `TCheckedPointerIterator<FRigSpace,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_46e);
      }
      if (pFVar31 == pFVar35) break;
      local_2d8.Type = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
      local_2d8.Name = *(FName *)(pFVar31 + 8);
      local_2cc.Type = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
      local_2cc.Name = *(FName *)(pFVar31 + 8);
      TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
      ::Emplace<FRigElementKey,FRigElementKey>
                ((TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                  *)&local_218,&local_2cc,&local_2d8);
      pFVar31 = pFVar31 + 0xf0;
    }
    iVar13 = (local_458->CurveContainer).Curves.ArrayNum;
    pFVar31 = (local_458->CurveContainer).Curves.AllocatorInstance.Data;
    pFVar35 = pFVar31 + (longlong)iVar13 * 0x20;
    while( true ) {
      if ((local_458->CurveContainer).Curves.ArrayNum != iVar13) {
        local_46d[0] = 0;
        `TCheckedPointerIterator<FRigCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_46d);
      }
      if (pFVar31 == pFVar35) break;
      local_2c0.Type = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
      local_2c0.Name = *(FName *)(pFVar31 + 8);
      local_2b4.Type = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
      local_2b4.Name = *(FName *)(pFVar31 + 8);
      TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
      ::Emplace<FRigElementKey,FRigElementKey>
                ((TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                  *)&local_218,&local_2b4,&local_2c0);
      pFVar31 = pFVar31 + 0x20;
    }
    FOutputDevice::FOutputDevice(&local_3e0);
    uVar37 = 0;
    local_3e0._padding_ = (longlong)&___7FRigHierarchyContainerImportErrorContext__6B_;
    local_3d0 = 0;
    local_468.Data = (FScriptContainerElement *)0x0;
    local_460 = 0;
    if (0 < (local_450->Types).ArrayNum) {
      local_478 = 0;
      pFVar34 = local_450;
      uVar38 = uVar37;
      do {
        uVar14 = (uint)uVar38;
        local_3d0 = 0;
        uVar40 = ~uVar14 >> 0x1f;
        local_448.Object = (FRigElement *)0x0;
        local_448.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        uVar36 = 0;
        if ((int)uVar14 < (pFVar34->Types).ArrayNum) {
          uVar36 = uVar40;
        }
        if ((uVar36 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar16;
        }
        FVar3 = (pFVar34->Types).AllocatorInstance.Data[local_478];
        if (FVar3 == (FScriptContainerElement)0x1) {
          pTVar17 = ::operator_new(0x180);
          if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
            pFVar33 = (FRigElement *)&DAT_00000010;
            local_310.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            pTVar17->SharedReferenceCount = (atomic<int>)0x1;
            pTVar17->WeakReferenceCount = (atomic<int>)0x1;
            pTVar17->_padding_ =
                 (longlong)
                 &___7__TIntrusiveReferenceController_UFRigBone___00_SharedPointerInternals__6B_;
            FRigBone::FRigBone((FRigBone *)(pTVar17 + 1));
            pFVar33 = (FRigElement *)(pTVar17 + 1);
            if ((pFVar33 == (FRigElement *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
            local_310.ReferenceController = pTVar17;
          }
          FVar10.ReferenceController = local_310.ReferenceController;
          local_318 = 0;
          local_448.Object = pFVar33;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_448.SharedReferenceCount,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar10.ReferenceController);
          if (Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton == (UScriptStruct *)0x0) {
            pUVar18 = Z_Construct_UPackage__Script_ControlRig();
            Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FRigBone,(UObject *)pUVar18,L"RigBone");
          }
          pUVar19 = Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton;
          if (Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton == (UScriptStruct *)0x0) {
            pUVar18 = Z_Construct_UPackage__Script_ControlRig();
            Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FRigBone,(UObject *)pUVar18,L"RigBone");
          }
          local_2a8 = (FName)(Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton)->_padding_;
          ::FName::ToString(&local_2a8,&local_258);
          pFVar33 = local_448.Object;
          pFVar34 = local_450;
          uVar36 = 0;
          if ((int)uVar14 < (local_450->Contents).ArrayNum) {
            uVar36 = uVar40;
          }
          if ((uVar36 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          pFVar31 = (pFVar34->Contents).AllocatorInstance.Data;
          if (*(int *)(pFVar31 + uVar37 + 8) == 0) {
            pwVar26 = L"";
          }
          else {
            pwVar26 = *(wchar_t **)(pFVar31 + uVar37);
          }
          UScriptStruct::ImportText
                    (pUVar19,pwVar26,pFVar33,(UObject *)0x0,0,&local_3e0,&local_258,true);
          FVar25.Data = local_258.Data.AllocatorInstance.Data;
LAB_14a320af7:
          if (FVar25.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar25.Data);
          }
        }
        else {
          if (FVar3 == (FScriptContainerElement)0x2) {
            pTVar17 = ::operator_new(0x100);
            if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
              pFVar33 = (FRigElement *)&DAT_00000010;
              local_320.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar17->SharedReferenceCount = (atomic<int>)0x1;
              pFVar33 = (FRigElement *)(pTVar17 + 1);
              pTVar17->WeakReferenceCount = (atomic<int>)0x1;
              pTVar17->_padding_ =
                   (longlong)
                   &___7__TIntrusiveReferenceController_UFRigSpace___00_SharedPointerInternals__6B_;
              pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
              pTVar17[1]._padding_ = (longlong)&___7FRigSpace__6B_;
              *(undefined4 *)&pTVar17[2]._padding_ = 0xffffffff;
              *(undefined1 *)&pTVar17[2].SharedReferenceCount = 0;
              *(undefined8 *)&pTVar17[2].WeakReferenceCount = 0;
              *(undefined4 *)((longlong)&pTVar17[3]._padding_ + 4) = 0xffffffff;
              pTVar17[4] = (TReferenceControllerBase<1>)
                           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              pTVar17[5] = (TReferenceControllerBase<1>)
                           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              pTVar17[6] = (TReferenceControllerBase<1>)
                           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              pTVar17[7] = (TReferenceControllerBase<1>)
                           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              pTVar17[8] = (TReferenceControllerBase<1>)
                           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              pTVar17[9] = (TReferenceControllerBase<1>)
                           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              pTVar17[10] = (TReferenceControllerBase<1>)
                            UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              pTVar17[0xb] = (TReferenceControllerBase<1>)
                             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              pTVar17[0xc] = (TReferenceControllerBase<1>)
                             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              pTVar17[0xd] = (TReferenceControllerBase<1>)
                             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              pTVar17[0xe] = (TReferenceControllerBase<1>)
                             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              pTVar17[0xf] = (TReferenceControllerBase<1>)
                             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              if ((pFVar33 == (FRigElement *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
              local_320.ReferenceController = pTVar17;
            }
            FVar10.ReferenceController = local_320.ReferenceController;
            local_328 = 0;
            local_448.Object = pFVar33;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_448.SharedReferenceCount,&local_320);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_320.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar10.ReferenceController);
            pUVar19 = FRigSpace::StaticStruct();
            pUVar20 = FRigSpace::StaticStruct();
            local_2a0 = (FName)pUVar20->_padding_;
            ::FName::ToString(&local_2a0,&local_268);
            pFVar33 = local_448.Object;
            pFVar34 = local_450;
            uVar36 = 0;
            if ((int)uVar14 < (local_450->Contents).ArrayNum) {
              uVar36 = uVar40;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            pFVar31 = (pFVar34->Contents).AllocatorInstance.Data;
            if (*(int *)(pFVar31 + uVar37 + 8) == 0) {
              pwVar26 = L"";
            }
            else {
              pwVar26 = *(wchar_t **)(pFVar31 + uVar37);
            }
            UScriptStruct::ImportText
                      (pUVar19,pwVar26,pFVar33,(UObject *)0x0,0,&local_3e0,&local_268,true);
            FVar25.Data = local_268.Data.AllocatorInstance.Data;
            goto LAB_14a320af7;
          }
          if (FVar3 == (FScriptContainerElement)0x4) {
            pTVar17 = ::operator_new(0x370);
            if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
              pFVar33 = (FRigElement *)&DAT_00000010;
              local_330.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar17->SharedReferenceCount = (atomic<int>)0x1;
              pTVar17->WeakReferenceCount = (atomic<int>)0x1;
              pTVar17->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_UFRigControl___00_SharedPointerInternals__6B_
              ;
              FRigControl::FRigControl((FRigControl *)(pTVar17 + 1));
              pFVar33 = (FRigElement *)(pTVar17 + 1);
              if ((pFVar33 == (FRigElement *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
              local_330.ReferenceController = pTVar17;
            }
            FVar10.ReferenceController = local_330.ReferenceController;
            local_338 = 0;
            local_448.Object = pFVar33;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_448.SharedReferenceCount,&local_330);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_330.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar10.ReferenceController);
            if (Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton == (UScriptStruct *)0x0
               ) {
              pUVar18 = Z_Construct_UPackage__Script_ControlRig();
              Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FRigControl,(UObject *)pUVar18,
                                   L"RigControl");
            }
            pUVar19 = Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton;
            if (Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton == (UScriptStruct *)0x0
               ) {
              pUVar18 = Z_Construct_UPackage__Script_ControlRig();
              Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FRigControl,(UObject *)pUVar18,
                                   L"RigControl");
            }
            local_298 = (FName)(Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton)->
                               _padding_;
            ::FName::ToString(&local_298,&local_278);
            pFVar33 = local_448.Object;
            pFVar34 = local_450;
            uVar36 = 0;
            if ((int)uVar14 < (local_450->Contents).ArrayNum) {
              uVar36 = uVar40;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            pFVar31 = (pFVar34->Contents).AllocatorInstance.Data;
            if (*(int *)(pFVar31 + uVar37 + 8) == 0) {
              pwVar26 = L"";
            }
            else {
              pwVar26 = *(wchar_t **)(pFVar31 + uVar37);
            }
            UScriptStruct::ImportText
                      (pUVar19,pwVar26,pFVar33,(UObject *)0x0,0,&local_3e0,&local_278,true);
            FVar25.Data = local_278.Data.AllocatorInstance.Data;
            goto LAB_14a320af7;
          }
          if (FVar3 == (FScriptContainerElement)0x8) {
            pTVar17 = ::operator_new(0x30);
            if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
              pFVar33 = (FRigElement *)&DAT_00000010;
              local_340.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar17->SharedReferenceCount = (atomic<int>)0x1;
              pFVar33 = (FRigElement *)(pTVar17 + 1);
              pTVar17->WeakReferenceCount = (atomic<int>)0x1;
              pTVar17->_padding_ =
                   (longlong)
                   &___7__TIntrusiveReferenceController_UFRigCurve___00_SharedPointerInternals__6B_;
              pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
              pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[1]._padding_ = (longlong)&___7FRigCurve__6B_;
              *(undefined4 *)&pTVar17[2]._padding_ = 0xffffffff;
              if ((pFVar33 == (FRigElement *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
              local_340.ReferenceController = pTVar17;
            }
            FVar10.ReferenceController = local_340.ReferenceController;
            local_348 = 0;
            local_448.Object = pFVar33;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_448.SharedReferenceCount,&local_340);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_340.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar10.ReferenceController);
            if (Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton == (UScriptStruct *)0x0)
            {
              pUVar18 = Z_Construct_UPackage__Script_ControlRig();
              Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FRigCurve,(UObject *)pUVar18,
                                   L"RigCurve");
            }
            pUVar19 = Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton;
            if (Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton == (UScriptStruct *)0x0)
            {
              pUVar18 = Z_Construct_UPackage__Script_ControlRig();
              Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FRigCurve,(UObject *)pUVar18,
                                   L"RigCurve");
            }
            local_290 = (FName)(Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton)->
                               _padding_;
            ::FName::ToString(&local_290,&local_288);
            pFVar33 = local_448.Object;
            pFVar34 = local_450;
            uVar36 = 0;
            if ((int)uVar14 < (local_450->Contents).ArrayNum) {
              uVar36 = uVar40;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            pFVar31 = (pFVar34->Contents).AllocatorInstance.Data;
            if (*(int *)(pFVar31 + uVar37 + 8) == 0) {
              pwVar26 = L"";
            }
            else {
              pwVar26 = *(wchar_t **)(pFVar31 + uVar37);
            }
            UScriptStruct::ImportText
                      (pUVar19,pwVar26,pFVar33,(UObject *)0x0,0,&local_3e0,&local_288,true);
            FVar25.Data = local_288.Data.AllocatorInstance.Data;
            goto LAB_14a320af7;
          }
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4627597970315935864>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyContainer.cpp"
                              ,0x78,"false");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
        }
        lVar39 = 0;
        if (0 < local_3d0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_448.SharedReferenceCount.ReferenceController);
          goto LAB_14a321b80;
        }
        if (((local_468.Data <= &local_448) &&
            (&local_448 <
             (TSharedPtr<FRigElement,1> *)(local_468.Data + (longlong)local_460._4_4_ * 0x10))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar16;
        }
        iVar13 = (int)local_460;
        if ((int)local_460 == local_460._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_468,(int *)((longlong)&local_460 + 4));
        }
        local_460 = CONCAT44(local_460._4_4_,iVar13 + 1);
        *(FRigElement **)&local_468.Data[(longlong)iVar13 * 0x10].field_0x0 = local_448.Object;
        *(TReferenceControllerBase<1> **)(local_468.Data + (longlong)iVar13 * 0x10 + 8) =
             local_448.SharedReferenceCount.ReferenceController;
        if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_448.SharedReferenceCount.ReferenceController);
        pFVar9 = local_458;
        iVar13 = (pFVar34->Types).ArrayNum;
        local_478 = local_478 + 1;
        uVar38 = (ulonglong)(uVar14 + 1);
        uVar37 = uVar37 + 0x10;
      } while ((int)(uVar14 + 1) < iVar13);
      uVar36 = 0;
      if (0 < iVar13) {
        pFVar1 = &local_458->CurveContainer;
        pFVar41 = local_458;
        do {
          uVar40 = ~uVar36 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar36 < (local_450->Types).ArrayNum) {
            uVar14 = uVar40;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          FVar3 = (local_450->Types).AllocatorInstance.Data[lVar39];
          uVar14 = 0;
          if (FVar3 == (FScriptContainerElement)0x1) {
            if ((int)uVar36 < (int)local_460) {
              uVar14 = uVar40;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            local_438.ComparisonIndex.Value = 0;
            local_438.Number = 0;
            plVar4 = *(longlong **)&local_468.Data[lVar39 * 0x10].field_0x0;
            pFVar21 = (FRigElementKey *)(**(code **)(*plVar4 + 0x10))(plVar4,local_224,0);
            pTVar22 = TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                      ::Find(&local_218,pFVar21);
            puVar32 = &pTVar22->field_0xc;
            if (pTVar22 == (TTuple<FRigElementKey,FRigElementKey> *)0x0) {
              puVar32 = (undefined1 *)0x0;
            }
            if (puVar32 != (undefined1 *)0x0) {
              local_438 = *(FName *)(puVar32 + 4);
            }
            FVar5 = local_438;
            uVar14 = 0;
            if ((int)uVar36 < (local_450->GlobalTransforms).ArrayNum) {
              uVar14 = uVar40;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            pFVar35 = (local_450->GlobalTransforms).AllocatorInstance.Data + lVar39 * 0x60;
            FRigBone::FRigBone(&local_1c8);
            local_1c8.InitialTransform.Rotation.XY.m128d_f64[0] = (double)plVar4[6];
            local_1c8.InitialTransform.Rotation.XY.m128d_f64[1] = (double)plVar4[7];
            local_1c8.InitialTransform.Rotation.ZW.m128d_f64[0] = (double)plVar4[8];
            local_1c8.InitialTransform.Rotation.ZW.m128d_f64[1] = (double)plVar4[9];
            local_1c8._8_8_ = plVar4[1];
            pFVar31 = (pFVar41->BoneHierarchy).Bones.AllocatorInstance.Data;
            local_1c8.InitialTransform.Translation.XY.m128d_f64[0] = (double)plVar4[10];
            local_1c8.InitialTransform.Translation.XY.m128d_f64[1] = (double)plVar4[0xb];
            local_1c8.InitialTransform.Translation.ZW.m128d_f64[0] = (double)plVar4[0xc];
            local_1c8.InitialTransform.Translation.ZW.m128d_f64[1] = (double)plVar4[0xd];
            local_1c8.InitialTransform.Scale3D.XY.m128d_f64[0] = (double)plVar4[0xe];
            local_1c8.InitialTransform.Scale3D.XY.m128d_f64[1] = (double)plVar4[0xf];
            local_1c8.InitialTransform.Scale3D.ZW.m128d_f64[0] = (double)plVar4[0x10];
            local_1c8.InitialTransform.Scale3D.ZW.m128d_f64[1] = (double)plVar4[0x11];
            local_1c8.LocalTransform.Rotation.XY.m128d_f64[0] = (double)plVar4[0x1e];
            local_1c8.LocalTransform.Rotation.XY.m128d_f64[1] = (double)plVar4[0x1f];
            local_1c8.LocalTransform.Rotation.ZW.m128d_f64[0] = (double)plVar4[0x20];
            local_1c8.LocalTransform.Rotation.ZW.m128d_f64[1] = (double)plVar4[0x21];
            local_1c8.LocalTransform.Translation.XY.m128d_f64[0] = (double)plVar4[0x22];
            local_1c8.LocalTransform.Translation.XY.m128d_f64[1] = (double)plVar4[0x23];
            local_1c8.LocalTransform.Translation.ZW.m128d_f64[0] = (double)plVar4[0x24];
            local_1c8.LocalTransform.Translation.ZW.m128d_f64[1] = (double)plVar4[0x25];
            local_1c8.LocalTransform.Scale3D.XY.m128d_f64[0] = (double)plVar4[0x26];
            local_1c8.LocalTransform.Scale3D.XY.m128d_f64[1] = (double)plVar4[0x27];
            local_1c8.LocalTransform.Scale3D.ZW.m128d_f64[0] = (double)plVar4[0x28];
            local_1c8.LocalTransform.Scale3D.ZW.m128d_f64[1] = (double)plVar4[0x29];
            local_1c8.GlobalTransform.Rotation.XY.m128d_f64[0] = *(double *)pFVar35;
            local_1c8.GlobalTransform.Rotation.XY.m128d_f64[1] = *(double *)(pFVar35 + 8);
            local_1c8.GlobalTransform.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar35 + 0x10);
            local_1c8.GlobalTransform.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar35 + 0x18);
            local_1c8.GlobalTransform.Translation.XY.m128d_f64[0] = *(double *)(pFVar35 + 0x20);
            local_1c8.GlobalTransform.Translation.XY.m128d_f64[1] = *(double *)(pFVar35 + 0x28);
            local_1c8.GlobalTransform.Translation.ZW.m128d_f64[0] = *(double *)(pFVar35 + 0x30);
            local_1c8.GlobalTransform.Translation.ZW.m128d_f64[1] = *(double *)(pFVar35 + 0x38);
            local_1c8.GlobalTransform.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar35 + 0x40);
            local_1c8.GlobalTransform.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar35 + 0x48);
            local_1c8.GlobalTransform.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar35 + 0x50);
            local_1c8.GlobalTransform.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar35 + 0x58);
            local_1c8.ParentIndex = -1;
            local_1c8.Type = User;
            local_1c8.ParentName = FVar5;
            if (((pFVar31 <= (FScriptContainerElement *)&local_1c8) &&
                ((FScriptContainerElement *)&local_1c8 <
                 pFVar31 + (longlong)(pFVar41->BoneHierarchy).Bones.ArrayMax * 0x170)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            uVar14 = (pFVar41->BoneHierarchy).Bones.ArrayNum;
            piVar2 = &(pFVar41->BoneHierarchy).Bones.ArrayMax;
            if (uVar14 == *piVar2) {
              uVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x170,0x10,(ForAnyElementType *)pFVar41,piVar2);
            }
            (pFVar41->BoneHierarchy).Bones.ArrayNum = uVar14 + 1;
            FRigBone::FRigBone((FRigBone *)
                               ((local_458->BoneHierarchy).Bones.AllocatorInstance.Data +
                               (longlong)(int)uVar14 * 0x170),&local_1c8);
            uVar40 = 0;
            if ((int)uVar14 < (local_458->BoneHierarchy).Bones.ArrayNum) {
              uVar40 = ~uVar14 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            pFVar31 = (local_458->BoneHierarchy).Bones.AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 0x170;
            local_1c8._0_8_ = &___7FRigBone__6B_;
            if (local_1c8.Dependents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Dependents.AllocatorInstance.Data);
            }
            local_1c8._0_8_ = &___7FRigElement__6B_;
            uVar12 = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
            local_354 = CONCAT31(local_354._1_3_,uVar12);
            uStack_350 = (undefined4)*(longlong *)(pFVar31 + 8);
            uStack_34c = (uint)((ulonglong)*(longlong *)(pFVar31 + 8) >> 0x20);
            local_3a4.Type = (**(code **)(*plVar4 + 8))(plVar4);
            FVar5 = *(FName *)(plVar4 + 1);
            local_3a4.Name = FVar5;
            uVar14 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
            uVar14 = (uint)local_3a4.Type + (uVar14 + FVar5.Number) * 10;
            iVar13 = TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FRigElementKey>(&local_218,uVar14,&local_3a4);
            if ((iVar13 == -1) ||
               (lVar30 = (longlong)iVar13 * 0x20 + local_218.Elements._0_8_, lVar30 == 0)) {
              pFVar21 = TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                        ::EmplaceByHash<FRigElementKey>
                                  ((TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                                    *)&local_218,uVar14,&local_3a4);
            }
            else {
              pFVar21 = (FRigElementKey *)(lVar30 + 0xc);
            }
            pFVar21->Type = (char)local_354;
            *(int3 *)&pFVar21->field_0x1 = (int3)((uint)local_354 >> 8);
            (pFVar21->Name).ComparisonIndex = (FNameEntryId)uStack_350;
            (pFVar21->Name).Number = uStack_34c;
            uVar12 = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
            local_40c = CONCAT31(local_40c._1_3_,uVar12);
            uStack_408 = (undefined4)*(longlong *)(pFVar31 + 8);
            uStack_404 = (undefined4)((ulonglong)*(longlong *)(pFVar31 + 8) >> 0x20);
            if (((*(undefined4 **)__return_storage_ptr__ <= &local_40c) &&
                (&local_40c <
                 *(undefined4 **)__return_storage_ptr__ +
                 (longlong)*(int *)((longlong)__return_storage_ptr__ + 0xc) * 3)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
            iVar13 = *(int *)((longlong)__return_storage_ptr__ + 8);
            if (iVar13 == *(int *)((longlong)__return_storage_ptr__ + 0xc)) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&__return_storage_ptr__->AllocatorInstance,
                                  (int *)((longlong)__return_storage_ptr__ + 0xc));
            }
            *(int *)((longlong)__return_storage_ptr__ + 8) = iVar13 + 1;
            lVar30 = *(longlong *)__return_storage_ptr__;
            lVar29 = (longlong)iVar13 * 3;
            *(ulonglong *)(lVar30 + (longlong)iVar13 * 0xc) = CONCAT44(uStack_408,local_40c);
            pFVar41 = local_458;
            uVar15 = uStack_404;
LAB_14a321b50:
            *(undefined4 *)(lVar30 + 8 + lVar29 * 4) = uVar15;
          }
          else {
            if (FVar3 == (FScriptContainerElement)0x2) {
              if ((int)uVar36 < (int)local_460) {
                uVar14 = uVar40;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              plVar4 = *(longlong **)&local_468.Data[lVar39 * 0x10].field_0x0;
              local_3f0.ComparisonIndex.Value = 0;
              local_3f0.Number = 0;
              pFVar21 = (FRigElementKey *)(**(code **)(*plVar4 + 0x10))(plVar4,local_230);
              pTVar22 = TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                        ::Find(&local_218,pFVar21);
              puVar32 = &pTVar22->field_0xc;
              if (pTVar22 == (TTuple<FRigElementKey,FRigElementKey> *)0x0) {
                puVar32 = (undefined1 *)0x0;
              }
              if (puVar32 != (undefined1 *)0x0) {
                local_3f0 = *(FName *)(puVar32 + 4);
              }
              pFVar24 = FRigSpaceHierarchy::Add
                                  (&pFVar41->SpaceHierarchy,(FName *)(plVar4 + 1),
                                   *(ERigSpaceType *)(plVar4 + 3),&local_3f0,
                                   (TTransform<double> *)(plVar4 + 6));
              uVar12 = (**(code **)(pFVar24->_padding_ + 8))(pFVar24);
              uStack_35c = (undefined4)pFVar24->_padding_;
              uStack_358 = (uint)((ulonglong)pFVar24->_padding_ >> 0x20);
              local_360 = CONCAT31(local_360._1_3_,uVar12);
              local_3b0.Type = (**(code **)(*plVar4 + 8))(plVar4);
              local_3e8 = *(FName *)(plVar4 + 1);
              local_3b0.Name = local_3e8;
              uVar14 = ::GetTypeHash(local_3e8.ComparisonIndex.Value);
              uVar14 = (uVar14 + local_3e8.Number) * 10 + (uint)local_3b0.Type;
              if (local_218.Elements._8_4_ != local_218.Elements._52_4_) {
                FVar27 = (ForElementType<FSetElementId>)&local_218.Hash;
                if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar27 = local_218.Hash.SecondaryData;
                }
                uVar15 = *(int *)((longlong)FVar27 +
                                 (ulonglong)(local_218.HashSize - 1U & uVar14) * 4);
                while (uVar15 != 0xffffffff) {
                  pEVar28 = (ERigElementType *)
                            ((longlong)(int)uVar15 * 0x20 + local_218.Elements._0_8_);
                  if ((*(FName *)(pEVar28 + 4) == local_3b0.Name) && (*pEVar28 == local_3b0.Type)) {
                    if ((uVar15 != 0xffffffff) && (pEVar28 != (ERigElementType *)0x0)) {
                      pFVar21 = (FRigElementKey *)(pEVar28 + 0xc);
                      goto LAB_14a3215c6;
                    }
                    break;
                  }
                  uVar15 = *(undefined4 *)(pEVar28 + 0x18);
                }
              }
              pFVar21 = TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                        ::EmplaceByHash<FRigElementKey>
                                  ((TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                                    *)&local_218,uVar14,&local_3b0);
LAB_14a3215c6:
              pFVar21->Type = (char)local_360;
              *(int3 *)&pFVar21->field_0x1 = (int3)((uint)local_360 >> 8);
              (pFVar21->Name).ComparisonIndex = (FNameEntryId)uStack_35c;
              (pFVar21->Name).Number = uStack_358;
              uVar12 = (**(code **)(pFVar24->_padding_ + 8))(pFVar24);
              local_418 = CONCAT31(local_418._1_3_,uVar12);
              uStack_414 = (undefined4)pFVar24->_padding_;
              uStack_410 = (undefined4)((ulonglong)pFVar24->_padding_ >> 0x20);
              if (((*(undefined4 **)__return_storage_ptr__ <= &local_418) &&
                  (&local_418 <
                   *(undefined4 **)__return_storage_ptr__ +
                   (longlong)*(int *)((longlong)__return_storage_ptr__ + 0xc) * 3)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              iVar13 = *(int *)((longlong)__return_storage_ptr__ + 8);
              if (iVar13 == *(int *)((longlong)__return_storage_ptr__ + 0xc)) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&__return_storage_ptr__->AllocatorInstance,
                                    (int *)((longlong)__return_storage_ptr__ + 0xc));
              }
              *(int *)((longlong)__return_storage_ptr__ + 8) = iVar13 + 1;
              lVar30 = *(longlong *)__return_storage_ptr__;
              lVar29 = (longlong)iVar13 * 3;
              *(ulonglong *)(lVar30 + (longlong)iVar13 * 0xc) = CONCAT44(uStack_414,local_418);
              uVar15 = uStack_410;
              goto LAB_14a321b50;
            }
            if (FVar3 == (FScriptContainerElement)0x4) {
              if ((int)uVar36 < (int)local_460) {
                uVar14 = uVar40;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              local_3f8.ComparisonIndex.Value = 0;
              local_3f8.Number = 0;
              plVar4 = *(longlong **)&local_468.Data[lVar39 * 0x10].field_0x0;
              pFVar21 = (FRigElementKey *)(**(code **)(*plVar4 + 0x10))(plVar4,local_248);
              pTVar22 = TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                        ::Find(&local_218,pFVar21);
              puVar32 = &pTVar22->field_0xc;
              if (pTVar22 == (TTuple<FRigElementKey,FRigElementKey> *)0x0) {
                puVar32 = (undefined1 *)0x0;
              }
              if (puVar32 != (undefined1 *)0x0) {
                local_3f8 = *(FName *)(puVar32 + 4);
              }
              local_400.ComparisonIndex.Value = 0;
              local_400.Number = 0;
              pFVar21 = (FRigElementKey *)(**(code **)(*plVar4 + 0x18))(plVar4,local_23c);
              pTVar22 = TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                        ::Find(&local_218,pFVar21);
              puVar32 = &pTVar22->field_0xc;
              if (pTVar22 == (TTuple<FRigElementKey,FRigElementKey> *)0x0) {
                puVar32 = (undefined1 *)0x0;
              }
              if (puVar32 != (undefined1 *)0x0) {
                local_400 = *(FName *)(puVar32 + 4);
              }
              pFVar23 = FRigControlHierarchy::Add
                                  (&pFVar41->ControlHierarchy,(FName *)(plVar4 + 1),
                                   *(ERigControlType *)(plVar4 + 3),&local_3f8,&local_400,
                                   (TTransform<double> *)(plVar4 + 8),
                                   (FRigControlValue *)(plVar4 + 0x14),
                                   (FName *)((longlong)plVar4 + 700),
                                   (TTransform<double> *)(plVar4 + 0x5a),
                                   (FLinearColor *)(plVar4 + 0x66));
              pFVar23->DisplayName = *(FName *)((longlong)plVar4 + 0x1c);
              pFVar23->bAnimatable = *(bool *)((longlong)plVar4 + 0x1aa);
              pFVar23->PrimaryAxis = *(ERigControlAxis *)(plVar4 + 0x35);
              pFVar23->bLimitTranslation = *(bool *)((longlong)plVar4 + 0x1ab);
              pFVar23->bLimitRotation = *(bool *)((longlong)plVar4 + 0x1ac);
              pFVar23->bLimitScale = *(bool *)((longlong)plVar4 + 0x1ad);
              lVar30 = plVar4[0x36];
              lVar29 = plVar4[0x37];
              (pFVar23->MinimumValue).FloatStorage.Float00 = (float)(int)lVar30;
              (pFVar23->MinimumValue).FloatStorage.Float01 = (float)(int)((ulonglong)lVar30 >> 0x20)
              ;
              (pFVar23->MinimumValue).FloatStorage.Float02 = (float)(int)lVar29;
              (pFVar23->MinimumValue).FloatStorage.Float03 = (float)(int)((ulonglong)lVar29 >> 0x20)
              ;
              lVar30 = plVar4[0x38];
              lVar29 = plVar4[0x39];
              (pFVar23->MinimumValue).FloatStorage.Float10 = (float)(int)lVar30;
              (pFVar23->MinimumValue).FloatStorage.Float11 = (float)(int)((ulonglong)lVar30 >> 0x20)
              ;
              (pFVar23->MinimumValue).FloatStorage.Float12 = (float)(int)lVar29;
              (pFVar23->MinimumValue).FloatStorage.Float13 = (float)(int)((ulonglong)lVar29 >> 0x20)
              ;
              lVar30 = plVar4[0x3a];
              lVar29 = plVar4[0x3b];
              (pFVar23->MinimumValue).FloatStorage.Float20 = (float)(int)lVar30;
              (pFVar23->MinimumValue).FloatStorage.Float21 = (float)(int)((ulonglong)lVar30 >> 0x20)
              ;
              (pFVar23->MinimumValue).FloatStorage.Float22 = (float)(int)lVar29;
              (pFVar23->MinimumValue).FloatStorage.Float23 = (float)(int)((ulonglong)lVar29 >> 0x20)
              ;
              lVar30 = plVar4[0x3c];
              lVar29 = plVar4[0x3d];
              (pFVar23->MinimumValue).FloatStorage.Float30 = (float)(int)lVar30;
              (pFVar23->MinimumValue).FloatStorage.Float31 = (float)(int)((ulonglong)lVar30 >> 0x20)
              ;
              (pFVar23->MinimumValue).FloatStorage.Float32 = (float)(int)lVar29;
              (pFVar23->MinimumValue).FloatStorage.Float33 = (float)(int)((ulonglong)lVar29 >> 0x20)
              ;
              lVar30 = plVar4[0x3e];
              lVar29 = plVar4[0x3f];
              (pFVar23->MinimumValue).FloatStorage.Float00_2 = (float)(int)lVar30;
              (pFVar23->MinimumValue).FloatStorage.Float01_2 =
                   (float)(int)((ulonglong)lVar30 >> 0x20);
              (pFVar23->MinimumValue).FloatStorage.Float02_2 = (float)(int)lVar29;
              (pFVar23->MinimumValue).FloatStorage.Float03_2 =
                   (float)(int)((ulonglong)lVar29 >> 0x20);
              lVar30 = plVar4[0x40];
              lVar29 = plVar4[0x41];
              (pFVar23->MinimumValue).FloatStorage.Float10_2 = (float)(int)lVar30;
              (pFVar23->MinimumValue).FloatStorage.Float11_2 =
                   (float)(int)((ulonglong)lVar30 >> 0x20);
              (pFVar23->MinimumValue).FloatStorage.Float12_2 = (float)(int)lVar29;
              (pFVar23->MinimumValue).FloatStorage.Float13_2 =
                   (float)(int)((ulonglong)lVar29 >> 0x20);
              lVar30 = plVar4[0x42];
              lVar29 = plVar4[0x43];
              (pFVar23->MinimumValue).FloatStorage.Float20_2 = (float)(int)lVar30;
              (pFVar23->MinimumValue).FloatStorage.Float21_2 =
                   (float)(int)((ulonglong)lVar30 >> 0x20);
              (pFVar23->MinimumValue).FloatStorage.Float22_2 = (float)(int)lVar29;
              (pFVar23->MinimumValue).FloatStorage.Float23_2 =
                   (float)(int)((ulonglong)lVar29 >> 0x20);
              lVar30 = plVar4[0x44];
              lVar29 = plVar4[0x45];
              (pFVar23->MinimumValue).FloatStorage.Float30_2 = (float)(int)lVar30;
              (pFVar23->MinimumValue).FloatStorage.Float31_2 =
                   (float)(int)((ulonglong)lVar30 >> 0x20);
              (pFVar23->MinimumValue).FloatStorage.Float32_2 = (float)(int)lVar29;
              (pFVar23->MinimumValue).FloatStorage.Float33_2 =
                   (float)(int)((ulonglong)lVar29 >> 0x20);
              *(int *)&(pFVar23->MinimumValue).FloatStorage.bValid = (int)plVar4[0x46];
              uVar7 = *(undefined8 *)((longlong)plVar4 + 0x234);
              uVar8 = *(undefined8 *)((longlong)plVar4 + 0x23c);
              (pFVar23->MaximumValue).FloatStorage.Float00 = (float)(int)uVar7;
              (pFVar23->MaximumValue).FloatStorage.Float01 = (float)(int)((ulonglong)uVar7 >> 0x20);
              (pFVar23->MaximumValue).FloatStorage.Float02 = (float)(int)uVar8;
              (pFVar23->MaximumValue).FloatStorage.Float03 = (float)(int)((ulonglong)uVar8 >> 0x20);
              uVar7 = *(undefined8 *)((longlong)plVar4 + 0x244);
              uVar8 = *(undefined8 *)((longlong)plVar4 + 0x24c);
              (pFVar23->MaximumValue).FloatStorage.Float10 = (float)(int)uVar7;
              (pFVar23->MaximumValue).FloatStorage.Float11 = (float)(int)((ulonglong)uVar7 >> 0x20);
              (pFVar23->MaximumValue).FloatStorage.Float12 = (float)(int)uVar8;
              (pFVar23->MaximumValue).FloatStorage.Float13 = (float)(int)((ulonglong)uVar8 >> 0x20);
              uVar7 = *(undefined8 *)((longlong)plVar4 + 0x254);
              uVar8 = *(undefined8 *)((longlong)plVar4 + 0x25c);
              (pFVar23->MaximumValue).FloatStorage.Float20 = (float)(int)uVar7;
              (pFVar23->MaximumValue).FloatStorage.Float21 = (float)(int)((ulonglong)uVar7 >> 0x20);
              (pFVar23->MaximumValue).FloatStorage.Float22 = (float)(int)uVar8;
              (pFVar23->MaximumValue).FloatStorage.Float23 = (float)(int)((ulonglong)uVar8 >> 0x20);
              uVar7 = *(undefined8 *)((longlong)plVar4 + 0x264);
              uVar8 = *(undefined8 *)((longlong)plVar4 + 0x26c);
              (pFVar23->MaximumValue).FloatStorage.Float30 = (float)(int)uVar7;
              (pFVar23->MaximumValue).FloatStorage.Float31 = (float)(int)((ulonglong)uVar7 >> 0x20);
              (pFVar23->MaximumValue).FloatStorage.Float32 = (float)(int)uVar8;
              (pFVar23->MaximumValue).FloatStorage.Float33 = (float)(int)((ulonglong)uVar8 >> 0x20);
              uVar7 = *(undefined8 *)((longlong)plVar4 + 0x274);
              uVar8 = *(undefined8 *)((longlong)plVar4 + 0x27c);
              (pFVar23->MaximumValue).FloatStorage.Float00_2 = (float)(int)uVar7;
              (pFVar23->MaximumValue).FloatStorage.Float01_2 =
                   (float)(int)((ulonglong)uVar7 >> 0x20);
              (pFVar23->MaximumValue).FloatStorage.Float02_2 = (float)(int)uVar8;
              (pFVar23->MaximumValue).FloatStorage.Float03_2 =
                   (float)(int)((ulonglong)uVar8 >> 0x20);
              uVar7 = *(undefined8 *)((longlong)plVar4 + 0x284);
              uVar8 = *(undefined8 *)((longlong)plVar4 + 0x28c);
              (pFVar23->MaximumValue).FloatStorage.Float10_2 = (float)(int)uVar7;
              (pFVar23->MaximumValue).FloatStorage.Float11_2 =
                   (float)(int)((ulonglong)uVar7 >> 0x20);
              (pFVar23->MaximumValue).FloatStorage.Float12_2 = (float)(int)uVar8;
              (pFVar23->MaximumValue).FloatStorage.Float13_2 =
                   (float)(int)((ulonglong)uVar8 >> 0x20);
              uVar7 = *(undefined8 *)((longlong)plVar4 + 0x294);
              uVar8 = *(undefined8 *)((longlong)plVar4 + 0x29c);
              (pFVar23->MaximumValue).FloatStorage.Float20_2 = (float)(int)uVar7;
              (pFVar23->MaximumValue).FloatStorage.Float21_2 =
                   (float)(int)((ulonglong)uVar7 >> 0x20);
              (pFVar23->MaximumValue).FloatStorage.Float22_2 = (float)(int)uVar8;
              (pFVar23->MaximumValue).FloatStorage.Float23_2 =
                   (float)(int)((ulonglong)uVar8 >> 0x20);
              uVar7 = *(undefined8 *)((longlong)plVar4 + 0x2a4);
              uVar8 = *(undefined8 *)((longlong)plVar4 + 0x2ac);
              (pFVar23->MaximumValue).FloatStorage.Float30_2 = (float)(int)uVar7;
              (pFVar23->MaximumValue).FloatStorage.Float31_2 =
                   (float)(int)((ulonglong)uVar7 >> 0x20);
              (pFVar23->MaximumValue).FloatStorage.Float32_2 = (float)(int)uVar8;
              (pFVar23->MaximumValue).FloatStorage.Float33_2 =
                   (float)(int)((ulonglong)uVar8 >> 0x20);
              *(undefined4 *)&(pFVar23->MaximumValue).FloatStorage.bValid =
                   *(undefined4 *)((longlong)plVar4 + 0x2b4);
              pFVar23->bDrawLimits = *(bool *)((longlong)plVar4 + 0x1ae);
              pFVar23->bGizmoEnabled = SUB81(plVar4[0x57],0);
              pFVar23->bGizmoVisible = *(bool *)((longlong)plVar4 + 0x2b9);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 ((UObject *)plVar4[0x6b] != (UObject *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)plVar4[0x6b]);
              }
              (pFVar23->ControlEnum).field0_0x0 = *(TObjectPtr<UEnum>_u_0 *)(plVar4 + 0x6b);
              uVar12 = (**(code **)(pFVar23->_padding_ + 8))(pFVar23);
              local_36c = CONCAT31(local_36c._1_3_,uVar12);
              uStack_368 = (undefined4)pFVar23->_padding_;
              uStack_364 = (uint)((ulonglong)pFVar23->_padding_ >> 0x20);
              local_3bc.Type = (**(code **)(*plVar4 + 8))(plVar4);
              FVar5 = *(FName *)(plVar4 + 1);
              local_3bc.Name = FVar5;
              uVar14 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
              uVar14 = (uint)local_3bc.Type + (uVar14 + FVar5.Number) * 10;
              iVar13 = TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FRigElementKey>(&local_218,uVar14,&local_3bc);
              if ((iVar13 == -1) ||
                 (lVar30 = (longlong)iVar13 * 0x20 + local_218.Elements._0_8_, lVar30 == 0)) {
                pFVar21 = TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                          ::EmplaceByHash<FRigElementKey>
                                    ((TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                                      *)&local_218,uVar14,&local_3bc);
              }
              else {
                pFVar21 = (FRigElementKey *)(lVar30 + 0xc);
              }
              pFVar21->Type = (char)local_36c;
              *(int3 *)&pFVar21->field_0x1 = (int3)((uint)local_36c >> 8);
              (pFVar21->Name).ComparisonIndex = (FNameEntryId)uStack_368;
              (pFVar21->Name).Number = uStack_364;
              uVar12 = (**(code **)(pFVar23->_padding_ + 8))(pFVar23);
              local_424 = CONCAT31(local_424._1_3_,uVar12);
              uStack_420 = (undefined4)pFVar23->_padding_;
              uStack_41c = (undefined4)((ulonglong)pFVar23->_padding_ >> 0x20);
              if (((*(undefined4 **)__return_storage_ptr__ <= &local_424) &&
                  (&local_424 <
                   *(undefined4 **)__return_storage_ptr__ +
                   (longlong)*(int *)((longlong)__return_storage_ptr__ + 0xc) * 3)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              iVar13 = *(int *)((longlong)__return_storage_ptr__ + 8);
              if (iVar13 == *(int *)((longlong)__return_storage_ptr__ + 0xc)) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&__return_storage_ptr__->AllocatorInstance,
                                    (int *)((longlong)__return_storage_ptr__ + 0xc));
              }
              *(int *)((longlong)__return_storage_ptr__ + 8) = iVar13 + 1;
              lVar30 = *(longlong *)__return_storage_ptr__;
              lVar29 = (longlong)iVar13 * 3;
              *(ulonglong *)(lVar30 + (longlong)iVar13 * 0xc) = CONCAT44(uStack_420,local_424);
              uVar15 = uStack_41c;
              goto LAB_14a321b50;
            }
            if (FVar3 == (FScriptContainerElement)0x8) {
              uVar14 = 0;
              if ((int)uVar36 < (int)local_460) {
                uVar14 = uVar40;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              plVar4 = *(longlong **)&local_468.Data[lVar39 * 0x10].field_0x0;
              uVar15 = (undefined4)plVar4[3];
              FStatsHierarchical::BeginMeasurement("FRigCurveContainer::Add");
              pFVar31 = (pFVar1->Curves).AllocatorInstance.Data;
              local_398 = &___7FRigCurve__6B_;
              local_390 = plVar4[1];
              local_388 = 0xffffffff;
              local_380 = uVar15;
              if (((pFVar31 <= (FScriptContainerElement *)&local_398) &&
                  ((FScriptContainerElement *)&local_398 <
                   pFVar31 + (longlong)(pFVar9->CurveContainer).Curves.ArrayMax * 0x20)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              uVar14 = (pFVar9->CurveContainer).Curves.ArrayNum;
              piVar2 = &(pFVar9->CurveContainer).Curves.ArrayMax;
              if (uVar14 == *piVar2) {
                uVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,(ForAnyElementType *)pFVar1,piVar2);
              }
              (pFVar9->CurveContainer).Curves.ArrayNum = uVar14 + 1;
              pFVar31 = (pFVar1->Curves).AllocatorInstance.Data;
              lVar30 = (longlong)(int)uVar14 * 0x20;
              *(undefined ***)(pFVar31 + lVar30) = &___7FRigElement__6B_;
              *(longlong *)(pFVar31 + lVar30 + 8) = local_390;
              *(undefined4 *)(pFVar31 + lVar30 + 0x10) = local_388;
              *(undefined ***)(pFVar31 + lVar30) = &___7FRigCurve__6B_;
              *(undefined4 *)(pFVar31 + lVar30 + 0x18) = local_380;
              uVar40 = 0;
              if ((int)uVar14 < (pFVar9->CurveContainer).Curves.ArrayNum) {
                uVar40 = ~uVar14 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              pFVar31 = (pFVar1->Curves).AllocatorInstance.Data + lVar30;
              local_398 = &___7FRigElement__6B_;
              FStatsHierarchical::EndMeasurement();
              uVar12 = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
              local_378 = CONCAT31(local_378._1_3_,uVar12);
              uStack_374 = (undefined4)*(longlong *)(pFVar31 + 8);
              uStack_370 = (uint)((ulonglong)*(longlong *)(pFVar31 + 8) >> 0x20);
              local_3c8.Type = (**(code **)(*plVar4 + 8))(plVar4);
              local_3e8 = *(FName *)(plVar4 + 1);
              local_3c8.Name = local_3e8;
              uVar14 = ::GetTypeHash(local_3e8.ComparisonIndex.Value);
              uVar14 = (uVar14 + local_3e8.Number) * 10 + (uint)local_3c8.Type;
              if (local_218.Elements._8_4_ != local_218.Elements._52_4_) {
                FVar27 = (ForElementType<FSetElementId>)&local_218.Hash;
                if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar27 = local_218.Hash.SecondaryData;
                }
                uVar15 = *(int *)((longlong)FVar27 +
                                 (ulonglong)(local_218.HashSize - 1U & uVar14) * 4);
                while (uVar15 != 0xffffffff) {
                  pEVar28 = (ERigElementType *)
                            ((longlong)(int)uVar15 * 0x20 + local_218.Elements._0_8_);
                  if ((*(FName *)(pEVar28 + 4) == local_3c8.Name) && (*pEVar28 == local_3c8.Type)) {
                    if ((uVar15 != 0xffffffff) && (pEVar28 != (ERigElementType *)0x0)) {
                      pFVar21 = (FRigElementKey *)(pEVar28 + 0xc);
                      goto LAB_14a320f56;
                    }
                    break;
                  }
                  uVar15 = *(undefined4 *)(pEVar28 + 0x18);
                }
              }
              pFVar21 = TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                        ::EmplaceByHash<FRigElementKey>
                                  ((TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
                                    *)&local_218,uVar14,&local_3c8);
LAB_14a320f56:
              pFVar21->Type = (char)local_378;
              *(int3 *)&pFVar21->field_0x1 = (int3)((uint)local_378 >> 8);
              (pFVar21->Name).ComparisonIndex = (FNameEntryId)uStack_374;
              (pFVar21->Name).Number = uStack_370;
              uVar12 = (**(code **)(*(longlong *)pFVar31 + 8))(pFVar31);
              local_430 = CONCAT31(local_430._1_3_,uVar12);
              uStack_42c = (undefined4)*(longlong *)(pFVar31 + 8);
              uStack_428 = (undefined4)((ulonglong)*(longlong *)(pFVar31 + 8) >> 0x20);
              if (((*(undefined4 **)__return_storage_ptr__ <= &local_430) &&
                  (&local_430 <
                   *(undefined4 **)__return_storage_ptr__ +
                   (longlong)*(int *)((longlong)__return_storage_ptr__ + 0xc) * 3)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar16;
              }
              iVar13 = *(int *)((longlong)__return_storage_ptr__ + 8);
              if (iVar13 == *(int *)((longlong)__return_storage_ptr__ + 0xc)) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&__return_storage_ptr__->AllocatorInstance,
                                    (int *)((longlong)__return_storage_ptr__ + 0xc));
              }
              *(int *)((longlong)__return_storage_ptr__ + 8) = iVar13 + 1;
              lVar30 = *(longlong *)__return_storage_ptr__;
              lVar29 = (longlong)iVar13 * 3;
              *(ulonglong *)(lVar30 + (longlong)iVar13 * 0xc) = CONCAT44(uStack_42c,local_430);
              uVar15 = uStack_428;
              goto LAB_14a321b50;
            }
            bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4627597970315935958>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyContainer.cpp"
                                ,0xd6,"false");
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar16;
            }
          }
          uVar36 = uVar36 + 1;
          lVar39 = lVar39 + 1;
        } while ((int)uVar36 < (local_450->Types).ArrayNum);
      }
    }
LAB_14a321b80:
    DestructItems<TSharedPtr<FRigElement,1>,int>
              ((TSharedPtr<FRigElement,1> *)local_468.Data,(int)local_460);
    if ((TSharedPtr<FRigElement,1> *)local_468.Data != (TSharedPtr<FRigElement,1> *)0x0) {
      FMemory::Free(local_468.Data);
    }
    FOutputDevice::~FOutputDevice(&local_3e0);
    local_218.HashSize = 0;
    if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_218.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_218.Elements);
  }
  return __return_storage_ptr__;
}

