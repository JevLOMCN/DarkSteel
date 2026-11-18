// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// Add @ 147d824d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FISMComponentBatcher::Add(FISMComponentBatcher *this,UActorComponent *param_1)

{
  TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_>_u_0 local_28;
  TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>_u_0
  local_18;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  AddInternal(this,param_1,
              (TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>
               *)&local_18.TypedValue,
              (TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_> *)
              &local_28.TypedValue);
  return;
}

// Add @ 147d82510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FISMComponentBatcher::Add
          (FISMComponentBatcher *this,UActorComponent *param_1,
          TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_>_u_0 local_28;
  TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>_u_0
  local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  if (local_18._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AddInternal(this,param_1,
              (TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>
               *)&local_18.TypedValue,
              (TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_> *)
              &local_28.TypedValue);
  return;
}

// Add @ 147d82590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FISMComponentBatcher::Add
          (FISMComponentBatcher *this,UActorComponent *param_1,
          TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>
          *param_2,TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_>_u_0 local_28;
  TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>_u_0
  local_18;
  
  local_28._0_8_ = *(undefined8 *)param_3;
  local_28._8_8_ = *(undefined8 *)&param_3->field_0x8;
  if (local_28._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  if (local_18._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AddInternal(this,param_1,
              (TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>
               *)&local_18.TypedValue,
              (TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_> *)
              &local_28.TypedValue);
  return;
}

// Add @ 147d82650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FISMComponentBatcher::Add
          (FISMComponentBatcher *this,UActorComponent *param_1,
          TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_>_u_0 local_28;
  TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>_u_0
  local_18;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  if (local_28._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  AddInternal(this,param_1,
              (TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>
               *)&local_18.TypedValue,
              (TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_> *)
              &local_28.TypedValue);
  return;
}

// AddInternal @ 147d830d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMComponentBatcher::AddInternal
          (FISMComponentBatcher *this,UActorComponent *param_1,
          TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>
          *param_2,TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_> *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  UStaticMesh *pUVar7;
  TTransform<double> *pTVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  UClass *pUVar16;
  TBoxSphereBounds<double,double> *pTVar17;
  TMatrix<double> *pTVar18;
  uint uVar19;
  UInstancedSkinnedMeshComponent *pUVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar24;
  UInstancedSkinnedMeshComponent *pUVar25;
  longlong lVar26;
  UInstancedSkinnedMeshComponent *pUVar27;
  longlong lVar28;
  UInstancedSkinnedMeshComponent *pUVar29;
  FPrimitiveInstanceId FVar30;
  undefined1 auStackY_698 [32];
  int local_648;
  int local_644;
  ForAnyElementType local_640;
  int local_638 [2];
  UInstancedSkinnedMeshComponent *local_630;
  UInstancedSkinnedMeshComponent *local_628;
  uint local_620;
  uint local_61c;
  int local_618;
  undefined4 uStack_614;
  int local_610;
  TOptional<TFunctionRef<bool___cdecl(UE::Math::TBox<double>_const_&)>_> *local_608;
  TOptional<TFunctionRef<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&)>_>
  *local_600;
  FScriptContainerElement *local_5f8;
  int iStack_5f0;
  undefined4 uStack_5ec;
  TArrayView<float,int> local_5e8;
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8;
  undefined7 uStack_5a7;
  double local_5a0;
  double dStack_598;
  double local_590;
  double dStack_588;
  double local_580;
  double dStack_578;
  undefined1 local_570;
  uint7 uStack_56f;
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538;
  undefined7 uStack_537;
  double local_530;
  double dStack_528;
  double local_520;
  double dStack_518;
  double local_510;
  double dStack_508;
  undefined1 local_500;
  uint7 uStack_4ff;
  TBoxSphereBounds<double,double> local_4f8;
  TBoxSphereBounds<double,double> local_4c0;
  TTransform<double> local_488;
  TTransform<double> local_428;
  TTransform<double> local_3c8;
  undefined1 local_368 [48];
  longlong local_338;
  undefined1 local_330 [48];
  longlong local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  TBox<double> local_1d8;
  TBox<double> local_1a0;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_610 = this->NumInstances;
  pUVar27 = (UInstancedSkinnedMeshComponent *)0x0;
  this->Hash = 0;
  local_644 = 0;
  local_648 = 0;
  local_630 = (UInstancedSkinnedMeshComponent *)param_1;
  local_608 = param_3;
  local_600 = param_2;
  if (param_1 == (UActorComponent *)0x0) {
LAB_147d8316c:
    if (param_1 != (UActorComponent *)0x0) {
      pUVar16 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar14 = (int)pUVar16->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar16->_padding_)) {
        pUVar16 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
        iVar14 = (int)pUVar16->_padding_;
        if ((iVar14 <= *(int *)(param_1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
            &pUVar16->_padding_)) {
          local_644 = (int)param_1[0xc].PrimaryComponentTick._padding_;
          local_648 = UInstancedSkinnedMeshComponent::GetInstanceCount
                                ((UInstancedSkinnedMeshComponent *)param_1);
        }
      }
      else {
        local_644 = param_1[3].UCSSerializationIndex;
        local_648 = 1;
      }
    }
  }
  else {
    pUVar16 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    iVar14 = (int)pUVar16->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar16->_padding_)) goto LAB_147d8316c;
    local_644 = (int)param_1[9]._padding_;
    local_648 = UInstancedStaticMeshComponent::GetInstanceCount
                          ((UInstancedStaticMeshComponent *)param_1);
  }
  uVar13 = 0;
  if (this->NumCustomDataFloats < local_644) {
    local_640.Data = (FScriptContainerElement *)0x0;
    local_638[0] = 0;
    local_638[1] = 0;
    iVar21 = local_644 * this->NumInstances;
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar21,&local_640,local_638,local_638 + 1);
    memset(local_640.Data + (longlong)iVar14 * 4,0,(longlong)iVar21 << 2);
    local_620 = 0;
    if (0 < this->NumInstances) {
      local_61c = 0;
      pUVar20 = pUVar27;
      pUVar29 = pUVar27;
      pUVar25 = pUVar27;
      do {
        uVar19 = (uint)pUVar20;
        iVar14 = this->NumCustomDataFloats * (uint)pUVar29;
        uVar22 = (uint)pUVar29;
        uVar23 = uVar19;
        if (0 < this->NumCustomDataFloats) {
          lVar26 = (longlong)iVar14;
          lVar28 = (longlong)(int)uVar19 * 4;
          local_628 = (UInstancedSkinnedMeshComponent *)CONCAT44(local_628._4_4_,iVar14 - uVar19);
          iVar21 = iVar14 - uVar19;
          do {
            uVar10 = (uint)pUVar20;
            uVar22 = 0;
            if (iVar14 < (this->InstancesCustomData).ArrayNum) {
              uVar22 = ~(iVar21 + uVar10) >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar3 = *(undefined4 *)
                     ((this->InstancesCustomData).AllocatorInstance.Data +
                     lVar28 + (lVar26 - (int)uVar19) * 4);
            uVar22 = uVar13;
            if ((int)uVar10 < local_638[0]) {
              uVar22 = ~uVar10 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pUVar20 = (UInstancedSkinnedMeshComponent *)(ulonglong)(uVar10 + 1);
            *(undefined4 *)(local_640.Data + lVar28) = uVar3;
            lVar28 = lVar28 + 4;
            iVar14 = iVar14 + 1;
            iVar21 = (int)local_628;
            uVar22 = local_620;
            uVar23 = local_61c;
          } while ((int)((int)pUVar25 + uVar10 + 1) < this->NumCustomDataFloats);
        }
        local_620 = uVar22 + 1;
        pUVar29 = (UInstancedSkinnedMeshComponent *)(ulonglong)local_620;
        local_61c = uVar23 + local_644;
        pUVar20 = (UInstancedSkinnedMeshComponent *)(ulonglong)local_61c;
        pUVar25 = (UInstancedSkinnedMeshComponent *)(ulonglong)(uint)((int)pUVar25 - local_644);
        param_3 = local_608;
        param_2 = local_600;
        param_1 = (UActorComponent *)local_630;
      } while ((int)local_620 < this->NumInstances);
    }
    pTVar1 = &this->InstancesCustomData;
    if (pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_640) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = local_640.Data;
      (this->InstancesCustomData).ArrayNum = local_638[0];
      (this->InstancesCustomData).ArrayMax = local_638[1];
      local_638[0] = 0;
      local_638[1] = 0;
      local_640.Data = (FScriptContainerElement *)0x0;
    }
    this->NumCustomDataFloats = local_644;
    if (local_640.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.Data);
    }
  }
  uVar22 = this->NumInstances + local_648;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if ((this->InstancesTransformsWS).ArrayMax < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar22,&(this->InstancesTransformsWS).AllocatorInstance,
               (this->InstancesTransformsWS).ArrayNum,&(this->InstancesTransformsWS).ArrayMax);
  }
  uVar22 = uVar22 * this->NumCustomDataFloats;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if ((this->InstancesCustomData).ArrayMax < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar22,&(this->InstancesCustomData).AllocatorInstance,
               (this->InstancesCustomData).ArrayNum,&(this->InstancesCustomData).ArrayMax);
  }
  if ((UInstancedSkinnedMeshComponent *)param_1 == (UInstancedSkinnedMeshComponent *)0x0) {
LAB_147d83490:
    pUVar20 = pUVar27;
  }
  else {
    pUVar16 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    iVar14 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&((UInstancedSkinnedMeshComponent *)param_1)->field_0x10 + 0x38) <
         iVar14) ||
       (pUVar20 = (UInstancedSkinnedMeshComponent *)param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&((UInstancedSkinnedMeshComponent *)param_1)->field_0x10 + 0x30)
        + (longlong)iVar14 * 8) != &pUVar16->_padding_)) goto LAB_147d83490;
  }
  if (pUVar20 == (UInstancedSkinnedMeshComponent *)0x0) {
    if ((UInstancedSkinnedMeshComponent *)param_1 == (UInstancedSkinnedMeshComponent *)0x0) {
LAB_147d83b8f:
      pUVar20 = pUVar27;
    }
    else {
      pUVar16 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar14 = (int)pUVar16->_padding_;
      if ((*(int *)(*(longlong *)&((UInstancedSkinnedMeshComponent *)param_1)->field_0x10 + 0x38) <
           iVar14) ||
         (pUVar20 = (UInstancedSkinnedMeshComponent *)param_1,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)
            (*(longlong *)&((UInstancedSkinnedMeshComponent *)param_1)->field_0x10 + 0x30) +
          (longlong)iVar14 * 8) != &pUVar16->_padding_)) goto LAB_147d83b8f;
    }
    if (pUVar20 == (UInstancedSkinnedMeshComponent *)0x0) {
      if ((UInstancedSkinnedMeshComponent *)param_1 != (UInstancedSkinnedMeshComponent *)0x0) {
        pUVar16 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
        iVar14 = (int)pUVar16->_padding_;
        if (((iVar14 <= *(int *)(*(longlong *)
                                  &((UInstancedSkinnedMeshComponent *)param_1)->field_0x10 + 0x38))
            && ((longlong *)
                *(undefined1 **)
                 (*(longlong *)
                   (*(longlong *)&((UInstancedSkinnedMeshComponent *)param_1)->field_0x10 + 0x30) +
                 (longlong)iVar14 * 8) == &pUVar16->_padding_)) &&
           (iVar14 = UInstancedSkinnedMeshComponent::GetInstanceCount
                               ((UInstancedSkinnedMeshComponent *)param_1), 0 < iVar14)) {
          do {
            this->NumInstances = this->NumInstances + 1;
            FVar30.Id = (int)pUVar27;
            local_3c8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_3c8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_3c8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_3c8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_3c8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_3c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_3c8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_3c8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_3c8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_3c8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_3c8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_3c8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_3c8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_3c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_3c8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_3c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_3c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_3c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            bVar11 = UInstancedSkinnedMeshComponent::GetInstanceTransform
                               ((UInstancedSkinnedMeshComponent *)param_1,FVar30,&local_3c8,true);
            if (bVar11) {
              if (*(code **)&local_600->field0_0x0 != (code *)0x0) {
                (**(code **)&local_600->field0_0x0)
                          (&local_238,*(undefined8 *)((longlong)&local_600->field0_0x0 + 8),
                           &local_3c8);
                local_3c8.Rotation.XY.m128d_f64[1] = dStack_230;
                local_3c8.Rotation.XY.m128d_f64[0] = local_238;
                local_3c8.Rotation.ZW.m128d_f64[1] = dStack_220;
                local_3c8.Rotation.ZW.m128d_f64[0] = local_228;
                local_3c8.Translation.XY.m128d_f64[1] = dStack_210;
                local_3c8.Translation.XY.m128d_f64[0] = local_218;
                local_3c8.Translation.ZW.m128d_f64[1] = dStack_200;
                local_3c8.Translation.ZW.m128d_f64[0] = local_208;
                local_3c8.Scale3D.XY.m128d_f64[1] = dStack_1f0;
                local_3c8.Scale3D.XY.m128d_f64[0] = local_1f8;
                local_3c8.Scale3D.ZW.m128d_f64[1] = dStack_1e0;
                local_3c8.Scale3D.ZW.m128d_f64[0] = local_1e8;
              }
              pTVar8 = (TTransform<double> *)(this->InstancesTransformsWS).AllocatorInstance.Data;
              if (((pTVar8 <= &local_3c8) &&
                  (&local_3c8 < pTVar8 + (this->InstancesTransformsWS).ArrayMax)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar14 = (this->InstancesTransformsWS).ArrayNum;
              if (iVar14 == (this->InstancesTransformsWS).ArrayMax) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1060,&(this->InstancesTransformsWS).AllocatorInstance,
                                    &(this->InstancesTransformsWS).ArrayMax);
              }
              (this->InstancesTransformsWS).ArrayNum = iVar14 + 1;
              piVar2 = &(this->AnimationIndices).ArrayMax;
              pFVar5 = (this->InstancesTransformsWS).AllocatorInstance.Data;
              lVar28 = (longlong)iVar14 * 0x60;
              *(double *)(pFVar5 + lVar28) = local_3c8.Rotation.XY.m128d_f64[0];
              *(double *)(pFVar5 + lVar28 + 8) = local_3c8.Rotation.XY.m128d_f64[1];
              *(double *)(pFVar5 + lVar28 + 0x10) = local_3c8.Rotation.ZW.m128d_f64[0];
              *(double *)(pFVar5 + lVar28 + 0x10 + 8) = local_3c8.Rotation.ZW.m128d_f64[1];
              *(double *)(pFVar5 + lVar28 + 0x20) = local_3c8.Translation.XY.m128d_f64[0];
              *(double *)(pFVar5 + lVar28 + 0x20 + 8) = local_3c8.Translation.XY.m128d_f64[1];
              *(double *)(pFVar5 + lVar28 + 0x30) = local_3c8.Translation.ZW.m128d_f64[0];
              *(double *)(pFVar5 + lVar28 + 0x30 + 8) = local_3c8.Translation.ZW.m128d_f64[1];
              *(double *)(pFVar5 + lVar28 + 0x40) = local_3c8.Scale3D.XY.m128d_f64[0];
              *(double *)(pFVar5 + lVar28 + 0x40 + 8) = local_3c8.Scale3D.XY.m128d_f64[1];
              *(double *)(pFVar5 + lVar28 + 0x50) = local_3c8.Scale3D.ZW.m128d_f64[0];
              *(double *)(pFVar5 + lVar28 + 0x50 + 8) = local_3c8.Scale3D.ZW.m128d_f64[1];
              iVar14 = (this->AnimationIndices).ArrayNum;
              if (iVar14 == *piVar2) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&(this->AnimationIndices).AllocatorInstance,piVar2);
              }
              (this->AnimationIndices).ArrayNum = iVar14 + 1;
              pFVar5 = (this->AnimationIndices).AllocatorInstance.Data + (longlong)iVar14 * 4;
              *(int *)pFVar5 = 0;
              UInstancedSkinnedMeshComponent::GetInstanceAnimationIndex
                        ((UInstancedSkinnedMeshComponent *)param_1,FVar30,(int *)pFVar5);
              iVar14 = this->NumCustomDataFloats;
              if (0 < iVar14) {
                iVar21 = (this->InstancesCustomData).ArrayNum;
                iVar15 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (4,4,iVar14,&(this->InstancesCustomData).AllocatorInstance,
                                    &(this->InstancesCustomData).ArrayNum,
                                    &(this->InstancesCustomData).ArrayMax);
                memset((this->InstancesCustomData).AllocatorInstance.Data + (longlong)iVar15 * 4,0,
                       (longlong)iVar14 << 2);
                param_1 = (UActorComponent *)local_630;
                if (0 < local_630->NumCustomDataFloats) {
                  local_5f8 = (this->InstancesCustomData).AllocatorInstance.Data +
                              (longlong)iVar21 * 4;
                  iStack_5f0 = this->NumCustomDataFloats;
                  if ((iStack_5f0 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ArrayNum >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xfe,L""), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  param_1 = (UActorComponent *)local_630;
                  local_5e8._12_4_ = uStack_5ec;
                  local_5e8.ArrayNum = iStack_5f0;
                  local_5e8.DataPtr = (float *)local_5f8;
                  UInstancedSkinnedMeshComponent::GetCustomData(local_630,FVar30,&local_5e8);
                }
              }
            }
            pUVar27 = (UInstancedSkinnedMeshComponent *)(ulonglong)(FVar30.Id + 1U);
            iVar14 = UInstancedSkinnedMeshComponent::GetInstanceCount
                               ((UInstancedSkinnedMeshComponent *)param_1);
          } while ((int)(FVar30.Id + 1U) < iVar14);
        }
      }
      goto LAB_147d83af9;
    }
    pUVar6 = *(UObject **)&pUVar20->field_0x5a0;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 == (UObject *)0x0) goto LAB_147d83c49;
