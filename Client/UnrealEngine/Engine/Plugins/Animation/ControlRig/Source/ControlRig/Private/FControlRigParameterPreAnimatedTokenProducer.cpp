// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// ~FControlRigParameterPreAnimatedTokenProducer @ 14a3bc840

void __thiscall
FControlRigParameterPreAnimatedTokenProducer::~FControlRigParameterPreAnimatedTokenProducer
          (FControlRigParameterPreAnimatedTokenProducer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TransformValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vector2DValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IntegerValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoolValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpaceValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  return;
}

// CacheExistingState @ 14a3ee410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FControlRigParameterPreAnimatedTokenProducer::CacheExistingState
          (FControlRigParameterPreAnimatedTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined8 *puVar1;
  FName *pFVar2;
  undefined8 uVar3;
  int iVar4;
  FRigControlElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  IControlRigObjectBinding *pIVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  UClass *pUVar17;
  FRigControlValue *pFVar18;
  longlong lVar19;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar20;
  UControlRigComponent *this_00;
  UControlRig *pUVar21;
  UWorld *pUVar22;
  USkeletalMeshComponent *this_01;
  ulonglong uVar23;
  undefined8 *puVar24;
  FName *pFVar25;
  FName *pFVar26;
  FName *pFVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_b38 [32];
  undefined8 *local_b18;
  FScriptContainerElement *local_b10;
  longlong local_b08;
  longlong local_b00;
  undefined8 local_af8;
  undefined1 local_ae8;
  ERigControlValueType local_ae7 [15];
  FToken local_ad8;
  undefined1 local_a38 [4];
  undefined8 local_a34;
  undefined4 local_a2c;
  undefined8 local_a28;
  float local_a20;
  undefined8 local_a1c;
  float local_a14;
  undefined8 local_a10;
  undefined1 uStack_a08;
  undefined2 uStack_a07;
  undefined1 uStack_a05;
  undefined1 uStack_a04;
  undefined2 uStack_a03;
  undefined1 uStack_a01;
  undefined4 local_a00;
  undefined4 uStack_9fc;
  undefined8 local_9f8;
  undefined1 uStack_9f0;
  undefined2 uStack_9ef;
  undefined1 uStack_9ed;
  undefined1 uStack_9ec;
  undefined2 uStack_9eb;
  undefined1 uStack_9e9;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined8 local_9e0;
  undefined1 uStack_9d8;
  undefined2 uStack_9d7;
  undefined1 uStack_9d5;
  undefined1 uStack_9d4;
  undefined2 uStack_9d3;
  undefined1 uStack_9d1;
  undefined4 local_9d0;
  undefined4 uStack_9cc;
  undefined2 local_9c7;
  undefined1 local_9c5;
  undefined8 local_9c4;
  undefined4 local_9bc;
  undefined2 local_9b7;
  undefined1 local_9b5;
  undefined8 local_9b4;
  undefined4 local_9ac;
  undefined2 local_9a7;
  undefined1 local_9a5;
  undefined8 local_9a4;
  undefined4 local_99c;
  FName *local_998;
  uint local_990;
  undefined8 local_988;
  undefined8 local_978;
  double dStack_970;
  double local_968;
  undefined8 *local_960;
  int local_958;
  undefined8 local_950;
  double dStack_948;
  double local_940;
  double dStack_938;
  FName *local_930;
  uint local_928;
  undefined8 local_920;
  double dStack_918;
  double dStack_910;
  double dStack_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  double dStack_8b8;
  double dStack_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  undefined8 uStack_890;
  double local_888;
  undefined8 local_880;
  double dStack_878;
  double dStack_870;
  undefined1 auStack_868 [16];
  double local_858;
  double dStack_850;
  undefined1 local_848 [16];
  double local_838;
  TVector<double>_u_0 local_830;
  undefined8 local_818;
  float local_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  TRotator<double> TStack_7f0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  undefined8 local_7b8;
  float local_7b0;
  TVector<double>_u_0 local_7a8;
  TVector<double>_u_0 local_790;
  TVector<double>_u_0 local_778;
  undefined1 local_758 [16];
  double local_748;
  TRotator<double> TStack_740;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  double local_718;
  undefined1 local_708 [32];
  undefined1 local_6e8 [32];
  float local_6c8;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  double local_6a0;
  double dStack_698;
  double local_690;
  double local_688;
  double dStack_680;
  double local_678;
  double local_670;
  double dStack_668;
  double local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_638;
  double dStack_630;
  undefined1 local_628 [16];
  double local_618;
  double dStack_610;
  undefined1 local_608 [16];
  double local_5f8;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  double local_558;
  double dStack_550;
  undefined1 local_548 [16];
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  double local_518;
  double dStack_510;
  undefined1 local_508 [16];
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  FRigControlValue local_4c8;
  FRigControlValue local_444;
  FRigControlValue local_3c0;
  FRigControlValue local_33c;
  FRigControlValue local_2b8;
  FRigControlValue local_234;
  FRigControlValue local_1b0;
  FRigControlValue local_12c;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_b38;
  local_ad8._padding_ =
       (longlong)
       &
       ___7FToken__1__CacheExistingState_FControlRigParameterPreAnimatedTokenProducer__UEBA_AV__TInlineValue_UIMovieScenePreAnimatedToken___0CA__07__AEAVUObject___Z_6B_
  ;
  local_ad8.SequenceID.Value = (this->SequenceID).Value;
  local_ad8.SpaceValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.SpaceValues.ArrayNum = 0;
  local_ad8.SpaceValues.ArrayMax = 0;
  local_ad8.ScalarValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.ScalarValues.ArrayNum = 0;
  local_ad8.ScalarValues.ArrayMax = 0;
  local_ad8.BoolValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.BoolValues.ArrayNum = 0;
  local_ad8.BoolValues.ArrayMax = 0;
  local_ad8.IntegerValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.IntegerValues.ArrayNum = 0;
  local_ad8.IntegerValues.ArrayMax = 0;
  local_ad8.VectorValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.VectorValues.ArrayNum = 0;
  local_ad8.VectorValues.ArrayMax = 0;
  local_ad8.Vector2DValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.Vector2DValues.ArrayNum = 0;
  local_ad8.Vector2DValues.ArrayMax = 0;
  local_ad8.TransformValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.TransformValues.ArrayNum = 0;
  local_ad8.TransformValues.ArrayMax = 0;
  local_ad8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_ad8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayNum = 0;
  local_ad8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayMax = 0;
  if (param_1 == (UObject *)0x0) {
LAB_14a3ee4c2:
    param_1 = (UObject *)(UControlRig *)0x0;
  }
  else {
    pUVar17 = Z_Construct_UClass_UControlRig_NoRegister();
    iVar4 = (int)pUVar17->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar17->_padding_)) goto LAB_14a3ee4c2;
  }
  if ((UControlRig *)param_1 == (UControlRig *)0x0) goto LAB_14a3ef8f3;
  (**(code **)(((UControlRig *)param_1)->_padding_ + 0x3c0))(param_1,&local_960);
  iVar4 = local_958;
  puVar1 = local_960 + local_958;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_568 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  uStack_570 = 0;
  puVar24 = local_960;
  while( true ) {
    if (local_958 != iVar4) {
      local_ae8 = 0;
      `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_ae8);
    }
    if (puVar24 == puVar1) break;
    pFVar5 = (FRigControlElement *)*puVar24;
    switch((pFVar5->Settings).ControlType) {
    case Bool:
      local_ae7[0] = Current;
      pFVar18 = UControlRig::GetControlValue((UControlRig *)param_1,&local_4c8,pFVar5,local_ae7);
      local_a34 = *(undefined8 *)&pFVar5->field_0x14;
      local_a2c = CONCAT31(local_a2c._1_3_,*(undefined1 *)&(pFVar18->FloatStorage).Float00);
      if (local_ad8.BoolValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a34) {
        if ((FScriptContainerElement *)&local_a34 <
            local_ad8.BoolValues.AllocatorInstance.Data +
            (longlong)local_ad8.BoolValues.ArrayMax * 0xc) {
          local_b00 = (longlong)local_ad8.BoolValues.ArrayNum;
          local_af8 = 0xc;
          local_b18 = &local_a34;
          local_b10 = local_ad8.BoolValues.AllocatorInstance.Data;
          local_b08 = (longlong)local_ad8.BoolValues.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
            return pTVar20;
          }
        }
      }
      iVar16 = local_ad8.BoolValues.ArrayNum;
      if (local_ad8.BoolValues.ArrayNum == local_ad8.BoolValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_ad8.BoolValues.AllocatorInstance,
                            &local_ad8.BoolValues.ArrayMax);
      }
      local_ad8.BoolValues.ArrayNum = iVar16 + 1;
      puVar24 = puVar24 + 1;
      *(undefined8 *)(local_ad8.BoolValues.AllocatorInstance.Data + (longlong)iVar16 * 0xc) =
           local_a34;
      *(undefined4 *)(local_ad8.BoolValues.AllocatorInstance.Data + (longlong)iVar16 * 0xc + 8) =
           local_a2c;
      break;
    case Float:
    case ScaleFloat:
      local_ae7[2] = 1;
      pFVar18 = UControlRig::GetControlValue((UControlRig *)param_1,&local_444,pFVar5,local_ae7 + 2)
      ;
      local_a1c = *(undefined8 *)&pFVar5->field_0x14;
      local_a14 = (pFVar18->FloatStorage).Float00;
      if (local_ad8.ScalarValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a1c) {
        if ((FScriptContainerElement *)&local_a1c <
            local_ad8.ScalarValues.AllocatorInstance.Data +
            (longlong)local_ad8.ScalarValues.ArrayMax * 0xc) {
          local_b00 = (longlong)local_ad8.ScalarValues.ArrayNum;
          local_af8 = 0xc;
          local_b18 = &local_a1c;
          local_b10 = local_ad8.ScalarValues.AllocatorInstance.Data;
          local_b08 = (longlong)local_ad8.ScalarValues.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
            return pTVar20;
          }
        }
      }
      iVar16 = local_ad8.ScalarValues.ArrayNum;
      if (local_ad8.ScalarValues.ArrayNum == local_ad8.ScalarValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_ad8.ScalarValues.AllocatorInstance,
                            &local_ad8.ScalarValues.ArrayMax);
      }
      local_ad8.ScalarValues.ArrayNum = iVar16 + 1;
      puVar24 = puVar24 + 1;
      *(undefined8 *)(local_ad8.ScalarValues.AllocatorInstance.Data + (longlong)iVar16 * 0xc) =
           local_a1c;
      *(float *)(local_ad8.ScalarValues.AllocatorInstance.Data + (longlong)iVar16 * 0xc + 8) =
           local_a14;
      break;
    case Integer:
      local_ae7[1] = 1;
      pFVar18 = UControlRig::GetControlValue((UControlRig *)param_1,&local_12c,pFVar5,local_ae7 + 1)
      ;
      local_a28 = *(undefined8 *)&pFVar5->field_0x14;
      local_a20 = (pFVar18->FloatStorage).Float00;
      if (local_ad8.IntegerValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a28) {
        if ((FScriptContainerElement *)&local_a28 <
            local_ad8.IntegerValues.AllocatorInstance.Data +
            (longlong)local_ad8.IntegerValues.ArrayMax * 0xc) {
          local_b00 = (longlong)local_ad8.IntegerValues.ArrayNum;
          local_af8 = 0xc;
          local_b18 = &local_a28;
          local_b10 = local_ad8.IntegerValues.AllocatorInstance.Data;
          local_b08 = (longlong)local_ad8.IntegerValues.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
            return pTVar20;
          }
        }
      }
      iVar16 = local_ad8.IntegerValues.ArrayNum;
      if (local_ad8.IntegerValues.ArrayNum == local_ad8.IntegerValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_ad8.IntegerValues.AllocatorInstance,
                            &local_ad8.IntegerValues.ArrayMax);
      }
      local_ad8.IntegerValues.ArrayNum = iVar16 + 1;
      puVar24 = puVar24 + 1;
      *(undefined8 *)(local_ad8.IntegerValues.AllocatorInstance.Data + (longlong)iVar16 * 0xc) =
           local_a28;
      *(float *)(local_ad8.IntegerValues.AllocatorInstance.Data + (longlong)iVar16 * 0xc + 8) =
           local_a20;
      break;
    case Vector2D:
      local_ae7[3] = 1;
      pFVar18 = UControlRig::GetControlValue((UControlRig *)param_1,&local_3c0,pFVar5,local_ae7 + 3)
      ;
      local_818._0_4_ = (pFVar18->FloatStorage).Float00;
      local_818._4_4_ = (pFVar18->FloatStorage).Float01;
      local_810 = (pFVar18->FloatStorage).Float02;
      dStack_970 = (double)(float)(undefined4)local_818;
      local_978 = *(undefined8 *)&pFVar5->field_0x14;
      local_968 = (double)(float)local_818._4_4_;
      if (local_ad8.Vector2DValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_978)
      {
        if ((FScriptContainerElement *)&local_978 <
            local_ad8.Vector2DValues.AllocatorInstance.Data +
            (longlong)local_ad8.Vector2DValues.ArrayMax * 0x18) {
          local_b00 = (longlong)local_ad8.Vector2DValues.ArrayNum;
          local_af8 = 0x18;
          local_b18 = &local_978;
          local_b10 = local_ad8.Vector2DValues.AllocatorInstance.Data;
          local_b08 = (longlong)local_ad8.Vector2DValues.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
            return pTVar20;
          }
        }
      }
      iVar16 = local_ad8.Vector2DValues.ArrayNum;
      if (local_ad8.Vector2DValues.ArrayNum == local_ad8.Vector2DValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_ad8.Vector2DValues.AllocatorInstance,
                            &local_ad8.Vector2DValues.ArrayMax);
      }
      puVar24 = puVar24 + 1;
      local_ad8.Vector2DValues.ArrayNum = iVar16 + 1;
      *(undefined8 *)(local_ad8.Vector2DValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18) =
           local_978;
      *(double *)(local_ad8.Vector2DValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 8) =
           dStack_970;
      *(double *)(local_ad8.Vector2DValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 0x10)
           = local_968;
      break;
    case Position:
    case Scale:
    case Rotator:
      local_9f8 = *(undefined8 *)&pFVar5->field_0x14;
      uStack_9e4 = *(undefined4 *)&pFVar5->field_0x18;
      uVar3 = *(undefined8 *)&pFVar5->field_0x10;
      uStack_9ef = local_9c7;
      uStack_9ed = local_9c5;
      local_9c4._0_1_ = (undefined1)uVar3;
      uStack_9ec = (undefined1)local_9c4;
      local_9c4._1_2_ = (undefined2)((ulonglong)uVar3 >> 8);
      uStack_9eb = local_9c4._1_2_;
      local_9c4._3_1_ = (undefined1)((ulonglong)uVar3 >> 0x18);
      uStack_9e9 = local_9c4._3_1_;
      local_9e8 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_9f0 = 0;
      local_9c4 = uVar3;
      local_9bc = uStack_9e4;
      if ((local_ad8.SpaceValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_9f8) &&
         ((FScriptContainerElement *)&local_9f8 <
          local_ad8.SpaceValues.AllocatorInstance.Data +
          (longlong)local_ad8.SpaceValues.ArrayMax * 0x18)) {
        local_b00 = (longlong)local_ad8.SpaceValues.ArrayNum;
        local_af8 = 0x18;
        local_b18 = &local_9f8;
        local_b10 = local_ad8.SpaceValues.AllocatorInstance.Data;
        local_b08 = (longlong)local_ad8.SpaceValues.ArrayMax;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
          return pTVar20;
        }
      }
      iVar16 = local_ad8.SpaceValues.ArrayNum;
      if (local_ad8.SpaceValues.ArrayNum == local_ad8.SpaceValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_ad8.SpaceValues.AllocatorInstance,
                            &local_ad8.SpaceValues.ArrayMax);
      }
      local_ae7[4] = 1;
      local_ad8.SpaceValues.ArrayNum = iVar16 + 1;
      *(undefined8 *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18) =
           local_9f8;
      *(ulonglong *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 8) =
           CONCAT17(uStack_9e9,
                    CONCAT25(uStack_9eb,
                             CONCAT14(uStack_9ec,
                                      CONCAT13(uStack_9ed,CONCAT21(uStack_9ef,uStack_9f0)))));
      *(ulonglong *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 0x10)
           = CONCAT44(uStack_9e4,local_9e8);
      pFVar18 = UControlRig::GetControlValue((UControlRig *)param_1,&local_33c,pFVar5,local_ae7 + 4)
      ;
      local_988._0_4_ = (pFVar18->FloatStorage).Float00;
      local_988._4_4_ = (pFVar18->FloatStorage).Float01;
      fVar30 = (pFVar18->FloatStorage).Float02;
      if ((pFVar5->Settings).ControlType == Rotator) {
        UControlRig::GetControlSpecifiedEulerAngle
                  ((UControlRig *)param_1,(TVector<double> *)&local_7a8._s_0,pFVar5,false);
        fVar30 = (float)local_7a8._s_0.Z;
        local_988 = CONCAT44((float)local_7a8._s_0.Y,(float)local_7a8._s_0.X);
        local_7b8 = local_988;
        local_7b0 = fVar30;
      }
      local_950 = *(undefined8 *)&pFVar5->field_0x14;
      dStack_948 = (double)(float)local_988;
      local_940 = (double)local_988._4_4_;
      dStack_938 = (double)fVar30;
      if (local_ad8.VectorValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_950) {
        if ((FScriptContainerElement *)&local_950 <
            local_ad8.VectorValues.AllocatorInstance.Data +
            (longlong)local_ad8.VectorValues.ArrayMax * 0x20) {
          local_b00 = (longlong)local_ad8.VectorValues.ArrayNum;
          local_af8 = 0x20;
          local_b18 = &local_950;
          local_b10 = local_ad8.VectorValues.AllocatorInstance.Data;
          local_b08 = (longlong)local_ad8.VectorValues.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
            return pTVar20;
          }
        }
      }
      iVar16 = local_ad8.VectorValues.ArrayNum;
      if (local_ad8.VectorValues.ArrayNum == local_ad8.VectorValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_ad8.VectorValues.AllocatorInstance,
                            &local_ad8.VectorValues.ArrayMax);
      }
      local_ad8.VectorValues.ArrayNum = iVar16 + 1;
      puVar24 = puVar24 + 1;
      *(undefined8 *)(local_ad8.VectorValues.AllocatorInstance.Data + (longlong)iVar16 * 0x20) =
           local_950;
      *(double *)(local_ad8.VectorValues.AllocatorInstance.Data + (longlong)iVar16 * 0x20 + 8) =
           dStack_948;
      *(double *)(local_ad8.VectorValues.AllocatorInstance.Data + (longlong)iVar16 * 0x20 + 0x10) =
           local_940;
      *(double *)
       (local_ad8.VectorValues.AllocatorInstance.Data + (longlong)iVar16 * 0x20 + 0x10 + 8) =
           dStack_938;
      break;
    case Transform:
      local_9e0 = *(undefined8 *)&pFVar5->field_0x14;
      uStack_9cc = *(undefined4 *)&pFVar5->field_0x18;
      uVar3 = *(undefined8 *)&pFVar5->field_0x10;
      uStack_9d7 = local_9b7;
      uStack_9d5 = local_9b5;
      local_9b4._0_1_ = (undefined1)uVar3;
      uStack_9d4 = (undefined1)local_9b4;
      local_9b4._1_2_ = (undefined2)((ulonglong)uVar3 >> 8);
      uStack_9d3 = local_9b4._1_2_;
      local_9b4._3_1_ = (undefined1)((ulonglong)uVar3 >> 0x18);
      uStack_9d1 = local_9b4._3_1_;
      local_9d0 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_9d8 = 0;
      local_9b4 = uVar3;
      local_9ac = uStack_9cc;
      if ((local_ad8.SpaceValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_9e0) &&
         ((FScriptContainerElement *)&local_9e0 <
          local_ad8.SpaceValues.AllocatorInstance.Data +
          (longlong)local_ad8.SpaceValues.ArrayMax * 0x18)) {
        local_b00 = (longlong)local_ad8.SpaceValues.ArrayNum;
        local_af8 = 0x18;
        local_b18 = &local_9e0;
        local_b10 = local_ad8.SpaceValues.AllocatorInstance.Data;
        local_b08 = (longlong)local_ad8.SpaceValues.ArrayMax;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
          return pTVar20;
        }
      }
      iVar16 = local_ad8.SpaceValues.ArrayNum;
      if (local_ad8.SpaceValues.ArrayNum == local_ad8.SpaceValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_ad8.SpaceValues.AllocatorInstance,
                            &local_ad8.SpaceValues.ArrayMax);
      }
      local_ae7[5] = 1;
      local_ad8.SpaceValues.ArrayNum = iVar16 + 1;
      *(undefined8 *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18) =
           local_9e0;
      *(ulonglong *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 8) =
           CONCAT17(uStack_9d1,
                    CONCAT25(uStack_9d3,
                             CONCAT14(uStack_9d4,
                                      CONCAT13(uStack_9d5,CONCAT21(uStack_9d7,uStack_9d8)))));
      *(ulonglong *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 0x10)
           = CONCAT44(uStack_9cc,local_9d0);
      pFVar18 = UControlRig::GetControlValue((UControlRig *)param_1,&local_2b8,pFVar5,local_ae7 + 5)
      ;
      local_4f8 = (pFVar18->FloatStorage).Float00;
      fStack_4f4 = (pFVar18->FloatStorage).Float01;
      fStack_4f0 = (pFVar18->FloatStorage).Float02;
      fStack_4ec = (pFVar18->FloatStorage).Float03;
      local_4e8 = (pFVar18->FloatStorage).Float10;
      fStack_4e4 = (pFVar18->FloatStorage).Float11;
      fStack_4e0 = (pFVar18->FloatStorage).Float12;
      fStack_4dc = (pFVar18->FloatStorage).Float13;
      local_4d8 = (pFVar18->FloatStorage).Float20;
      fStack_4d4 = (pFVar18->FloatStorage).Float21;
      fStack_4d0 = (pFVar18->FloatStorage).Float22;
      fStack_4cc = (pFVar18->FloatStorage).Float23;
      local_708._8_8_ = (undefined8)fStack_4f4;
      local_708._0_8_ = (undefined8)local_4f8;
      dStack_800 = (double)fStack_4e4;
      dVar9 = (double)fStack_4d4;
      local_808 = (double)local_4e8;
      local_7f8 = (double)fStack_4e0;
      uVar28 = SUB84((double)fStack_4ec,0);
      uVar29 = (undefined4)((ulonglong)(double)fStack_4ec >> 0x20);
      dVar10 = (double)local_4d8;
      dVar11 = (double)fStack_4d0;
      local_548._8_4_ = uVar28;
      local_548._0_8_ = (double)fStack_4f0;
      local_548._12_4_ = uVar29;
      local_708._24_4_ = uVar28;
      local_708._16_8_ = (double)fStack_4f0;
      local_708._28_4_ = uVar29;
      local_658 = local_808;
      dStack_650 = dStack_800;
      local_648 = local_7f8;
      local_558 = (double)local_708._0_8_;
      dStack_550 = (double)local_708._8_8_;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_708,&TStack_7f0);
      local_7d8 = dVar10;
      dStack_7d0 = dVar9;
      local_7c8 = dVar11;
      local_6a0 = dVar10;
      dStack_698 = dVar9;
      local_690 = dVar11;
      UControlRig::GetControlSpecifiedEulerAngle
                ((UControlRig *)param_1,(TVector<double> *)&local_790._s_0,pFVar5,false);
      local_920 = *(undefined8 *)&pFVar5->field_0x14;
      TStack_7f0.Pitch = local_790._s_0.Y;
      local_678 = local_790._s_0.X;
      dStack_918 = local_808;
      dStack_910 = dStack_800;
      TStack_7f0.Yaw = local_790._s_0.Z;
      TStack_7f0.Roll = local_790._s_0.X;
      local_688 = local_790._s_0.Y;
      dStack_680 = local_790._s_0.Z;
      local_8f8 = local_790._s_0.Z;
      dStack_8f0 = local_790._s_0.X;
      dStack_908 = local_7f8;
      dStack_900 = local_790._s_0.Y;
      local_8d8 = local_7c8;
      local_8e8 = local_7d8;
      dStack_8e0 = dStack_7d0;
      if (local_ad8.TransformValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_920)
      {
        if ((FScriptContainerElement *)&local_920 <
            local_ad8.TransformValues.AllocatorInstance.Data +
            (longlong)local_ad8.TransformValues.ArrayMax * 0x50) {
          local_b00 = (longlong)local_ad8.TransformValues.ArrayNum;
          local_af8 = 0x50;
          local_b18 = &local_920;
          local_b10 = local_ad8.TransformValues.AllocatorInstance.Data;
          local_b08 = (longlong)local_ad8.TransformValues.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
            return pTVar20;
          }
        }
      }
      iVar16 = local_ad8.TransformValues.ArrayNum;
      if (local_ad8.TransformValues.ArrayNum == local_ad8.TransformValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_ad8.TransformValues.AllocatorInstance,
                            &local_ad8.TransformValues.ArrayMax);
      }
      lVar19 = (longlong)iVar16;
      local_ad8.TransformValues.ArrayNum = iVar16 + 1;
      puVar24 = puVar24 + 1;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50) = local_920;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 8) = dStack_918
      ;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x10) =
           dStack_910;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x10 + 8) =
           dStack_908;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x20) =
           dStack_900;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x20 + 8) =
           local_8f8;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x30) =
           dStack_8f0;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x30 + 8) =
           local_8e8;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x40) =
           dStack_8e0;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x40 + 8) =
           local_8d8;
      break;
    case TransformNoScale:
      local_ae7[6] = 1;
      pFVar18 = UControlRig::GetControlValue((UControlRig *)param_1,&local_234,pFVar5,local_ae7 + 6)
      ;
      uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar29 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
      uVar28 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
      local_538 = (pFVar18->FloatStorage).Float00;
      fStack_534 = (pFVar18->FloatStorage).Float01;
      fStack_530 = (pFVar18->FloatStorage).Float02;
      fStack_52c = (pFVar18->FloatStorage).Float03;
      local_528 = (pFVar18->FloatStorage).Float10;
      fStack_524 = (pFVar18->FloatStorage).Float11;
      fStack_520 = (pFVar18->FloatStorage).Float12;
      fStack_51c = (pFVar18->FloatStorage).Float13;
      local_6e8._8_8_ = (undefined8)fStack_534;
      local_6e8._0_8_ = (undefined8)local_538;
      local_758._8_4_ = SUB84((double)fStack_524,0);
      local_758._0_8_ = (double)local_528;
      local_758._12_4_ = (int)((ulonglong)(double)fStack_524 >> 0x20);
      uVar33 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
      uVar23 = (ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20;
      local_748 = (double)fStack_520;
      uVar31 = SUB84((double)fStack_52c,0);
      uVar32 = (undefined4)((ulonglong)(double)fStack_52c >> 0x20);
      local_508._8_4_ = uVar31;
      local_508._0_8_ = (double)fStack_530;
      local_508._12_4_ = uVar32;
      local_6e8._24_4_ = uVar31;
      local_6e8._16_8_ = (double)fStack_530;
      local_6e8._28_4_ = uVar32;
      local_518 = (double)local_6e8._0_8_;
      dStack_510 = (double)local_6e8._8_8_;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_6e8,&TStack_740);
      local_728 = uVar28;
      uStack_724 = uVar29;
      local_718 = (double)uVar3;
      uStack_720 = uVar33;
      uStack_71c = (int)uVar23;
      UControlRig::GetControlSpecifiedEulerAngle
                ((UControlRig *)param_1,(TVector<double> *)&local_778._s_0,pFVar5,false);
      local_8d0 = *(undefined8 *)&pFVar5->field_0x14;
      TStack_740.Pitch = local_778._s_0.Y;
      local_660 = local_778._s_0.X;
      uStack_8c8 = local_758._0_8_;
      uStack_8c0 = local_758._8_8_;
      TStack_740.Yaw = local_778._s_0.Z;
      TStack_740.Roll = local_778._s_0.X;
      local_670 = local_778._s_0.Y;
      dStack_668 = local_778._s_0.Z;
      local_8a8 = local_778._s_0.Z;
      dStack_8a0 = local_778._s_0.X;
      local_898 = (double)CONCAT44(uStack_724,local_728);
      uStack_890 = CONCAT44(uStack_71c,uStack_720);
      dStack_8b8 = local_748;
      dStack_8b0 = local_778._s_0.Y;
      local_888 = local_718;
      if (local_ad8.TransformValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8d0)
      {
        if ((FScriptContainerElement *)&local_8d0 <
            local_ad8.TransformValues.AllocatorInstance.Data +
            (longlong)local_ad8.TransformValues.ArrayMax * 0x50) {
          local_b00 = (longlong)local_ad8.TransformValues.ArrayNum;
          local_af8 = 0x50;
          local_b18 = &local_8d0;
          local_b10 = local_ad8.TransformValues.AllocatorInstance.Data;
          local_b08 = (longlong)local_ad8.TransformValues.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
            return pTVar20;
          }
        }
      }
      iVar16 = local_ad8.TransformValues.ArrayNum;
      if (local_ad8.TransformValues.ArrayNum == local_ad8.TransformValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_ad8.TransformValues.AllocatorInstance,
                            &local_ad8.TransformValues.ArrayMax);
      }
      lVar19 = (longlong)iVar16;
      local_ad8.TransformValues.ArrayNum = iVar16 + 1;
      puVar24 = puVar24 + 1;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50) = local_8d0;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 8) =
           uStack_8c8;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x10) =
           uStack_8c0;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x10 + 8) =
           dStack_8b8;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x20) =
           dStack_8b0;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x20 + 8) =
           local_8a8;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x30) =
           dStack_8a0;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x30 + 8) =
           local_898;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x40) =
           uStack_890;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x40 + 8) =
           local_888;
      break;
    case EulerTransform:
      local_a10 = *(undefined8 *)&pFVar5->field_0x14;
      uStack_9fc = *(undefined4 *)&pFVar5->field_0x18;
      uVar3 = *(undefined8 *)&pFVar5->field_0x10;
      uStack_a07 = local_9a7;
      uStack_a05 = local_9a5;
      local_9a4._0_1_ = (undefined1)uVar3;
      uStack_a04 = (undefined1)local_9a4;
      local_9a4._1_2_ = (undefined2)((ulonglong)uVar3 >> 8);
      uStack_a03 = local_9a4._1_2_;
      local_9a4._3_1_ = (undefined1)((ulonglong)uVar3 >> 0x18);
      uStack_a01 = local_9a4._3_1_;
      local_a00 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_a08 = 0;
      local_9a4 = uVar3;
      local_99c = uStack_9fc;
      if ((local_ad8.SpaceValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a10) &&
         ((FScriptContainerElement *)&local_a10 <
          local_ad8.SpaceValues.AllocatorInstance.Data +
          (longlong)local_ad8.SpaceValues.ArrayMax * 0x18)) {
        local_b00 = (longlong)local_ad8.SpaceValues.ArrayNum;
        local_af8 = 0x18;
        local_b18 = &local_a10;
        local_b10 = local_ad8.SpaceValues.AllocatorInstance.Data;
        local_b08 = (longlong)local_ad8.SpaceValues.ArrayMax;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
          return pTVar20;
        }
      }
      iVar16 = local_ad8.SpaceValues.ArrayNum;
      if (local_ad8.SpaceValues.ArrayNum == local_ad8.SpaceValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&local_ad8.SpaceValues.AllocatorInstance,
                            &local_ad8.SpaceValues.ArrayMax);
      }
      local_ae7[7] = 1;
      local_ad8.SpaceValues.ArrayNum = iVar16 + 1;
      *(undefined8 *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18) =
           local_a10;
      *(ulonglong *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 8) =
           CONCAT17(uStack_a01,
                    CONCAT25(uStack_a03,
                             CONCAT14(uStack_a04,
                                      CONCAT13(uStack_a05,CONCAT21(uStack_a07,uStack_a08)))));
      *(ulonglong *)(local_ad8.SpaceValues.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 0x10)
           = CONCAT44(uStack_9fc,local_a00);
      pFVar18 = UControlRig::GetControlValue((UControlRig *)param_1,&local_1b0,pFVar5,local_ae7 + 7)
      ;
      local_6b8 = (pFVar18->FloatStorage).Float10;
      fStack_6b4 = (pFVar18->FloatStorage).Float11;
      fStack_6b0 = (pFVar18->FloatStorage).Float12;
      fStack_6ac = (pFVar18->FloatStorage).Float13;
      local_6a8 = (pFVar18->FloatStorage).Float20;
      local_6c8 = (pFVar18->FloatStorage).Float00;
      fStack_6c4 = (pFVar18->FloatStorage).Float01;
      fStack_6c0 = (pFVar18->FloatStorage).Float02;
      fStack_6bc = (pFVar18->FloatStorage).Float03;
      dVar11 = (double)fStack_6bc;
      dVar10 = (double)fStack_6b4;
      dVar9 = (double)local_6b8;
      dVar13 = (double)local_6a8;
      dVar12 = (double)fStack_6b0;
      uVar29 = SUB84((double)fStack_6ac,0);
      uVar31 = (undefined4)((ulonglong)(double)fStack_6ac >> 0x20);
      UControlRig::GetControlSpecifiedEulerAngle
                ((UControlRig *)param_1,(TVector<double> *)&local_830._s_0,pFVar5,false);
      local_880 = *(undefined8 *)&pFVar5->field_0x14;
      uVar28 = (undefined4)((ulonglong)local_830._8_8_ >> 0x20);
      local_628._8_4_ = SUB84(local_830._s_0.Y,0);
      local_628._0_8_ = dVar10;
      local_628._12_4_ = uVar28;
      local_618 = local_830._s_0.Z;
      dStack_610 = local_830._s_0.X;
      auStack_868._8_4_ = SUB84(local_830._s_0.Y,0);
      auStack_868._0_8_ = dVar10;
      auStack_868._12_4_ = uVar28;
      local_608._8_4_ = uVar29;
      local_608._0_8_ = dVar12;
      local_608._12_4_ = uVar31;
      local_858 = local_830._s_0.Z;
      dStack_850 = local_830._s_0.X;
      local_848._8_4_ = uVar29;
      local_848._0_8_ = dVar12;
      local_848._12_4_ = uVar31;
      dStack_878 = dVar11;
      dStack_870 = dVar9;
      local_838 = dVar13;
      local_638 = dVar11;
      dStack_630 = dVar9;
      local_5f8 = dVar13;
      if (local_ad8.TransformValues.AllocatorInstance.Data <= (FScriptContainerElement *)&local_880)
      {
        if ((FScriptContainerElement *)&local_880 <
            local_ad8.TransformValues.AllocatorInstance.Data +
            (longlong)local_ad8.TransformValues.ArrayMax * 0x50) {
          local_b00 = (longlong)local_ad8.TransformValues.ArrayNum;
          local_af8 = 0x50;
          local_b18 = &local_880;
          local_b10 = local_ad8.TransformValues.AllocatorInstance.Data;
          local_b08 = (longlong)local_ad8.TransformValues.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
            return pTVar20;
          }
        }
      }
      iVar16 = local_ad8.TransformValues.ArrayNum;
      if (local_ad8.TransformValues.ArrayNum == local_ad8.TransformValues.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_ad8.TransformValues.AllocatorInstance,
                            &local_ad8.TransformValues.ArrayMax);
      }
      lVar19 = (longlong)iVar16;
      local_ad8.TransformValues.ArrayNum = iVar16 + 1;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50) = local_880;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 8) = dStack_878
      ;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x10) =
           dStack_870;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x10 + 8) =
           auStack_868._0_8_;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x20) =
           auStack_868._8_8_;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x20 + 8) =
           local_858;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x30) =
           dStack_850;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x30 + 8) =
           local_848._0_8_;
      *(undefined8 *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x40) =
           local_848._8_8_;
      *(double *)(local_ad8.TransformValues.AllocatorInstance.Data + lVar19 * 0x50 + 0x40 + 8) =
           local_838;
    default:
      puVar24 = puVar24 + 1;
    }
  }
  pTVar6 = (((UControlRig *)param_1)->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar7 = (((UControlRig *)param_1)->ObjectBinding).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pIVar7 != (IControlRigObjectBinding *)0x0) {
    pTVar6 = (((UControlRig *)param_1)->ObjectBinding).SharedReferenceCount.ReferenceController;
    pIVar7 = (((UControlRig *)param_1)->ObjectBinding).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar7 == (IControlRigObjectBinding *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
      return pTVar20;
    }
    this_00 = (UControlRigComponent *)(**(code **)((longlong)*pIVar7 + 0x28))(pIVar7);
    if (this_00 != (UControlRigComponent *)0x0) {
      pUVar17 = Z_Construct_UClass_UControlRigComponent_NoRegister();
      iVar4 = (int)pUVar17->_padding_;
      if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar17->_padding_)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        pUVar21 = UControlRigComponent::GetControlRig(this_00);
        if (pUVar21 == (UControlRig *)param_1) {
          (**(code **)(((UControlRig *)param_1)->_padding_ + 0x438))(param_1,&local_998);
          (**(code **)(((UControlRig *)param_1)->_padding_ + 0x2c0))(param_1,1);
          (**(code **)(((UControlRig *)param_1)->_padding_ + 0x438))(param_1,&local_930);
          pFVar25 = local_930;
          pFVar27 = local_998;
          if ((local_990 != local_928) ||
             (bVar15 = CompareItems<FName,int>(local_998,local_930,local_990), !bVar15)) {
            (**(code **)(((UControlRig *)param_1)->_padding_ + 0x430))(param_1,0);
            uVar14 = local_990;
            uVar23 = (ulonglong)(int)local_990;
            pFVar2 = local_998 + uVar23;
            pFVar26 = local_998;
            while( true ) {
              if ((uint)uVar23 != uVar14) {
                `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_a38);
              }
              pFVar25 = local_930;
              pFVar27 = local_998;
              if (pFVar26 == pFVar2) break;
              (**(code **)(((UControlRig *)param_1)->_padding_ + 0x428))(param_1,pFVar26,1,0);
              uVar23 = (ulonglong)local_990;
              pFVar26 = pFVar26 + 1;
            }
          }
          if (pFVar25 != (FName *)0x0) {
            FMemory::Free(pFVar25);
            pFVar27 = local_998;
          }
          if (pFVar27 != (FName *)0x0) {
            FMemory::Free(pFVar27);
          }
        }
        else {
          UControlRigComponent::Initialize(this_00);
          if ((this_00->_padding_ != 0) ||
             (pUVar22 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
             pUVar22 != (UWorld *)0x0)) {
            pUVar22 = (UWorld *)this_00->_padding_;
            if (pUVar22 == (UWorld *)0x0) {
              pUVar22 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
            }
            bVar15 = UWorld::IsGameWorld(pUVar22);
            if (!bVar15) {
              UControlRigComponent::SetControlRig(this_00,(UControlRig *)param_1);
            }
          }
        }
        goto LAB_14a3ef8d2;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pIVar7 = (((UControlRig *)param_1)->ObjectBinding).Object;
    pTVar6 = (((UControlRig *)param_1)->ObjectBinding).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar7 == (IControlRigObjectBinding *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      pTVar20 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar8)();
      return pTVar20;
    }
    this_01 = (USkeletalMeshComponent *)(**(code **)((longlong)*pIVar7 + 0x28))(pIVar7);
    if (this_01 != (USkeletalMeshComponent *)0x0) {
      pUVar17 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar4 = (int)pUVar17->_padding_;
      if ((iVar4 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar17->_padding_)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        FSkeletalMeshRestoreState::SaveState(&local_ad8.SkeletalMeshRestoreState,this_01);
        local_ad8.AnimationMode = USkeletalMeshComponent::GetAnimationMode(this_01);
        goto LAB_14a3ef8d2;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14a3ef8d2:
  if (local_960 != (undefined8 *)0x0) {
    FMemory::Free(local_960);
  }
LAB_14a3ef8f3:
  __return_storage_ptr__->bIsValid = false;
  TInlineValue<IMovieScenePreAnimatedToken,32,8>::
  InitializeFrom<_FControlRigParameterPreAnimatedTokenProducer::CacheExistingState_::__l2::FToken,_FControlRigParameterPreAnimatedTokenProducer::CacheExistingState_::__l2::FToken>
            (__return_storage_ptr__,&local_ad8);
  if (local_ad8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.
                  Data);
  }
  if (local_ad8.TransformValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.TransformValues.AllocatorInstance.Data);
  }
  if (local_ad8.Vector2DValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.Vector2DValues.AllocatorInstance.Data);
  }
  if (local_ad8.VectorValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.VectorValues.AllocatorInstance.Data);
  }
  if (local_ad8.IntegerValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.IntegerValues.AllocatorInstance.Data);
  }
  if (local_ad8.BoolValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.BoolValues.AllocatorInstance.Data);
  }
  if (local_ad8.ScalarValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.ScalarValues.AllocatorInstance.Data);
  }
  if (local_ad8.SpaceValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.SpaceValues.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