LAB_147d83bcc:
      pUVar7 = *(UStaticMesh **)&pUVar20->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pTVar17 = UStaticMesh::GetBounds(pUVar7,&local_4c0);
      local_538 = 1;
      dVar4 = (pTVar17->Origin).field0_0x0._s_0.X;
      dStack_528 = (pTVar17->Origin).field0_0x0._s_0.Y - (pTVar17->BoxExtent).field0_0x0._s_0.Y;
      local_530 = dVar4 - (pTVar17->BoxExtent).field0_0x0._s_0.X;
      local_520 = (pTVar17->Origin).field0_0x0._s_0.Z - (pTVar17->BoxExtent).field0_0x0._s_0.Z;
      dStack_518 = dVar4 + (pTVar17->BoxExtent).field0_0x0._s_0.X;
      local_510 = (pTVar17->Origin).field0_0x0._s_0.Y + (pTVar17->BoxExtent).field0_0x0._s_0.Y;
      dStack_508 = (pTVar17->Origin).field0_0x0._s_0.Z + (pTVar17->BoxExtent).field0_0x0._s_0.Z;
      local_300 = CONCAT71(uStack_537,1);
      local_558._8_4_ = SUB84(dStack_518,0);
      local_558._0_8_ = local_520;
      local_558._12_4_ = (int)((ulonglong)dStack_518 >> 0x20);
      local_548._8_4_ = SUB84(dStack_508,0);
      local_548._0_8_ = local_510;
      local_548._12_4_ = (int)((ulonglong)dStack_508 >> 0x20);
      local_568._8_4_ = SUB84(dStack_528,0);
      local_568._0_8_ = local_530;
      local_568._12_4_ = (int)((ulonglong)dStack_528 >> 0x20);
    }
    else {
      if (pUVar6 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar6);
        goto LAB_147d83bcc;
      }
LAB_147d83c49:
      local_500 = 0;
      local_300 = (ulonglong)uStack_4ff << 8;
    }
    local_330._8_4_ = SUB84(dStack_528,0);
    local_330._0_8_ = local_530;
    local_330._12_4_ = (int)((ulonglong)dStack_528 >> 0x20);
    local_428.Rotation.XY.m128d_f64[0] = *(double *)&pUVar20->field_0x1f0;
    local_428.Rotation.XY.m128d_f64[1] = *(double *)&pUVar20->field_0x1f8;
    local_428.Translation.XY.m128d_f64[0] = *(double *)&pUVar20->field_0x210;
    local_428.Translation.XY.m128d_f64[1] = *(double *)&pUVar20->field_0x218;
    local_428.Scale3D.XY.m128d_f64[0] = *(double *)&pUVar20->field_0x230;
    local_428.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar20->field_0x238;
    local_330._24_4_ = SUB84(dStack_518,0);
    local_330._16_8_ = local_520;
    local_330._28_4_ = (int)((ulonglong)dStack_518 >> 0x20);
    local_428.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar20->field_0x200;
    local_428.Rotation.ZW.m128d_f64[1] = *(double *)&pUVar20->field_0x208;
    local_428.Translation.ZW.m128d_f64[0] = *(double *)&pUVar20->field_0x220;
    local_428.Translation.ZW.m128d_f64[1] = *(double *)&pUVar20->field_0x228;
    local_428.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar20->field_0x240;
    local_428.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar20->field_0x248;
    local_330._40_4_ = SUB84(dStack_508,0);
    local_330._32_8_ = local_510;
    local_330._44_4_ = (int)((ulonglong)dStack_508 >> 0x20);
    if (*(code **)&param_2->field0_0x0 != (code *)0x0) {
      (**(code **)&param_2->field0_0x0)
                (&local_298,*(undefined8 *)((longlong)&param_2->field0_0x0 + 8),&local_428);
      local_428.Rotation.XY.m128d_f64[0] = local_298;
      local_428.Rotation.XY.m128d_f64[1] = dStack_290;
      local_428.Rotation.ZW.m128d_f64[0] = local_288;
      local_428.Rotation.ZW.m128d_f64[1] = dStack_280;
      local_428.Translation.XY.m128d_f64[0] = local_278;
      local_428.Translation.XY.m128d_f64[1] = dStack_270;
      local_428.Translation.ZW.m128d_f64[0] = local_268;
      local_428.Translation.ZW.m128d_f64[1] = dStack_260;
      local_428.Scale3D.XY.m128d_f64[0] = local_258;
      local_428.Scale3D.XY.m128d_f64[1] = dStack_250;
      local_428.Scale3D.ZW.m128d_f64[0] = local_248;
      local_428.Scale3D.ZW.m128d_f64[1] = dStack_240;
    }
    if (*(longlong *)&param_3->field0_0x0 != 0) {
      pTVar18 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_428,&local_e8);
      UE::Math::TBox<double>::TransformBy((TBox<double> *)local_330,&local_1a0,pTVar18);
      cVar12 = (**(code **)&param_3->field0_0x0)
                         (*(undefined8 *)((longlong)&param_3->field0_0x0 + 8),&local_1a0);
      if (cVar12 == '\0') {
        return;
      }
    }
    this->NumInstances = this->NumInstances + 1;
    pTVar8 = (TTransform<double> *)(this->InstancesTransformsWS).AllocatorInstance.Data;
    if (((pTVar8 <= &local_428) && (&local_428 < pTVar8 + (this->InstancesTransformsWS).ArrayMax))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->InstancesTransformsWS).ArrayNum;
    if (iVar14 == (this->InstancesTransformsWS).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&(this->InstancesTransformsWS).AllocatorInstance,
                          &(this->InstancesTransformsWS).ArrayMax);
    }
    (this->InstancesTransformsWS).ArrayNum = iVar14 + 1;
    pTVar1 = &this->InstancesCustomData;
    pFVar5 = (this->InstancesTransformsWS).AllocatorInstance.Data;
    lVar28 = (longlong)iVar14 * 0x60;
    *(double *)(pFVar5 + lVar28) = local_428.Rotation.XY.m128d_f64[0];
    *(double *)(pFVar5 + lVar28 + 8) = local_428.Rotation.XY.m128d_f64[1];
    *(double *)(pFVar5 + lVar28 + 0x10) = local_428.Rotation.ZW.m128d_f64[0];
    *(double *)(pFVar5 + lVar28 + 0x10 + 8) = local_428.Rotation.ZW.m128d_f64[1];
    *(double *)(pFVar5 + lVar28 + 0x20) = local_428.Translation.XY.m128d_f64[0];
    *(double *)(pFVar5 + lVar28 + 0x20 + 8) = local_428.Translation.XY.m128d_f64[1];
    *(double *)(pFVar5 + lVar28 + 0x30) = local_428.Translation.ZW.m128d_f64[0];
    *(double *)(pFVar5 + lVar28 + 0x30 + 8) = local_428.Translation.ZW.m128d_f64[1];
    *(double *)(pFVar5 + lVar28 + 0x40) = local_428.Scale3D.XY.m128d_f64[0];
    *(double *)(pFVar5 + lVar28 + 0x40 + 8) = local_428.Scale3D.XY.m128d_f64[1];
    *(double *)(pFVar5 + lVar28 + 0x50) = local_428.Scale3D.ZW.m128d_f64[0];
    *(double *)(pFVar5 + lVar28 + 0x50 + 8) = local_428.Scale3D.ZW.m128d_f64[1];
    if ((pTVar1 == (TArray<float,TSizedDefaultAllocator<32>_> *)&pUVar20->field_0x2c8) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (int)*(longlong *)&pUVar20->field_0x2d0;
    if (iVar14 != 0) {
      iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar14,&pTVar1->AllocatorInstance,
                          &(this->InstancesCustomData).ArrayNum,
                          &(this->InstancesCustomData).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 4,*(void **)&pUVar20->field_0x2c8
             ,(longlong)iVar14 << 2);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->InstancesCustomData,
               this->NumCustomDataFloats - (int)*(longlong *)&pUVar20->field_0x2d0);
    param_1 = (UActorComponent *)local_630;
    goto LAB_147d83af9;
  }
  pUVar6 = *(UObject **)&pUVar20->field_0x5a0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UObject *)0x0) goto LAB_147d8354a;
LAB_147d834cd:
    pUVar7 = *(UStaticMesh **)&pUVar20->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pTVar17 = UStaticMesh::GetBounds(pUVar7,&local_4f8);
    local_5a8 = 1;
    dVar4 = (pTVar17->BoxExtent).field0_0x0._s_0.X;
    local_5a0 = (pTVar17->Origin).field0_0x0._s_0.X - dVar4;
    dStack_598 = (pTVar17->Origin).field0_0x0._s_0.Y - (pTVar17->BoxExtent).field0_0x0._s_0.Y;
    local_590 = (pTVar17->Origin).field0_0x0._s_0.Z - (pTVar17->BoxExtent).field0_0x0._s_0.Z;
    dStack_588 = dVar4 + (pTVar17->Origin).field0_0x0._s_0.X;
    local_580 = (pTVar17->Origin).field0_0x0._s_0.Y + (pTVar17->BoxExtent).field0_0x0._s_0.Y;
    dStack_578 = (pTVar17->Origin).field0_0x0._s_0.Z + (pTVar17->BoxExtent).field0_0x0._s_0.Z;
    local_338 = CONCAT71(uStack_5a7,1);
    local_5c8._8_4_ = SUB84(dStack_588,0);
    local_5c8._0_8_ = local_590;
    local_5c8._12_4_ = (int)((ulonglong)dStack_588 >> 0x20);
    local_5b8._8_4_ = SUB84(dStack_578,0);
    local_5b8._0_8_ = local_580;
    local_5b8._12_4_ = (int)((ulonglong)dStack_578 >> 0x20);
    local_5d8._8_4_ = SUB84(dStack_598,0);
    local_5d8._0_8_ = local_5a0;
    local_5d8._12_4_ = (int)((ulonglong)dStack_598 >> 0x20);
  }
  else {
    if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
      goto LAB_147d834cd;
    }
LAB_147d8354a:
    local_570 = 0;
    local_338 = (ulonglong)uStack_56f << 8;
  }
  this->InstancingRandomSeed = *(int *)&pUVar20->field_0x6e4;
  local_368._8_4_ = SUB84(dStack_598,0);
  local_368._0_8_ = local_5a0;
  local_368._12_4_ = (int)((ulonglong)dStack_598 >> 0x20);
  local_368._24_4_ = SUB84(dStack_588,0);
  local_368._16_8_ = local_590;
  local_368._28_4_ = (int)((ulonglong)dStack_588 >> 0x20);
  local_368._40_4_ = SUB84(dStack_578,0);
  local_368._32_8_ = local_580;
  local_368._44_4_ = (int)((ulonglong)dStack_578 >> 0x20);
  if (*(int *)&pUVar20->field_0x700 < 1) {
    pUVar27 = (UInstancedSkinnedMeshComponent *)&DAT_ffffffff;
    pUVar29 = (UInstancedSkinnedMeshComponent *)0xffffffffffffffff;
    iVar14 = -1;
  }
  else {
    if ((*(int *)&pUVar20->field_0x700 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = *(int *)(((TArray<FInstancedStaticMeshRandomSeed,TSizedDefaultAllocator<32>_> *)
                      &pUVar20->field_0x6f8)->AllocatorInstance).Data;
    pUVar29 = pUVar27;
  }
  local_648 = 0;
  local_644 = 0;
  local_628 = pUVar29;
  iVar21 = UInstancedStaticMeshComponent::GetInstanceCount((UInstancedStaticMeshComponent *)pUVar20)
  ;
  param_1 = (UActorComponent *)local_630;
  if (0 < iVar21) {
    do {
      if (local_648 == iVar14) {
        uVar23 = (uint)pUVar27;
        local_618 = local_644;
        uVar22 = uVar13;
        if ((int)uVar23 < *(int *)&pUVar20->field_0x700) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uStack_614 = *(undefined4 *)
                      ((((TArray<FInstancedStaticMeshRandomSeed,TSizedDefaultAllocator<32>_> *)
                        &pUVar20->field_0x6f8)->AllocatorInstance).Data + (longlong)pUVar29 * 8 + 4)
        ;
        pFVar5 = (this->AdditionalRandomSeeds).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_618) &&
            ((FScriptContainerElement *)&local_618 <
             pFVar5 + (longlong)(this->AdditionalRandomSeeds).ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->AdditionalRandomSeeds).ArrayNum;
        piVar2 = &(this->AdditionalRandomSeeds).ArrayMax;
        if (iVar14 == *piVar2) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&(this->AdditionalRandomSeeds).AllocatorInstance,piVar2);
        }
        (this->AdditionalRandomSeeds).ArrayNum = iVar14 + 1;
        *(ulonglong *)((this->AdditionalRandomSeeds).AllocatorInstance.Data + (longlong)iVar14 * 8)
             = CONCAT44(uStack_614,local_618);
        iVar14 = uVar23 + 1;
        pUVar27 = (UInstancedSkinnedMeshComponent *)(longlong)iVar14;
        if ((iVar14 < 0) || (*(int *)&pUVar20->field_0x700 <= iVar14)) {
          pUVar27 = (UInstancedSkinnedMeshComponent *)&DAT_ffffffff;
          pUVar29 = (UInstancedSkinnedMeshComponent *)0xffffffffffffffff;
          local_628 = (UInstancedSkinnedMeshComponent *)0xffffffffffffffff;
          iVar14 = -1;
        }
        else {
          pUVar29 = (UInstancedSkinnedMeshComponent *)&pUVar29->field_0x1;
          local_628 = pUVar29;
          if ((*(int *)&pUVar20->field_0x700 <= iVar14) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar14 = *(int *)((((TArray<FInstancedStaticMeshRandomSeed,TSizedDefaultAllocator<32>_> *)
                             &pUVar20->field_0x6f8)->AllocatorInstance).Data + (longlong)pUVar29 * 8
                           );
        }
      }
      pTVar24 = &this->InstancesTransformsWS;
      local_488.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_488.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_488.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_488.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_488.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_488.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_488.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_488.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_488.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_488.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_488.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_488.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_488.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_488.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_488.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_488.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_488.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_488.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      bVar11 = UInstancedStaticMeshComponent::GetInstanceTransform
                         ((UInstancedStaticMeshComponent *)pUVar20,local_648,&local_488,true);
      if (bVar11) {
        if (*(code **)&local_600->field0_0x0 != (code *)0x0) {
          (**(code **)&local_600->field0_0x0)
                    (&local_2f8,*(undefined8 *)((longlong)&local_600->field0_0x0 + 8),&local_488);
          local_488.Rotation.XY.m128d_f64[1] = dStack_2f0;
          local_488.Rotation.XY.m128d_f64[0] = local_2f8;
          local_488.Rotation.ZW.m128d_f64[1] = dStack_2e0;
          local_488.Rotation.ZW.m128d_f64[0] = local_2e8;
          local_488.Translation.XY.m128d_f64[1] = dStack_2d0;
          local_488.Translation.XY.m128d_f64[0] = local_2d8;
          local_488.Translation.ZW.m128d_f64[1] = dStack_2c0;
          local_488.Translation.ZW.m128d_f64[0] = local_2c8;
          local_488.Scale3D.XY.m128d_f64[1] = dStack_2b0;
          local_488.Scale3D.XY.m128d_f64[0] = local_2b8;
          local_488.Scale3D.ZW.m128d_f64[1] = dStack_2a0;
          local_488.Scale3D.ZW.m128d_f64[0] = local_2a8;
        }
        if (*(longlong *)&local_608->field0_0x0 != 0) {
          pTVar18 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_488,&local_168);
          UE::Math::TBox<double>::TransformBy((TBox<double> *)local_368,&local_1d8,pTVar18);
          cVar12 = (**(code **)&local_608->field0_0x0)
                             (*(undefined8 *)((longlong)&local_608->field0_0x0 + 8),&local_1d8);
          if (cVar12 == '\0') {
            local_644 = local_644 + -1;
            goto LAB_147d83ad2;
          }
        }
        this->NumInstances = this->NumInstances + 1;
        pTVar8 = (TTransform<double> *)(pTVar24->AllocatorInstance).Data;
        if (((pTVar8 <= &local_488) &&
            (&local_488 < pTVar8 + (this->InstancesTransformsWS).ArrayMax)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar21 = (this->InstancesTransformsWS).ArrayNum;
        if (iVar21 == (this->InstancesTransformsWS).ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&pTVar24->AllocatorInstance,
                              &(this->InstancesTransformsWS).ArrayMax);
        }
        (this->InstancesTransformsWS).ArrayNum = iVar21 + 1;
        pFVar5 = (pTVar24->AllocatorInstance).Data;
        lVar28 = (longlong)iVar21 * 0x60;
        *(double *)(pFVar5 + lVar28) = local_488.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar5 + lVar28 + 8) = local_488.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar5 + lVar28 + 0x10) = local_488.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar5 + lVar28 + 0x10 + 8) = local_488.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar5 + lVar28 + 0x20) = local_488.Translation.XY.m128d_f64[0];
        *(double *)(pFVar5 + lVar28 + 0x20 + 8) = local_488.Translation.XY.m128d_f64[1];
        *(double *)(pFVar5 + lVar28 + 0x30) = local_488.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar5 + lVar28 + 0x30 + 8) = local_488.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar5 + lVar28 + 0x40) = local_488.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar5 + lVar28 + 0x40 + 8) = local_488.Scale3D.XY.m128d_f64[1];
        *(double *)(pFVar5 + lVar28 + 0x50) = local_488.Scale3D.ZW.m128d_f64[0];
        *(double *)(pFVar5 + lVar28 + 0x50 + 8) = local_488.Scale3D.ZW.m128d_f64[1];
        if (0 < this->NumCustomDataFloats) {
          iVar21 = *(int *)&pUVar20->field_0x6e0;
          if (0 < iVar21) {
            uVar23 = iVar21 * local_648;
            uVar22 = uVar13;
            if ((int)uVar23 < *(int *)&pUVar20->field_0x6f0) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar5 = (((TArray<float,TSizedDefaultAllocator<32>_> *)&pUVar20->field_0x6e8)->
                     AllocatorInstance).Data;
            iVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar21,&(this->InstancesCustomData).AllocatorInstance,
                                &(this->InstancesCustomData).ArrayNum,
                                &(this->InstancesCustomData).ArrayMax);
            memcpy((this->InstancesCustomData).AllocatorInstance.Data + (longlong)iVar15 * 4,
                   pFVar5 + (longlong)(int)uVar23 * 4,(longlong)iVar21 << 2);
          }
          iVar15 = this->NumCustomDataFloats - *(int *)&pUVar20->field_0x6e0;
          iVar21 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar15,&(this->InstancesCustomData).AllocatorInstance,
                              &(this->InstancesCustomData).ArrayNum,
                              &(this->InstancesCustomData).ArrayMax);
          memset((this->InstancesCustomData).AllocatorInstance.Data + (longlong)iVar21 * 4,0,
                 (longlong)iVar15 << 2);
          pUVar29 = local_628;
        }
      }
LAB_147d83ad2:
      local_644 = local_644 + 1;
      local_648 = local_648 + 1;
      iVar21 = UInstancedStaticMeshComponent::GetInstanceCount
                         ((UInstancedStaticMeshComponent *)pUVar20);
      param_1 = (UActorComponent *)local_630;
    } while (local_648 < iVar21);
  }
LAB_147d83af9:
  iVar14 = local_610;
  iVar21 = this->NumInstances - local_610;
  if ((this->bBuildMappingInfo != false) && (iVar21 != 0)) {
    iVar15 = (this->ComponentsToInstancesMap).ArrayNum;
    piVar2 = &(this->ComponentsToInstancesMap).ArrayMax;
    if (iVar15 == *piVar2) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->ComponentsToInstancesMap).AllocatorInstance,piVar2);
    }
    (this->ComponentsToInstancesMap).ArrayNum = iVar15 + 1;
    lVar28 = (longlong)iVar15;
    pFVar5 = (this->ComponentsToInstancesMap).AllocatorInstance.Data;
    *(UActorComponent **)(pFVar5 + lVar28 * 0x10) = param_1;
    *(int *)(pFVar5 + lVar28 * 0x10 + 8) = iVar14;
    *(int *)(pFVar5 + lVar28 * 0x10 + 0xc) = iVar21;
  }
  return;
}

// ComputeHash @ 147d8f8e0

void __thiscall FISMComponentBatcher::ComputeHash(FISMComponentBatcher *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TTransform<double> *pTVar6;
  TTransform<double> *pTVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  FArchiveCrc32 local_b8;
  
  iVar2 = (this->InstancesTransformsWS).ArrayNum;
  uVar4 = 0;
  pTVar6 = (TTransform<double> *)(this->InstancesTransformsWS).AllocatorInstance.Data;
  pTVar7 = pTVar6 + iVar2;
  while( true ) {
    if ((this->InstancesTransformsWS).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pTVar6 == pTVar7) break;
    uVar3 = TransformUtilities::GetRoundedTransformCRC32(pTVar6);
    uVar8 = uVar3 - uVar4 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
    uVar5 = (uVar4 - uVar3) - uVar8 ^ uVar3 >> 0xd;
    uVar8 = (uVar8 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar4 = (uVar3 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar3 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 5;
    uVar5 = (uVar8 - uVar3) - uVar4 ^ uVar3 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 10;
    uVar4 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xf;
    pTVar6 = pTVar6 + 1;
  }
  FArchiveCrc32::FArchiveCrc32(&local_b8,uVar4,(UObject *)0x0);
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_b8,&this->InstancesCustomData);
  piVar1 = &this->InstancingRandomSeed;
  if (*(int **)(local_b8._padding_ + 8) < *(int **)local_b8._padding_ + 1) {
    if ((local_b8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_b8._padding_ + 0x188))(&local_b8,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b8,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = **(int **)local_b8._padding_;
    *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<FInstancedStaticMeshRandomSeed,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_b8,&this->AdditionalRandomSeeds);
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_b8,&this->AnimationIndices);
  this->Hash = local_b8.CRC;
  FArchive::~FArchive((FArchive *)&local_b8);
  return;
}

// GetComponentsToInstancesMap @ 147da4ba0

TArray<FISMComponentBatcher::FComponentToInstancesMapping,TSizedDefaultAllocator<32>_> * __thiscall
FISMComponentBatcher::GetComponentsToInstancesMap
          (FISMComponentBatcher *this,
          TArray<FISMComponentBatcher::FComponentToInstancesMapping,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data =
       (this->ComponentsToInstancesMap).AllocatorInstance.Data;
  (this->ComponentsToInstancesMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (this->ComponentsToInstancesMap).ArrayNum;
  __return_storage_ptr__->ArrayMax = (this->ComponentsToInstancesMap).ArrayMax;
  (this->ComponentsToInstancesMap).ArrayNum = 0;
  (this->ComponentsToInstancesMap).ArrayMax = 0;
  return __return_storage_ptr__;
}

// InitComponent @ 147dab600

void __thiscall
FISMComponentBatcher::InitComponent
          (FISMComponentBatcher *this,UInstancedSkinnedMeshComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FPrimitiveInstanceId FVar6;
  undefined4 uStack_2c;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> local_28;
  TArrayView<float_const_,int> local_18;
  
  UInstancedSkinnedMeshComponent::SetNumCustomDataFloats(param_1,this->NumCustomDataFloats);
  UInstancedSkinnedMeshComponent::AddInstances
            (param_1,&local_28,&this->InstancesTransformsWS,&this->AnimationIndices,false,true);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (this->NumCustomDataFloats != 0) {
    FVar6.Id = 0;
    iVar4 = UInstancedSkinnedMeshComponent::GetInstanceCount(param_1);
    if (0 < iVar4) {
      do {
        iVar4 = this->NumCustomDataFloats;
        uVar5 = 0;
        if (FVar6.Id < (this->InstancesCustomData).ArrayNum) {
          uVar5 = (uint)~FVar6.Id >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->InstancesCustomData).AllocatorInstance.Data;
        if ((iVar4 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_18._12_4_ = uStack_2c;
        local_18.ArrayNum = iVar4;
        local_18.DataPtr = (float *)(pFVar1 + (longlong)FVar6.Id * 4);
        UInstancedSkinnedMeshComponent::SetCustomData(param_1,FVar6,&local_18);
        FVar6.Id = FVar6.Id + 1;
        iVar4 = UInstancedSkinnedMeshComponent::GetInstanceCount(param_1);
      } while (FVar6.Id < iVar4);
    }
  }
  return;
}

// InitComponent @ 147dab750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMComponentBatcher::InitComponent
          (FISMComponentBatcher *this,UInstancedStaticMeshComponent *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TArray<FInstancedStaticMeshRandomSeed,TSizedDefaultAllocator<32>_> *pTVar3;
  void *local_18 [2];
  
  param_1->NumCustomDataFloats = this->NumCustomDataFloats;
  (**(code **)(param_1->_padding_ + 3000))(param_1,local_18,&this->InstancesTransformsWS,0,1,1);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->PerInstanceSMCustomData,&this->InstancesCustomData);
  param_1->InstancingRandomSeed = this->InstancingRandomSeed;
  pTVar3 = &param_1->AdditionalRandomSeeds;
  if (pTVar3 != &this->AdditionalRandomSeeds) {
    iVar2 = (this->AdditionalRandomSeeds).ArrayNum;
    piVar1 = &(param_1->AdditionalRandomSeeds).ArrayMax;
    _Src = (this->AdditionalRandomSeeds).AllocatorInstance.Data;
    (param_1->AdditionalRandomSeeds).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,*piVar1,&pTVar3->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
    }
  }
  return;
}

