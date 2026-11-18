// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// FCameraObjectInterfaceBuilder @ 14d543510

FCameraObjectInterfaceBuilder * __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::FCameraObjectInterfaceBuilder
          (FCameraObjectInterfaceBuilder *this,FCameraBuildLog *param_1)

{
  this->BuildLog = param_1;
  this->CameraObject = (UBaseCameraObject *)0x0;
  (this->CameraObjectNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraObjectNodes).ArrayNum = 0;
  (this->CameraObjectNodes).ArrayMax = 0;
  *(undefined8 *)&this->OldDrivenBlendableParameters = 0;
  *(undefined8 *)&(this->OldDrivenBlendableParameters).field_0x8 = 0;
  *(undefined8 *)&(this->OldDrivenBlendableParameters).field_0x20 = 0;
  *(undefined4 *)&(this->OldDrivenBlendableParameters).field_0x28 = 0;
  *(undefined4 *)&(this->OldDrivenBlendableParameters).field_0x2c = 0x80;
  *(undefined4 *)&(this->OldDrivenBlendableParameters).field_0x34 = 0;
  *(undefined4 *)&(this->OldDrivenBlendableParameters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OldDrivenBlendableParameters).field_0x40 = 0;
  *(undefined4 *)&(this->OldDrivenBlendableParameters).field_0x48 = 0;
  *(undefined8 *)&this->OldDrivenDataParameters = 0;
  *(undefined8 *)&(this->OldDrivenDataParameters).field_0x8 = 0;
  *(undefined8 *)&(this->OldDrivenDataParameters).field_0x20 = 0;
  *(undefined4 *)&(this->OldDrivenDataParameters).field_0x28 = 0;
  *(undefined4 *)&(this->OldDrivenDataParameters).field_0x2c = 0x80;
  *(undefined4 *)&(this->OldDrivenDataParameters).field_0x34 = 0;
  *(undefined4 *)&(this->OldDrivenDataParameters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OldDrivenDataParameters).field_0x40 = 0;
  *(undefined4 *)&(this->OldDrivenDataParameters).field_0x48 = 0;
  return this;
}

// BuildInterface @ 14d54cb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::BuildInterface
          (FCameraObjectInterfaceBuilder *this,UBaseCameraObject *param_1,
          FCameraNodeHierarchy *param_2,bool param_3)

{
  int *piVar1;
  UCameraNode **ppUVar2;
  ForElementType<unsigned_int> this_00;
  FScriptContainerElement *_Src;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  TArrayView<UCameraNode_*_const,int> *pTVar9;
  ulonglong uVar10;
  TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  uint uVar15;
  UCameraNode **ppUVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ForElementType<unsigned_int> FVar21;
  undefined1 auStackY_188 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  FString local_128;
  UCameraNode **local_118;
  code **ppcStack_110;
  undefined4 local_108;
  int local_104;
  UCameraNode *local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  code *local_c8;
  undefined8 **local_c0;
  TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> local_b8;
  TArrayView<UCameraNode_*_const,int> local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar9 = FCameraNodeHierarchy::GetFlattenedHierarchy(param_2,&local_a8);
  uVar14 = 0;
  local_118 = pTVar9->DataPtr;
  uVar5 = pTVar9->ArrayNum;
  ppcStack_110 = *(code ***)&pTVar9->ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar5 == 0) goto LAB_14d54ce10;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar5);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar5);
  uVar15 = 1;
  if (3 < uVar5) {
    uVar18 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_108 = (undefined4)lVar3;
    uVar15 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar15 <= (int)local_50)) goto LAB_14d54ce10;
  local_50 = uVar15;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar15 != 0) {
    uVar17 = uVar15;
    if (uVar15 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar17 = 0;
        goto LAB_14d54cc45;
      }
    }
    else {
LAB_14d54cc45:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4);
    }
    if (0 < (int)uVar15) {
      uVar19 = (ulonglong)uVar15;
      uVar18 = uVar14;
      do {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar10 = uVar18 & (longlong)(int)uVar15 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar13.Data + uVar10 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (local_50 != 0) {
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    if (local_70 != 0) {
      FVar21 = this_00;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_78;
      }
      uVar15 = *(uint *)FVar21;
      uVar18 = uVar14;
      while (uVar15 == 0) {
        uStack_130 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_130;
        iVar12 = (int)uVar14;
        local_148 = iVar12 + 1;
        uVar14 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14d54cd52;
        uVar15 = *(uint *)((uchar *)((longlong)FVar21 + 4) + (longlong)iVar12 * 4);
      }
      uStack_144 = -uVar15 & uVar15;
      uVar14 = (ulonglong)uStack_144 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_104 = (int)lVar3;
      uStack_134 = local_104 + -1 + uStack_130;
      uVar14 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14d54cd52:
        uVar14 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_f0 = (longlong *)local_98;
    local_e8._padding_ = CONCAT44(uStack_144,local_148);
    local_e8.CurrentBitIndex = uStack_134;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_12c;
    local_e8.BaseBitIndex = uStack_130;
    local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    if ((int)uVar14 < (int)local_70) {
      do {
        puVar20 = (ulonglong *)((longlong)(int)uVar14 * 0x10 + *local_f0);
        uVar15 = ((uint)(*puVar20 >> 0x14) & 0xffff ^ (uint)(*puVar20 >> 4)) * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = (uVar15 >> 0x10 ^ uVar15) & local_50 - 1;
        *(uint *)((longlong)puVar20 + 0xc) = uVar15;
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(FVar13.Data + uVar18 * 4);
        *(int *)(FVar13.Data + uVar18 * 4) = (int)uVar14;
        local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        uVar14 = (ulonglong)(uint)local_e8.CurrentBitIndex;
      } while (local_e8.CurrentBitIndex < *(int *)((longlong)local_e8.Array + 0x18));
    }
  }
LAB_14d54ce10:
  ppUVar2 = local_118 + (int)uVar5;
  for (ppUVar16 = local_118; ppUVar16 != ppUVar2; ppUVar16 = ppUVar16 + 1) {
    TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator>::
    Emplace<UCameraNode_*_const_&>
              ((TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator> *)local_98
               ,&local_100,(bool *)ppUVar16);
  }
  if (param_3) {
    local_f8 = (undefined8 *)local_98;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Cameras::FCameraObjectInterfaceBuilder::BuildInterface'::__l5::<lambda_1>,void,UObject_*>
               ::Call;
    local_c0 = &local_f8;
    ppcStack_110 = &local_c8;
    local_118 = (UCameraNode **)
                Core::Private::Function::
                TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    ForEachObjectWithOuterBreakable
              ((UObjectBase *)param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_118,true,
               RF_NoFlags,Borrowed);
    iVar12 = local_64;
    uVar6 = local_98._8_4_;
    iVar8 = FCameraNodeHierarchy::Num(param_2);
    if ((0 < (uVar6 - iVar12) - iVar8) && (5 < (byte)LogCameraSystem._0_1_)) {
      if (this->CameraObject == (UBaseCameraObject *)0x0) {
        ::FString::FString(&local_128,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this->CameraObject,&local_128,(UObject *)0x0);
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
  }
  pTVar11 = TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator>::Array
                      ((TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator> *)
                       local_98,&local_b8);
  iVar12 = pTVar11->ArrayNum;
  _Src = (pTVar11->AllocatorInstance).Data;
  if ((iVar12 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 == (UBaseCameraObject *)0x0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1378543571254116892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                       ,0x21c,"InCameraObject");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this->CameraObject = param_1;
    pTVar11 = &this->CameraObjectNodes;
    iVar8 = (this->CameraObjectNodes).ArrayMax;
    piVar1 = &(this->CameraObjectNodes).ArrayMax;
    (this->CameraObjectNodes).ArrayNum = iVar12;
    if ((iVar12 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,iVar8,&pTVar11->AllocatorInstance,iVar12,piVar1);
      if (iVar12 != 0) {
        memcpy((pTVar11->AllocatorInstance).Data,_Src,(longlong)iVar12 << 3);
      }
    }
    GatherOldDrivenParameters(this);
    BuildInterfaceParameters(this);
    BuildInterfaceParameterBindings(this);
    DiscardUnusedParameters(this);
    this->CameraObject = (UBaseCameraObject *)0x0;
    (this->CameraObjectNodes).ArrayNum = 0;
    if (*piVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar11->AllocatorInstance,0,piVar1);
    }
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar12 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar12 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// BuildInterface @ 14d54d0f0

void __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::BuildInterface
          (FCameraObjectInterfaceBuilder *this,UBaseCameraObject *param_1,
          TArrayView<UCameraNode_*,int> *param_2)

{
  TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UCameraNode **_Src;
  code *pcVar4;
  bool bVar5;
  
  if (param_1 == (UBaseCameraObject *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1378543571254116892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                       ,0x21c,"InCameraObject");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar3 = param_2->ArrayNum;
    pTVar1 = &this->CameraObjectNodes;
    piVar2 = &(this->CameraObjectNodes).ArrayMax;
    _Src = param_2->DataPtr;
    this->CameraObject = param_1;
    (this->CameraObjectNodes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
      }
    }
    GatherOldDrivenParameters(this);
    BuildInterfaceParameters(this);
    BuildInterfaceParameterBindings(this);
    DiscardUnusedParameters(this);
    this->CameraObject = (UBaseCameraObject *)0x0;
    (this->CameraObjectNodes).ArrayNum = 0;
    if (*piVar2 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  return;
}

// BuildInterfaceImpl @ 14d54d220

void __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::BuildInterfaceImpl(FCameraObjectInterfaceBuilder *this)

{
  GatherOldDrivenParameters(this);
  BuildInterfaceParameters(this);
  BuildInterfaceParameterBindings(this);
  DiscardUnusedParameters(this);
  return;
}

// BuildInterfaceParameterBindings @ 14d54d260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::BuildInterfaceParameterBindings
          (FCameraObjectInterfaceBuilder *this)

{
  longlong *plVar1;
  uint *puVar2;
  Type TVar3;
  UCameraObjectInterfaceBlendableParameter *pUVar4;
  FCameraBuildLog *pFVar5;
  undefined8 uVar6;
  UObject *pUVar7;
  UCameraObjectInterfaceDataParameter *pUVar8;
  UObjectBaseUtility *this_00;
  code *pcVar9;
  int *piVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FText *pFVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  FText *pFVar18;
  FText *pFVar19;
  FText *pFVar20;
  FTextFormat *pFVar21;
  UClass *pUVar22;
  longlong *plVar23;
  byte bVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  FCameraBuildLogMessage *pFVar27;
  FScriptContainerElement *pFVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  ulonglong uVar31;
  ForElementType<unsigned_int> FVar32;
  longlong lVar33;
  uint uVar34;
  FDataParameterInfo *pFVar35;
  TSparseSetElement<TTuple<UObject_*,FName>_> *pTVar36;
  ulonglong uVar37;
  FCameraObjectInterfaceBuilder *this_01;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a8;
  undefined1 local_3a7 [7];
  FScriptContainerElement *local_3a0;
  FCameraObjectInterfaceBuilder *local_398;
  int local_390;
  uint local_38c;
  FScriptContainerElement *local_388;
  FCameraContextDataID local_380 [2];
  UBaseCameraObject *local_378;
  int local_370;
  uint uStack_36c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_368;
  undefined4 local_360;
  int iStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  void *local_350;
  undefined8 local_348;
  FDataParameterInfo *local_340;
  undefined8 local_338;
  undefined4 local_330 [2];
  UCameraObjectInterfaceBlendableParameter *local_328;
  FText local_320;
  undefined4 local_310 [2];
  UCameraObjectInterfaceDataParameter *local_308;
  FText local_300;
  undefined4 local_2f0;
  int local_2ec;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FInterfaceParameterBindingBuilder local_2c8;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b0;
  ulonglong local_290;
  longlong lStack_288;
  FSparseArrayAllocationInfo local_280;
  FName local_270;
  longlong local_268;
  FText local_260;
  FText local_250;
  FText local_240;
  FText local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FText local_1f0;
  FText local_1e0;
  FText local_1d0;
  FText local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FText local_160;
  FText local_150;
  FText local_140;
  FTextFormat local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FTextFormat local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FText local_b0;
  FText local_a0;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_2e8 = (FName)this->CameraObject->_padding_;
  local_398 = this;
  ::FName::ToString(&local_2e8,&local_1a0);
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)this->CameraObject,&local_1b0,(UObject *)0x0);
  local_378 = this->CameraObject;
  local_38c = (local_378->Interface).BlendableParameters.ArrayNum;
  uVar31 = (ulonglong)(int)local_38c;
  pFVar28 = (local_378->Interface).BlendableParameters.AllocatorInstance.Data;
  pFVar26 = pFVar28 + uVar31 * 8;
  local_3a0 = pFVar26;
  while( true ) {
    local_388 = pFVar28;
    if ((local_378->Interface).BlendableParameters.ArrayNum != (int)uVar31) {
      local_3a8 = 0;
      `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_3a8);
    }
    if (pFVar28 == pFVar26) break;
    pUVar4 = *(UCameraObjectInterfaceBlendableParameter **)pFVar28;
    uVar31 = pUVar4->_padding_;
    if (uVar31 == 0) {
      pFVar5 = this->BuildLog;
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_160,L"CameraObjectInterfaceBuilder",
                           L"InvalidBlendableParameterTarget",
                           L"Invalid interface parameter: it has no target node.");
      local_330[0] = 3;
      local_328 = pUVar4;
      FText::FText(&local_320,pFVar14);
      pFVar26 = (pFVar5->Messages).AllocatorInstance.Data;
      if (((pFVar26 <= (FScriptContainerElement *)local_330) &&
          ((FScriptContainerElement *)local_330 <
           pFVar26 + (longlong)(pFVar5->Messages).ArrayMax * 0x20)) &&
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
      iVar12 = (pFVar5->Messages).ArrayNum;
      piVar10 = &(pFVar5->Messages).ArrayMax;
      if (iVar12 == *piVar10) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)pFVar5,piVar10);
      }
      (pFVar5->Messages).ArrayNum = iVar12 + 1;
      pFVar26 = (pFVar5->Messages).AllocatorInstance.Data + (longlong)iVar12 * 0x20;
      *(undefined4 *)pFVar26 = local_330[0];
      *(UCameraObjectInterfaceBlendableParameter **)(pFVar26 + 8) = local_328;
      FText::FText((FText *)(pFVar26 + 0x10),&local_320);
      if (local_320.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_320.TextData.Reference + 0x10))();
      }
      pFVar5->bHasWarnings = true;
      if (pFVar5->bForwardToLogging != false) {
        iVar12 = (pFVar5->Messages).ArrayNum;
        uVar30 = iVar12 - 1;
        uVar25 = 0;
        if ((int)uVar30 < iVar12) {
          uVar25 = ~uVar30 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar27 = (FCameraBuildLogMessage *)
                  ((pFVar5->Messages).AllocatorInstance.Data +
                  (longlong)(pFVar5->Messages).ArrayNum * 0x20 + -0x20);
        TVar3 = pFVar27->Severity;
        if (TVar3 == Error) {
          if (1 < (byte)LogCameraSystem._0_1_) {
            FCameraBuildLogMessage::ToString(pFVar27,&local_170);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            FVar29.Data = local_170.Data.AllocatorInstance.Data;
            goto LAB_14d54d610;
          }
        }
        else if ((TVar3 == PerformanceWarning) || (TVar3 == Warning)) {
          if (2 < (byte)LogCameraSystem._0_1_) {
            FCameraBuildLogMessage::ToString(pFVar27,&local_180);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            FVar29.Data = local_180.Data.AllocatorInstance.Data;
            goto LAB_14d54d610;
          }
        }
        else if (4 < (byte)LogCameraSystem._0_1_) {
          FCameraBuildLogMessage::ToString(pFVar27,&local_190);
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
          FVar29.Data = local_190.Data.AllocatorInstance.Data;
LAB_14d54d610:
          if (FVar29.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar29.Data);
          }
        }
      }
      pFVar26 = local_3a0;
      if (local_160.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
        pFVar26 = local_3a0;
      }
    }
    else {
      lVar33 = pUVar4->_padding_;
      if (lVar33 == 0) {
        pFVar5 = this->BuildLog;
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_150,L"CameraObjectInterfaceBuilder",
                             L"InvalidBlendableParameterTargetPropertyName",
                             L"Invalid interface parameter: it has not target property name.");
        FCameraBuildLog::AddMessage(pFVar5,Error,(UObject *)pUVar4,pFVar14);
        pFVar26 = local_3a0;
        if (local_150.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
          pFVar26 = local_3a0;
        }
      }
      else if (1 < (int)pUVar4->_padding_) {
        uVar25 = ((uint)(uVar31 >> 0x14) & 0xffff ^ (uint)(uVar31 >> 4)) * -0x7a143595;
        uVar30 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        uVar30 = uVar30 >> 0x10 ^ uVar30;
        local_290 = uVar31;
        lStack_288 = lVar33;
        uVar25 = ::GetTypeHash((FNameEntryId)(uint)lVar33);
        if (local_88._8_4_ != local_54) {
          FVar29.Data = (FScriptContainerElement *)local_50;
          if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
            FVar29.Data = local_48.Data;
          }
          iVar12 = *(int *)((longlong)FVar29.Data +
                           (ulonglong)
                           (local_40 - 1 &
                           ((int)((ulonglong)lVar33 >> 0x20) + uVar30 * 0x40 +
                            (uVar30 >> 2) + 0x9e3779b9 + uVar25 ^ uVar30)) * 4);
          while (iVar12 != -1) {
            lVar15 = (longlong)iVar12;
            if ((*(ulonglong *)(local_88._0_8_ + lVar15 * 0x18) == uVar31) &&
               (*(longlong *)(local_88._0_8_ + lVar15 * 0x18 + 8) == lVar33)) {
              if (iVar12 != -1) {
                pFVar5 = this->BuildLog;
                local_2e0 = *(FName *)(pUVar4->_padding_ + 0x18);
                pFVar14 = FText::FromName(&local_e0,&local_2e0);
                pFVar18 = FText::FromName(&local_d0,(FName *)&pUVar4->_padding_);
                pFVar19 = FText::AsLocalizable_Advanced_LocText
                                    (&local_250,L"CameraObjectInterfaceBuilder",
                                     L"BlendableParameterTargetCollision",
                                     L"Multiple interface parameters targeting property \'{0}\' on camera node \'{1}\'. Ignoring duplicates."
                                    );
                pFVar21 = FTextFormat::FTextFormat(&local_c0,pFVar19,Default);
                pFVar14 = FText::Format<FText,FText>(&local_260,pFVar21,pFVar18,pFVar14);
                FCameraBuildLog::AddMessage(pFVar5,Error,(UObject *)0x0,pFVar14);
                if (local_260.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
                }
                pFVar26 = local_3a0;
                if (local_250.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
                  pFVar26 = local_3a0;
                }
                goto LAB_14d54dd77;
              }
              break;
            }
            iVar12 = *(int *)(local_88._0_8_ + lVar15 * 0x18 + 0x10);
          }
        }
        if (local_54 == 0) {
          iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                              (int *)(local_88 + 0xc));
          iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
          FVar32 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar32 = local_68;
          }
          bVar24 = (byte)iVar13 & 0x1f;
          if (iVar13 < 0) {
            iVar13 = iVar13 + 0x1f;
            bVar24 = bVar24 - 0x20;
          }
          puVar2 = (uint *)((longlong)FVar32 + (longlong)(iVar13 >> 5) * 4);
          *puVar2 = *puVar2 & ~(1 << (bVar24 & 0x1f));
          iVar13 = local_58;
        }
        else {
          local_54 = local_54 + -1;
          iVar13 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x18 + 4);
          iVar12 = local_58;
          if (local_54 != 0) {
            *(undefined4 *)(local_88._0_8_ + (longlong)iVar13 * 0x18) = 0xffffffff;
          }
        }
        local_58 = iVar13;
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,&local_280,iVar12);
        if (local_280.Pointer == (TSparseSetElement<TTuple<UObject_*,FName>_> *)0x0) {
          pTVar36 = (TSparseSetElement<TTuple<UObject_*,FName>_> *)0x0;
        }
        else {
          *(ulonglong *)local_280.Pointer = local_290;
          *(longlong *)((longlong)local_280.Pointer + 8) = lStack_288;
          *(undefined4 *)((longlong)local_280.Pointer + 0x10) = 0xffffffff;
          pTVar36 = local_280.Pointer;
        }
        uVar6 = *(undefined8 *)&pTVar36->field_0x8;
        local_390 = local_280.Index;
        uVar25 = ((uint)(*(ulonglong *)pTVar36 >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)pTVar36 >> 4)) * -0x7a143595;
        uVar30 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        uVar30 = uVar30 >> 0x10 ^ uVar30;
        uVar25 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
        uVar30 = uVar30 * 0x40 + (int)((ulonglong)uVar6 >> 0x20) + (uVar30 >> 2) + 0x9e3779b9 +
                 uVar25 ^ uVar30;
        bVar11 = TSet<TTuple<UObject_*,FName>,DefaultKeyFuncs<TTuple<UObject_*,FName>,0>,FDefaultSetAllocator>
                 ::TryReplaceExisting
                           ((TSet<TTuple<UObject_*,FName>,DefaultKeyFuncs<TTuple<UObject_*,FName>,0>,FDefaultSetAllocator>
                             *)local_88,uVar30,pTVar36,&local_390,(bool *)0x0);
        if (!bVar11) {
          uVar34 = 1;
          uVar25 = local_88._8_4_ - local_54;
          if (3 < uVar25) {
            uVar31 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
            lVar33 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar33 == 0; lVar33 = lVar33 + -1) {
              }
            }
            local_2f0 = (undefined4)lVar33;
            uVar34 = 1 << ((byte)lVar33 & 0x1f);
          }
          if (((int)uVar25 < 1) || ((int)uVar34 <= (int)local_40)) {
            uVar30 = local_40 - 1 & uVar30;
            *(uint *)&pTVar36->field_0x14 = uVar30;
            FVar29.Data = (FScriptContainerElement *)local_50;
            if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar29.Data = local_48.Data;
            }
            uVar31 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar30;
            *(undefined4 *)&pTVar36->field_0x10 =
                 *(undefined4 *)((longlong)FVar29.Data + uVar31 * 4);
            *(int *)((longlong)FVar29.Data + uVar31 * 4) = local_390;
          }
          else {
            local_40 = uVar34;
            if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
            }
            if (uVar34 != 0) {
              uVar25 = uVar34;
              if (uVar34 < 2) {
                if ((ForElementType<FSetElementId>)local_48.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar25 = 0;
                  goto LAB_14d54da25;
                }
              }
              else {
LAB_14d54da25:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_48,0,uVar25,4);
              }
              if (0 < (int)uVar34) {
                uVar37 = (ulonglong)uVar34;
                uVar31 = 0;
                do {
                  FVar29.Data = (FScriptContainerElement *)local_50;
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar29.Data = local_48.Data;
                  }
                  uVar16 = uVar31 & (longlong)(int)uVar34 - 1U;
                  uVar31 = uVar31 + 1;
                  *(undefined4 *)((longlong)FVar29.Data + uVar16 * 4) = 0xffffffff;
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            if (local_40 != 0) {
              pTStack_368 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
              uStack_36c = 1;
              local_370 = 0;
              iStack_35c = 0;
              iStack_358 = 0;
              if (local_60 != 0) {
                FVar32 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                if (local_68 != (ForElementType<unsigned_int>)0x0) {
                  FVar32 = local_68;
                }
                uVar25 = *(uint *)FVar32;
                iStack_358 = 0;
                local_370 = 0;
                while (uVar25 == 0) {
                  iStack_358 = iStack_358 + 0x20;
                  lVar33 = (longlong)local_370;
                  local_370 = local_370 + 1;
                  if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < local_370)
                  goto LAB_14d54db3d;
                  uVar25 = ((uint *)((longlong)FVar32 + 4))[lVar33];
                }
                uStack_36c = -uVar25 & uVar25;
                uVar31 = (ulonglong)uStack_36c * 2 + 1;
                lVar33 = 0x3f;
                if (uVar31 != 0) {
                  for (; uVar31 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                  }
                }
                local_2ec = (int)lVar33;
                iStack_35c = local_2ec + -1 + iStack_358;
                if (local_60 < iStack_35c) {
LAB_14d54db3d:
                  iStack_35c = local_60;
                }
              }
              local_360 = 0xffffffff;
              local_2b8 = (longlong *)local_88;
              local_2b0._padding_ = CONCAT44(uStack_36c,local_370);
              local_2b0.CurrentBitIndex = iStack_35c;
              local_2b0.UnvisitedBitMask = 0xffffffff;
              local_2b0._28_4_ = uStack_354;
              local_2b0.BaseBitIndex = iStack_358;
              iVar12 = iStack_35c;
              local_2b0.Array = pTStack_368;
              if (iStack_35c < local_60) {
                do {
                  lVar17 = (longlong)iVar12;
                  lVar15 = *local_2b8;
                  uVar6 = *(undefined8 *)(lVar15 + 8 + lVar17 * 0x18);
                  lVar33 = lVar15 + lVar17 * 0x18;
                  uVar31 = *(ulonglong *)(lVar15 + lVar17 * 0x18);
                  uVar25 = ((uint)(uVar31 >> 0x14) & 0xffff ^ (uint)(uVar31 >> 4)) * -0x7a143595;
                  uVar30 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
                  uVar30 = uVar30 >> 0x10 ^ uVar30;
                  uVar25 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
                  uVar25 = local_40 - 1 &
                           ((uVar30 >> 2) + 0x9e3779b9 +
                            (int)((ulonglong)uVar6 >> 0x20) + uVar30 * 0x40 + uVar25 ^ uVar30);
                  *(uint *)(lVar33 + 0x14) = uVar25;
                  FVar29.Data = (FScriptContainerElement *)local_50;
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar29.Data = local_48.Data;
                  }
                  uVar31 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar25;
                  *(undefined4 *)(lVar33 + 0x10) =
                       *(undefined4 *)((longlong)FVar29.Data + uVar31 * 4);
                  *(int *)((longlong)FVar29.Data + uVar31 * 4) = iVar12;
                  local_2b0.UnvisitedBitMask =
                       local_2b0.UnvisitedBitMask & ~local_2b0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2b0);
                  iVar12 = local_2b0.CurrentBitIndex;
                } while (local_2b0.CurrentBitIndex < (local_2b0.Array)->NumBits);
              }
            }
          }
        }
        this = local_398;
        bVar11 = SetupCustomBlendableParameterOverride(local_398,pUVar4);
        pFVar26 = local_3a0;
        if ((!bVar11) &&
           (bVar11 = SetupCameraParameterOrVariableReferenceOverride(this,pUVar4),
           pFVar26 = local_3a0, !bVar11)) {
          pUVar7 = (UObject *)pUVar4->_padding_;
          pFVar5 = this->BuildLog;
          local_2d8.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
          local_2d8.Number = *(uint *)&pUVar7->field_0x1c;
          pFVar14 = FText::FromName(&local_b0,&local_2d8);
          pFVar18 = FText::FromName(&local_a0,(FName *)&pUVar4->_padding_);
          pFVar19 = FText::FromString(&local_140,(FString *)&pUVar4->_padding_);
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_230,L"CameraObjectInterfaceBuilder",
                               L"InvalidBlendableParameterTargetProperty",
                               L"Invalid interface parameter \'{0}\', driving property \'{1}\' on \'{2}\', but no such property found."
                              );
          pFVar21 = FTextFormat::FTextFormat(&local_130,pFVar20,Default);
          pFVar14 = FText::Format<FText,FText,FText>(&local_240,pFVar21,pFVar19,pFVar18,pFVar14);
          FCameraBuildLog::AddMessage(pFVar5,Error,pUVar7,pFVar14);
          if (local_240.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
          }
          pFVar26 = local_3a0;
          this = local_398;
          if (local_230.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_230.TextData.Reference + 0x10))();
            pFVar26 = local_3a0;
            this = local_398;
          }
        }
      }
    }
LAB_14d54dd77:
    pFVar28 = local_388 + 8;
    uVar31 = (ulonglong)local_38c;
  }
  local_378 = local_398->CameraObject;
  local_38c = (local_378->Interface).DataParameters.ArrayNum;
  uVar31 = (ulonglong)(int)local_38c;
  pFVar26 = (local_378->Interface).DataParameters.AllocatorInstance.Data;
  local_388 = pFVar26 + uVar31 * 8;
  this_01 = local_398;
LAB_14d54ddc0:
  do {
    pFVar28 = local_388;
    if ((local_378->Interface).DataParameters.ArrayNum != (int)uVar31) {
      local_3a7[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceDataParameter>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_3a7);
    }
    if (pFVar26 == pFVar28) {
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      local_40 = 0;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    pUVar8 = *(UCameraObjectInterfaceDataParameter **)pFVar26;
    this_00 = (UObjectBaseUtility *)pUVar8->_padding_;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      plVar1 = &pUVar8->_padding_;
      if (pUVar8->_padding_ == 0) {
        pFVar5 = this_01->BuildLog;
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_1e0,L"CameraObjectInterfaceBuilder",
                             L"InvalidDataParameterTargetPropertyName",
                             L"Invalid interface parameter: it has not target property name.");
        FCameraBuildLog::AddMessage(pFVar5,Error,(UObject *)pUVar8,pFVar14);
        if (local_1e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
          pFVar26 = pFVar26 + 8;
          uVar31 = (ulonglong)local_38c;
          goto LAB_14d54ddc0;
        }
      }
      else if (1 < (int)pUVar8->_padding_) {
        pUVar22 = Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister();
        plVar23 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar22);
        if (plVar23 != (longlong *)0x0) {
          local_350 = (void *)0x0;
          local_348 = 0;
          local_340 = (FDataParameterInfo *)0x0;
          local_338 = 0;
          (**(code **)(*plVar23 + 0x10))(plVar23,&local_350);
          if (local_340 != local_340 + (int)local_338) {
            pFVar35 = local_340;
            do {
              if (pFVar35->ParameterName == (FName)*plVar1) {
                local_2c8.CameraObject = this_01->CameraObject;
                local_2c8.Owner = this_01;
                if (((pUVar8->PrivateDataID).Value == 0xffffffff) &&
                   (bVar11 = Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<1378543571254116556>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                        ,0xcc,"DataParameter->PrivateDataID"), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (((FName)*plVar1 != pFVar35->ParameterName) &&
                   (bVar11 = Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<1378543571254116557>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                        ,0xcd,
                                        "DataParameter->TargetPropertyName == CustomParameter.ParameterName"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                bVar11 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                         CheckIfParameterCanBeOverridden(&local_2c8,pUVar8,pFVar35);
                if (bVar11) {
                  local_270 = pFVar35->ParameterName;
                  local_268 = pUVar8->_padding_;
                  local_380[0].Value = 0xffffffff;
                  TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
                  ::RemoveAndCopyValue
                            (&(local_2c8.Owner)->OldDrivenDataParameters,
                             (TTuple<FName,UObject_*> *)&local_270,local_380);
                  pFVar35->OverrideDataID->Value = (pUVar8->PrivateDataID).Value;
                }
                if (local_340 != (FDataParameterInfo *)0x0) {
                  FMemory::Free(local_340);
                }
                if (local_350 == (void *)0x0) goto LAB_14d54e296;
                FMemory::Free(local_350);
                pFVar26 = pFVar26 + 8;
                uVar31 = (ulonglong)local_38c;
                goto LAB_14d54ddc0;
              }
              pFVar35 = pFVar35 + 1;
            } while (pFVar35 != local_340 + (int)local_338);
          }
          if (local_340 != (FDataParameterInfo *)0x0) {
            FMemory::Free(local_340);
          }
          if (local_350 != (void *)0x0) {
            FMemory::Free(local_350);
          }
        }
        bVar11 = SetupDataContextPropertyOverride(this_01,pUVar8);
        if (!bVar11) {
          pUVar7 = (UObject *)pUVar8->_padding_;
          pFVar5 = this_01->BuildLog;
          local_2d0.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
          local_2d0.Number = *(uint *)&pUVar7->field_0x1c;
          pFVar14 = FText::FromName(&local_120,&local_2d0);
          pFVar18 = FText::FromName(&local_110,(FName *)plVar1);
          pFVar19 = FText::FromString(&local_100,(FString *)&pUVar8->_padding_);
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_1c0,L"CameraObjectInterfaceBuilder",
                               L"InvalidDataParameterTargetProperty",
                               L"Invalid interface parameter \'{0}\', driving property \'{1}\' on \'{2}\', but no such property found."
                              );
          pFVar21 = FTextFormat::FTextFormat(&local_f0,pFVar20,Default);
          pFVar14 = FText::Format<FText,FText,FText>(&local_1d0,pFVar21,pFVar19,pFVar18,pFVar14);
          FCameraBuildLog::AddMessage(pFVar5,Error,pUVar7,pFVar14);
          if (local_1d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
          }
          this_01 = local_398;
          if (local_1c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
            this_01 = local_398;
          }
        }
      }
LAB_14d54e296:
      pFVar26 = pFVar26 + 8;
      uVar31 = (ulonglong)local_38c;
      goto LAB_14d54ddc0;
    }
    pFVar5 = this_01->BuildLog;
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_1f0,L"CameraObjectInterfaceBuilder",L"InvalidDataParameterTarget",
                         L"Invalid interface parameter: it has no target node.");
    local_310[0] = 3;
    local_308 = pUVar8;
    FText::FText(&local_300,pFVar14);
    pFVar28 = (pFVar5->Messages).AllocatorInstance.Data;
    if (((pFVar28 <= (FScriptContainerElement *)local_310) &&
        ((FScriptContainerElement *)local_310 <
         pFVar28 + (longlong)(pFVar5->Messages).ArrayMax * 0x20)) &&
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
    iVar12 = (pFVar5->Messages).ArrayNum;
    piVar10 = &(pFVar5->Messages).ArrayMax;
    if (iVar12 == *piVar10) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)pFVar5,piVar10);
    }
    (pFVar5->Messages).ArrayNum = iVar12 + 1;
    pFVar28 = (pFVar5->Messages).AllocatorInstance.Data + (longlong)iVar12 * 0x20;
    *(undefined4 *)pFVar28 = local_310[0];
    *(UCameraObjectInterfaceDataParameter **)(pFVar28 + 8) = local_308;
    FText::FText((FText *)(pFVar28 + 0x10),&local_300);
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
    pFVar5->bHasWarnings = true;
    if (pFVar5->bForwardToLogging != false) {
      iVar12 = (pFVar5->Messages).ArrayNum;
      uVar30 = iVar12 - 1;
      uVar25 = 0;
      if ((int)uVar30 < iVar12) {
        uVar25 = ~uVar30 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar27 = (FCameraBuildLogMessage *)
                ((pFVar5->Messages).AllocatorInstance.Data +
                (longlong)(pFVar5->Messages).ArrayNum * 0x20 + -0x20);
      TVar3 = pFVar27->Severity;
      if (TVar3 == Error) {
        if (1 < (byte)LogCameraSystem._0_1_) {
          FCameraBuildLogMessage::ToString(pFVar27,&local_200);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
          FVar29.Data = local_200.Data.AllocatorInstance.Data;
          goto LAB_14d54e074;
        }
      }
      else if ((TVar3 == PerformanceWarning) || (TVar3 == Warning)) {
        if (2 < (byte)LogCameraSystem._0_1_) {
          FCameraBuildLogMessage::ToString(pFVar27,&local_210);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
          FVar29.Data = local_210.Data.AllocatorInstance.Data;
          goto LAB_14d54e074;
        }
      }
      else if (4 < (byte)LogCameraSystem._0_1_) {
        FCameraBuildLogMessage::ToString(pFVar27,&local_220);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
        FVar29.Data = local_220.Data.AllocatorInstance.Data;
LAB_14d54e074:
        if (FVar29.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar29.Data);
        }
      }
    }
    if (local_1f0.TextData.Reference == (ITextData *)0x0) goto LAB_14d54e296;
    (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
    pFVar26 = pFVar26 + 8;
    uVar31 = (ulonglong)local_38c;
  } while( true );
}

// BuildInterfaceParameters @ 14d54e450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::BuildInterfaceParameters
          (FCameraObjectInterfaceBuilder *this)

{
  Type TVar1;
  UBaseCameraObject *pUVar2;
  UObject *pUVar3;
  FCameraBuildLog *pFVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FText *pFVar10;
  ulong64 uVar11;
  FScriptContainerElement *pFVar12;
  FCameraBuildLogMessage *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  undefined4 local_108 [2];
  UBaseCameraObject *local_100;
  FText local_f8;
  undefined4 local_e8 [2];
  UBaseCameraObject *local_e0;
  FText local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  
  pUVar2 = this->CameraObject;
  uVar16 = 0;
LAB_14d54e480:
  do {
    while( true ) {
      if (((int)uVar16 < 0) || ((pUVar2->Interface).BlendableParameters.ArrayNum <= (int)uVar16))
      goto LAB_14d54e891;
      if (((int)uVar16 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar3 = *(UObject **)
                ((pUVar2->Interface).BlendableParameters.AllocatorInstance.Data +
                (longlong)(int)uVar16 * 8);
      if (pUVar3 != (UObject *)0x0) break;
      pFVar4 = this->BuildLog;
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_98,L"CameraObjectInterfaceBuilder",L"InvalidBlendableParameter",
                           L"Invalid interface parameter was found and removed.");
      local_108[0] = 3;
      local_100 = this->CameraObject;
      FText::FText(&local_f8,pFVar10);
      pFVar12 = (pFVar4->Messages).AllocatorInstance.Data;
      if (((pFVar12 <= (FScriptContainerElement *)local_108) &&
          ((FScriptContainerElement *)local_108 <
           pFVar12 + (longlong)(pFVar4->Messages).ArrayMax * 0x20)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pFVar4->Messages).ArrayNum;
      piVar6 = &(pFVar4->Messages).ArrayMax;
      if (iVar8 == *piVar6) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)pFVar4,piVar6);
      }
      (pFVar4->Messages).ArrayNum = iVar8 + 1;
      pFVar12 = (pFVar4->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
      *(undefined4 *)pFVar12 = local_108[0];
      *(UBaseCameraObject **)(pFVar12 + 8) = local_100;
      FText::FText((FText *)(pFVar12 + 0x10),&local_f8);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      pFVar4->bHasWarnings = true;
      if (pFVar4->bForwardToLogging != false) {
        iVar8 = (pFVar4->Messages).ArrayNum;
        uVar15 = iVar8 - 1;
        uVar9 = 0;
        if ((int)uVar15 < iVar8) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = (FCameraBuildLogMessage *)
                  ((pFVar4->Messages).AllocatorInstance.Data +
                  (longlong)(pFVar4->Messages).ArrayNum * 0x20 + -0x20);
        TVar1 = pFVar13->Severity;
        if (TVar1 == Error) {
          if (1 < (byte)LogCameraSystem._0_1_) {
            FCameraBuildLogMessage::ToString(pFVar13,&local_a8);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            FVar14.Data = local_a8.Data.AllocatorInstance.Data;
            goto LAB_14d54e774;
          }
        }
        else if ((TVar1 == PerformanceWarning) || (TVar1 == Warning)) {
          if (2 < (byte)LogCameraSystem._0_1_) {
            FCameraBuildLogMessage::ToString(pFVar13,&local_b8);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            FVar14.Data = local_b8.Data.AllocatorInstance.Data;
            goto LAB_14d54e774;
          }
        }
        else if (4 < (byte)LogCameraSystem._0_1_) {
          FCameraBuildLogMessage::ToString(pFVar13,&local_c8);
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
          FVar14.Data = local_c8.Data.AllocatorInstance.Data;
LAB_14d54e774:
          if (FVar14.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar14.Data);
          }
        }
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      uVar9 = 0;
      if ((int)uVar16 < (pUVar2->Interface).BlendableParameters.ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (pUVar2->Interface).BlendableParameters.AllocatorInstance.Data +
                (longlong)(int)uVar16 * 8;
      iVar8 = (pUVar2->Interface).BlendableParameters.ArrayNum + ~uVar16;
      if (iVar8 != 0) {
        memmove(pFVar12,pFVar12 + 8,(longlong)iVar8 << 3);
      }
      piVar6 = &(pUVar2->Interface).BlendableParameters.ArrayNum;
      *piVar6 = *piVar6 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)&pUVar2->Interface,
                 (pUVar2->Interface).BlendableParameters.ArrayNum,
                 &(pUVar2->Interface).BlendableParameters.ArrayMax);
    }
    if (*(int *)&pUVar3[1].field_0x10 < 2) {
      pFVar4 = this->BuildLog;
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_88,L"CameraObjectInterfaceBuilder",
                           L"InvalidBlendableParameterName",L"Invalid interface parameter name.");
      FCameraBuildLog::AddMessage(pFVar4,Error,pUVar3,pFVar10);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        uVar16 = uVar16 + 1;
        goto LAB_14d54e480;
      }
    }
    else {
      uVar11 = CityHash64((char *)(pUVar3 + 2),0x10);
      if (*(int *)&pUVar3[2].field_0x24 != (int)uVar11) {
        *(int *)&pUVar3[2].field_0x24 = (int)uVar11;
      }
    }
    uVar16 = uVar16 + 1;
  } while( true );
LAB_14d54e891:
  pUVar2 = this->CameraObject;
  uVar16 = 0;
LAB_14d54e897:
  do {
    while( true ) {
      if (((int)uVar16 < 0) || ((pUVar2->Interface).DataParameters.ArrayNum <= (int)uVar16)) {
        return;
      }
      if (((int)uVar16 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar3 = *(UObject **)
                ((pUVar2->Interface).DataParameters.AllocatorInstance.Data +
                (longlong)(int)uVar16 * 8);
      if (pUVar3 != (UObject *)0x0) break;
      pFVar4 = this->BuildLog;
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"CameraObjectInterfaceBuilder",L"InvalidDataParameter",
                           L"Invalid interface parameter was found and removed.");
      local_e8[0] = 3;
      local_e0 = this->CameraObject;
      FText::FText(&local_d8,pFVar10);
      pFVar12 = (pFVar4->Messages).AllocatorInstance.Data;
      if (((pFVar12 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 <
           pFVar12 + (longlong)(pFVar4->Messages).ArrayMax * 0x20)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pFVar4->Messages).ArrayNum;
      piVar6 = &(pFVar4->Messages).ArrayMax;
      if (iVar8 == *piVar6) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)pFVar4,piVar6);
      }
      (pFVar4->Messages).ArrayNum = iVar8 + 1;
      pFVar12 = (pFVar4->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
      *(undefined4 *)pFVar12 = local_e8[0];
      *(UBaseCameraObject **)(pFVar12 + 8) = local_e0;
      FText::FText((FText *)(pFVar12 + 0x10),&local_d8);
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      pFVar4->bHasWarnings = true;
      if (pFVar4->bForwardToLogging != false) {
        iVar8 = (pFVar4->Messages).ArrayNum;
        uVar15 = iVar8 - 1;
        uVar9 = 0;
        if ((int)uVar15 < iVar8) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = (FCameraBuildLogMessage *)
                  ((pFVar4->Messages).AllocatorInstance.Data +
                  (longlong)(pFVar4->Messages).ArrayNum * 0x20 + -0x20);
        TVar1 = pFVar13->Severity;
        if (TVar1 == Error) {
          if (1 < (byte)LogCameraSystem._0_1_) {
            FCameraBuildLogMessage::ToString(pFVar13,&local_58);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            FVar14.Data = local_58.Data.AllocatorInstance.Data;
            goto LAB_14d54eb88;
          }
        }
        else if ((TVar1 == PerformanceWarning) || (TVar1 == Warning)) {
          if (2 < (byte)LogCameraSystem._0_1_) {
            FCameraBuildLogMessage::ToString(pFVar13,&local_68);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            FVar14.Data = local_68.Data.AllocatorInstance.Data;
            goto LAB_14d54eb88;
          }
        }
        else if (4 < (byte)LogCameraSystem._0_1_) {
          FCameraBuildLogMessage::ToString(pFVar13,&local_78);
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
          FVar14.Data = local_78.Data.AllocatorInstance.Data;
LAB_14d54eb88:
          if (FVar14.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar14.Data);
          }
        }
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      uVar9 = 0;
      if ((int)uVar16 < (pUVar2->Interface).DataParameters.ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (pUVar2->Interface).DataParameters.AllocatorInstance.Data +
                (longlong)(int)uVar16 * 8;
      iVar8 = (pUVar2->Interface).DataParameters.ArrayNum + ~uVar16;
      if (iVar8 != 0) {
        memmove(pFVar12,pFVar12 + 8,(longlong)iVar8 << 3);
      }
      piVar6 = &(pUVar2->Interface).DataParameters.ArrayNum;
      *piVar6 = *piVar6 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(pUVar2->Interface).DataParameters.AllocatorInstance,
                 (pUVar2->Interface).DataParameters.ArrayNum,
                 &(pUVar2->Interface).DataParameters.ArrayMax);
    }
    if (*(int *)&pUVar3[1].field_0x10 < 2) {
      pFVar4 = this->BuildLog;
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_38,L"CameraObjectInterfaceBuilder",L"InvalidDataParameterName",
                           L"Invalid interface parameter name.");
      FCameraBuildLog::AddMessage(pFVar4,Error,pUVar3,pFVar10);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        uVar16 = uVar16 + 1;
        goto LAB_14d54e897;
      }
    }
    else {
      uVar11 = CityHash64((char *)(pUVar3 + 2),0x10);
      if (*(int *)&pUVar3[2].field_0x20 != (int)uVar11) {
        *(int *)&pUVar3[2].field_0x20 = (int)uVar11;
      }
    }
    uVar16 = uVar16 + 1;
  } while( true );
}

// DiscardUnusedParameters @ 14d552900

void __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::DiscardUnusedParameters
          (FCameraObjectInterfaceBuilder *this)

{
  TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_148;
  undefined4 uStack_114;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  iVar10 = 0;
  iVar2 = *(int *)&(this->OldDrivenBlendableParameters).field_0x28;
  TStack_c8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->OldDrivenBlendableParameters).field_0x10;
  local_148 = 1;
  iVar11 = 0;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&(this->OldDrivenBlendableParameters).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_c8.Array;
    }
    uVar6 = *puVar14;
    iVar13 = 0;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar6 = 1;
      iVar7 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d5529b3;
      uVar6 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = local_res20 + -1 + iVar13;
    if (iVar2 < iVar7) {
      iVar7 = iVar2;
    }
  }
LAB_14d5529b3:
  uVar9 = *(uint *)&(this->OldDrivenBlendableParameters).field_0x28;
  puVar15 = &(this->OldDrivenBlendableParameters).field_0x10;
  uVar16 = uVar9 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar6,iVar11);
  TStack_c8.CurrentBitIndex = iVar7;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar9 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = iVar13;
  uStack_a8 = CONCAT44(uStack_114,
                       *(int *)&(this->OldDrivenBlendableParameters).field_0x8 -
                       *(int *)&(this->OldDrivenBlendableParameters).field_0x34);
  if ((((int)uVar9 < 0) || (iVar2 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(this->OldDrivenBlendableParameters).field_0x28;
  if (uVar9 != uVar6) {
    puVar12 = *(undefined1 **)&(this->OldDrivenBlendableParameters).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar15;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d552ae0;
      uVar9 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14d552ae0:
  while( true ) {
    if (*(int *)&(this->OldDrivenBlendableParameters).field_0x8 -
        *(int *)&(this->OldDrivenBlendableParameters).field_0x34 != (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c8.CurrentBitIndex == uVar9) &&
       (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) break;
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
           *)&this->OldDrivenBlendableParameters);
  iVar11 = 0;
  this_00 = &this->OldDrivenDataParameters;
  iVar2 = *(int *)&(this->OldDrivenDataParameters).field_0x28;
  TStack_98.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->OldDrivenDataParameters).field_0x10;
  iVar13 = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&(this->OldDrivenDataParameters).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_98.Array;
    }
    uVar6 = *puVar14;
    iVar11 = 0;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      iVar13 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d552baf;
      uVar6 = puVar14[lVar8 + 1];
    }
    local_148 = -uVar6 & uVar6;
    uVar1 = (ulonglong)local_148 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar13 = iVar11 + -1 + (int)lVar8;
    if (iVar2 < iVar13) {
      iVar13 = iVar2;
    }
  }
LAB_14d552baf:
  puVar15 = &(this->OldDrivenDataParameters).field_0x10;
  uVar6 = *(uint *)&(this->OldDrivenDataParameters).field_0x28;
  TStack_98._padding_ = CONCAT44(local_148,iVar10);
  uVar9 = uVar6 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iVar13;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar6 >> 5;
  TStack_98._28_4_ = iVar7;
  TStack_98.BaseBitIndex = iVar11;
  uStack_78 = CONCAT44(uStack_d4,
                       *(int *)&(this->OldDrivenDataParameters).field_0x8 -
                       *(int *)&(this->OldDrivenDataParameters).field_0x34);
  local_a0 = this_00;
  if ((((int)uVar6 < 0) || (iVar2 < (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar16 = *(uint *)&(this->OldDrivenDataParameters).field_0x28;
  if (uVar6 != uVar16) {
    puVar12 = *(undefined1 **)&(this->OldDrivenDataParameters).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar15;
    }
    uVar6 = -1 << ((byte)uVar6 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar13;
      uVar9 = uVar9 + 0x20;
      iVar13 = iVar13 + 1;
      uVar6 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14d552cb0;
      uVar6 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar6 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar16 < (int)uVar6) {
      uVar6 = uVar16;
    }
  }
LAB_14d552cb0:
  while( true ) {
    pTVar4 = local_a0;
    if (*(int *)(&local_a0->field_0x0 + 8) - *(int *)(&local_a0->field_0x0 + 0x34) != (int)uStack_78
       ) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar6) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) && (pTVar4 == this_00)
       ) break;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
           *)this_00);
  return;
}

// GatherOldDrivenParameters @ 14d5548f0

void __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::GatherOldDrivenParameters
          (FCameraObjectInterfaceBuilder *this)

{
  TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
  *this_00;
  TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
  *this_01;
  undefined8 *puVar1;
  UObjectBaseUtility *this_02;
  UStruct *this_03;
  FName FVar2;
  FField *pFVar3;
  int *piVar4;
  FProperty *this_04;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  UScriptStruct *pUVar7;
  void *pvVar8;
  FCameraVariableID *pFVar9;
  FName *pFVar10;
  FProperty *this_05;
  UPackage *pUVar11;
  UClass *pUVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  FProperty **ppFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined1 local_508 [16];
  void *local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  longlong local_488;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  longlong local_450;
  longlong local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined1 local_400 [8];
  undefined1 local_3f8 [8];
  undefined1 local_3f0 [8];
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [8];
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  FScriptContainerElement *local_3b8;
  undefined1 local_3b0 [16];
  int local_3a0;
  FString local_398;
  longlong local_388;
  UObjectBaseUtility *local_380;
  longlong *local_378;
  FCameraVariableID *local_370;
  longlong local_368;
  UObjectBaseUtility *local_360;
  longlong *local_358;
  FCameraVariableID *local_350;
  longlong local_348;
  UObjectBaseUtility *local_340;
  longlong *local_338;
  FCameraVariableID *local_330;
  longlong local_328;
  UObjectBaseUtility *local_320;
  longlong *local_318;
  FCameraVariableID *local_310;
  longlong local_308;
  UObjectBaseUtility *local_300;
  longlong *local_2f8;
  FCameraVariableID *local_2f0;
  longlong local_2e8;
  UObjectBaseUtility *local_2e0;
  longlong *local_2d8;
  FCameraVariableID *local_2d0;
  longlong local_2c8;
  UObjectBaseUtility *local_2c0;
  longlong *local_2b8;
  FCameraVariableID *local_2b0;
  longlong local_2a8;
  UObjectBaseUtility *local_2a0;
  longlong *local_298;
  FCameraVariableID *local_290;
  longlong local_288;
  UObjectBaseUtility *local_280;
  longlong *local_278;
  FCameraVariableID *local_270;
  longlong local_268;
  UObjectBaseUtility *local_260;
  longlong *local_258;
  FCameraVariableID *local_250;
  longlong local_248;
  UObjectBaseUtility *local_240;
  longlong *local_238;
  FCameraVariableID *local_230;
  longlong local_228;
  UObjectBaseUtility *local_220;
  longlong *local_218;
  FCameraVariableID *local_210;
  longlong local_208;
  UObjectBaseUtility *local_200;
  longlong local_1f8;
  UObjectBaseUtility *local_1f0;
  longlong *local_1e8;
  FCameraVariableID *local_1e0;
  longlong local_1d8;
  UObjectBaseUtility *local_1d0;
  longlong *local_1c8;
  FCameraVariableID *local_1c0;
  longlong local_1b8;
  UObjectBaseUtility *local_1b0;
  longlong *local_1a8;
  FCameraVariableID *local_1a0;
  longlong local_198;
  UObjectBaseUtility *local_190;
  longlong *local_188;
  FCameraVariableID *local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  longlong *local_138;
  FCameraVariableID *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8;
  UObjectBaseUtility *local_c0;
  longlong *local_b8;
  FCameraVariableID *local_b0;
  longlong local_a8;
  UObjectBaseUtility *local_a0;
  longlong *local_98;
  FField *local_90;
  undefined8 local_88;
  UObjectBaseUtility *local_80;
  undefined8 *local_78;
  int *local_70;
  undefined1 local_68 [16];
  FName local_58 [3];
  
  this_00 = &this->OldDrivenBlendableParameters;
  TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
           *)this_00);
  this_01 = &this->OldDrivenDataParameters;
  TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
           *)this_01);
  local_res18 = (this->CameraObjectNodes).ArrayNum;
  uVar14 = (ulonglong)(int)local_res18;
  pFVar19 = (this->CameraObjectNodes).AllocatorInstance.Data;
  local_3b8 = pFVar19 + uVar14 * 8;
  do {
    pFVar6 = local_3b8;
    if ((this->CameraObjectNodes).ArrayNum != (int)uVar14) {
      `TCheckedPointerIterator<UCameraNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar19 == pFVar6) {
      return;
    }
    this_02 = *(UObjectBaseUtility **)pFVar19;
    this_03 = *(UStruct **)&this_02->field_0x10;
    if (this_03 == (UStruct *)0x0) {
      local_508._8_8_ = (FProperty *)0x0;
    }
    else {
      local_508._8_8_ = this_03->ChildProperties;
    }
    local_4f8 = (void *)CONCAT17(local_4f8._7_1_,0x101ffffffff);
    local_508._0_8_ = this_03;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)local_508);
    this_04 = (FProperty *)local_508._8_8_;
    while (local_508._8_8_ = this_04, this_04 != (FProperty *)0x0) {
      if (((*(uint *)(this_04->_padding_ + 0x18) >> 0x14 & 1) == 0) || (this_04 == (FProperty *)0x0)
         ) {
LAB_14d555afe:
        bVar20 = IsThisNotNull(this_04,"FField::GetName");
        if (bVar20) {
          ::FName::ToString((FName *)&this_04->_padding_,&local_398);
        }
        else {
          ::FString::FString(&local_398,L"None");
        }
        ::FString::ConcatFC((FString *)(local_3b0 + 8),&local_398,L"DataID");
        if (local_3a0 == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = local_3a0 + -1;
        }
        pFVar10 = ::FName::FName(local_58,iVar15,(wchar_t *)local_3b0._8_8_,FNAME_Add);
        FVar2 = *pFVar10;
        if ((FCameraContextDataID *)local_3b0._8_8_ != (FCameraContextDataID *)0x0) {
          FMemory::Free((void *)local_3b0._8_8_);
        }
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
        this_05 = UStruct::FindPropertyByName(this_03,FVar2);
        if ((this_05 != (FProperty *)0x0) &&
           ((*(uint *)(this_05->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
          if (Z_Registration_Info_UScriptStruct_FCameraContextDataID.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
            Z_Registration_Info_UScriptStruct_FCameraContextDataID.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FCameraContextDataID,(UObject *)pUVar11,
                                 L"CameraContextDataID");
          }
          if ((UScriptStruct *)this_05[1]._padding_ == (UScriptStruct *)0x0) {
            bVar20 = Z_Registration_Info_UScriptStruct_FCameraContextDataID.OuterSingleton ==
                     (UScriptStruct *)0x0;
          }
          else {
            bVar20 = (UScriptStruct *)this_05[1]._padding_ ==
                     Z_Registration_Info_UScriptStruct_FCameraContextDataID.OuterSingleton;
          }
          if ((bVar20) &&
             (pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                 (this_05,(UObject *)this_02,0), pFVar9->Value != 0xffffffff)) {
            bVar20 = IsThisNotNull(this_04,"FField::GetFName");
            if (bVar20) {
              local_460 = this_04->_padding_;
            }
            else {
              local_460 = 0;
            }
            local_b8 = &local_c8;
            local_c8 = local_460;
            local_c0 = this_02;
            local_b0 = pFVar9;
            TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraContextDataID_const_&>_>
                      ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
                        *)this_01,
                       (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraContextDataID_const_&> *)
                       local_3c8,(bool *)&local_b8);
            goto LAB_14d555c84;
          }
        }
      }
      else {
        pUVar7 = FBooleanCameraParameter::StaticStruct();
        if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
          bVar20 = pUVar7 == (UScriptStruct *)0x0;
        }
        else {
          bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
        }
        if (bVar20) {
          pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_04,(UObject *)this_02,0);
          pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 4);
          if ((*(int *)((longlong)pvVar8 + 4) != -1) && (*(longlong *)((longlong)pvVar8 + 8) == 0))
          {
            bVar20 = IsThisNotNull(this_04,"FField::GetFName");
            if (bVar20) {
              local_458 = this_04->_padding_;
            }
            else {
              local_458 = 0;
            }
            local_378 = &local_388;
            local_388 = local_458;
            local_380 = this_02;
            local_370 = pFVar9;
            TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                      ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&> *)
                       &stack0x00000020,(bool *)&local_378);
LAB_14d555c84:
            pFVar9->Value = 0xffffffff;
          }
        }
        else {
          pUVar7 = FBooleanCameraVariableReference::StaticStruct();
          if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
            bVar20 = pUVar7 == (UScriptStruct *)0x0;
          }
          else {
            bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
          }
          if (bVar20) {
            pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_04,(UObject *)this_02,0);
            if ((pFVar9->Value != 0xffffffff) && (*(longlong *)(pFVar9 + 2) == 0)) {
              bVar20 = IsThisNotNull(this_04,"FField::GetFName");
              if (bVar20) {
                local_450 = this_04->_padding_;
              }
              else {
                local_450 = 0;
              }
              local_358 = &local_368;
              local_368 = local_450;
              local_360 = this_02;
              local_350 = pFVar9;
              TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                        ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                          *)this_00,
                         (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&> *)
                         (local_3d8 + 4),(bool *)&local_358);
              goto LAB_14d555c84;
            }
          }
          else {
            pUVar7 = FInteger32CameraParameter::StaticStruct();
            if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
              bVar20 = pUVar7 == (UScriptStruct *)0x0;
            }
            else {
              bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
            }
            if (bVar20) {
              pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                 (this_04,(UObject *)this_02,0);
              pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 4);
              if ((*(int *)((longlong)pvVar8 + 4) != -1) &&
                 (*(longlong *)((longlong)pvVar8 + 8) == 0)) {
                bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                if (bVar20) {
                  local_448 = this_04->_padding_;
                }
                else {
                  local_448 = 0;
                }
                local_338 = &local_348;
                local_348 = local_448;
                local_340 = this_02;
                local_330 = pFVar9;
                TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                          ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                            *)this_00,
                           (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&> *
                           )local_400,(bool *)&local_338);
                goto LAB_14d555c84;
              }
            }
            else {
              pUVar7 = FInteger32CameraVariableReference::StaticStruct();
              if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                bVar20 = pUVar7 == (UScriptStruct *)0x0;
              }
              else {
                bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
              }
              if (bVar20) {
                pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                   (this_04,(UObject *)this_02,0);
                if ((pFVar9->Value != 0xffffffff) && (*(longlong *)(pFVar9 + 2) == 0)) {
                  bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                  if (bVar20) {
                    local_440 = this_04->_padding_;
                  }
                  else {
                    local_440 = 0;
                  }
                  local_318 = &local_328;
                  local_328 = local_440;
                  local_320 = this_02;
                  local_310 = pFVar9;
                  TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                            ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                              *)this_00,
                             (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                              *)(local_400 + 4),(bool *)&local_318);
                  goto LAB_14d555c84;
                }
              }
              else {
                pUVar7 = FFloatCameraParameter::StaticStruct();
                if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                  bVar20 = pUVar7 == (UScriptStruct *)0x0;
                }
                else {
                  bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                }
                if (bVar20) {
                  pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_04,(UObject *)this_02,0);
                  pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 4);
                  if ((*(int *)((longlong)pvVar8 + 4) != -1) &&
                     (*(longlong *)((longlong)pvVar8 + 8) == 0)) {
                    bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                    if (bVar20) {
                      local_438 = this_04->_padding_;
                    }
                    else {
                      local_438 = 0;
                    }
                    local_2f8 = &local_308;
                    local_308 = local_438;
                    local_300 = this_02;
                    local_2f0 = pFVar9;
                    TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                    ::
                    Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                              ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                *)this_00,
                               (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                *)local_3f8,(bool *)&local_2f8);
                    goto LAB_14d555c84;
                  }
                }
                else {
                  pUVar7 = FFloatCameraVariableReference::StaticStruct();
                  if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                    bVar20 = pUVar7 == (UScriptStruct *)0x0;
                  }
                  else {
                    bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                  }
                  if (bVar20) {
                    pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                       (this_04,(UObject *)this_02,0);
                    if ((pFVar9->Value != 0xffffffff) && (*(longlong *)(pFVar9 + 2) == 0)) {
                      bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                      if (bVar20) {
                        local_430 = this_04->_padding_;
                      }
                      else {
                        local_430 = 0;
                      }
                      local_2d8 = &local_2e8;
                      local_2e8 = local_430;
                      local_2e0 = this_02;
                      local_2d0 = pFVar9;
                      TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                      ::
                      Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                  *)this_00,
                                 (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                  *)(local_3f8 + 4),(bool *)&local_2d8);
                      goto LAB_14d555c84;
                    }
                  }
                  else {
                    pUVar7 = FDoubleCameraParameter::StaticStruct();
                    if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                      bVar20 = pUVar7 == (UScriptStruct *)0x0;
                    }
                    else {
                      bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                    }
                    if (bVar20) {
                      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                         (this_04,(UObject *)this_02,0);
                      pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 8);
                      if ((*(int *)((longlong)pvVar8 + 8) != -1) &&
                         (*(longlong *)((longlong)pvVar8 + 0x10) == 0)) {
                        bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                        if (bVar20) {
                          local_428 = this_04->_padding_;
                        }
                        else {
                          local_428 = 0;
                        }
                        local_2b8 = &local_2c8;
                        local_2c8 = local_428;
                        local_2c0 = this_02;
                        local_2b0 = pFVar9;
                        TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                        ::
                        Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                  ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                    *)this_00,
                                   (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                    *)local_3f0,(bool *)&local_2b8);
                        goto LAB_14d555c84;
                      }
                    }
                    else {
                      pUVar7 = FDoubleCameraVariableReference::StaticStruct();
                      if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                        bVar20 = pUVar7 == (UScriptStruct *)0x0;
                      }
                      else {
                        bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                      }
                      if (bVar20) {
                        pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                           (this_04,(UObject *)this_02,0);
                        if ((pFVar9->Value != 0xffffffff) && (*(longlong *)(pFVar9 + 2) == 0)) {
                          bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                          if (bVar20) {
                            local_4e8 = this_04->_padding_;
                          }
                          else {
                            local_4e8 = 0;
                          }
                          local_298 = &local_2a8;
                          local_2a8 = local_4e8;
                          local_2a0 = this_02;
                          local_290 = pFVar9;
                          TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                          ::
                          Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                    ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                      *)this_00,
                                     (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                      *)(local_3c0 + 4),(bool *)&local_298);
                          goto LAB_14d555c84;
                        }
                      }
                      else {
                        pUVar7 = FVector2fCameraParameter::StaticStruct();
                        if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                          bVar20 = pUVar7 == (UScriptStruct *)0x0;
                        }
                        else {
                          bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                        }
                        if (bVar20) {
                          pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                             (this_04,(UObject *)this_02,0);
                          pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 8);
                          if ((*(int *)((longlong)pvVar8 + 8) != -1) &&
                             (*(longlong *)((longlong)pvVar8 + 0x10) == 0)) {
                            bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                            if (bVar20) {
                              local_418 = this_04->_padding_;
                            }
                            else {
                              local_418 = 0;
                            }
                            local_278 = &local_288;
                            local_288 = local_418;
                            local_280 = this_02;
                            local_270 = pFVar9;
                            TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                            ::
                            Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                      ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                        *)this_00,
                                       (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                        *)(local_3f0 + 4),(bool *)&local_278);
                            goto LAB_14d555c84;
                          }
                        }
                        else {
                          pUVar7 = FVector2fCameraVariableReference::StaticStruct();
                          if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                            bVar20 = pUVar7 == (UScriptStruct *)0x0;
                          }
                          else {
                            bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                          }
                          if (bVar20) {
                            pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                               (this_04,(UObject *)this_02,0);
                            if ((pFVar9->Value != 0xffffffff) && (*(longlong *)(pFVar9 + 2) == 0)) {
                              bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                              if (bVar20) {
                                local_410 = this_04->_padding_;
                              }
                              else {
                                local_410 = 0;
                              }
                              local_258 = &local_268;
                              local_268 = local_410;
                              local_260 = this_02;
                              local_250 = pFVar9;
                              TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                              ::
                              Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                        ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                          *)this_00,
                                         (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                          *)local_3e8,(bool *)&local_258);
                              goto LAB_14d555c84;
                            }
                          }
                          else {
                            pUVar7 = FVector2dCameraParameter::StaticStruct();
                            if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                              bVar20 = pUVar7 == (UScriptStruct *)0x0;
                            }
                            else {
                              bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                            }
                            if (bVar20) {
                              pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                                 (this_04,(UObject *)this_02,0);
                              pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 0x10);
                              if ((*(int *)((longlong)pvVar8 + 0x10) != -1) &&
                                 (*(longlong *)((longlong)pvVar8 + 0x18) == 0)) {
                                bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                if (bVar20) {
                                  local_408 = this_04->_padding_;
                                }
                                else {
                                  local_408 = 0;
                                }
                                local_238 = &local_248;
                                local_248 = local_408;
                                local_240 = this_02;
                                local_230 = pFVar9;
                                TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                ::
                                Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                          ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                            *)this_00,
                                           (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                            *)(local_3e8 + 4),(bool *)&local_238);
                                goto LAB_14d555c84;
                              }
                            }
                            else {
                              pUVar7 = FVector2dCameraVariableReference::StaticStruct();
                              if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                                bVar20 = pUVar7 == (UScriptStruct *)0x0;
                              }
                              else {
                                bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                              }
                              if (bVar20) {
                                pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                                   (this_04,(UObject *)this_02,0);
                                if ((pFVar9->Value != 0xffffffff) &&
                                   (*(longlong *)(pFVar9 + 2) == 0)) {
                                  bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                  if (bVar20) {
                                    local_4e0 = this_04->_padding_;
                                  }
                                  else {
                                    local_4e0 = 0;
                                  }
                                  local_218 = &local_228;
                                  local_228 = local_4e0;
                                  local_220 = this_02;
                                  local_210 = pFVar9;
                                  TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                  ::
                                  Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                            ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                              *)this_00,
                                             (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                              *)local_3e0,(bool *)&local_218);
                                  goto LAB_14d555c84;
                                }
                              }
                              else {
                                pUVar7 = FVector3fCameraParameter::StaticStruct();
                                if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0) {
                                  bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                }
                                else {
                                  bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                                }
                                if (bVar20) {
                                  pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                                     (this_04,(UObject *)this_02,0);
                                  pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 0xc);
                                  if ((*(int *)((longlong)pvVar8 + 0xc) != -1) &&
                                     (*(longlong *)((longlong)pvVar8 + 0x10) == 0)) {
                                    bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                    if (bVar20) {
                                      local_4d8 = this_04->_padding_;
                                    }
                                    else {
                                      local_4d8 = 0;
                                    }
                                    local_138 = &local_208;
                                    local_208 = local_4d8;
                                    local_200 = this_02;
                                    local_130 = pFVar9;
                                    TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                    ::
                                    Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                              ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                                *)this_00,
                                               (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                                *)(local_3e0 + 4),(bool *)&local_138);
                                    goto LAB_14d555c84;
                                  }
                                }
                                else {
                                  pUVar7 = FVector3fCameraVariableReference::StaticStruct();
                                  if ((UScriptStruct *)this_04[1]._padding_ == (UScriptStruct *)0x0)
                                  {
                                    bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                  }
                                  else {
                                    bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                                  }
                                  if (bVar20) {
                                    pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                                       (this_04,(UObject *)this_02,0);
                                    if ((pFVar9->Value != 0xffffffff) &&
                                       (*(longlong *)(pFVar9 + 2) == 0)) {
                                      bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                      if (bVar20) {
                                        local_4b8 = this_04->_padding_;
                                      }
                                      else {
                                        local_4b8 = 0;
                                      }
                                      local_1e8 = &local_1f8;
                                      local_1f8 = local_4b8;
                                      local_1f0 = this_02;
                                      local_1e0 = pFVar9;
                                      TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                      ::
                                      Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                                ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                                  *)this_00,
                                                 (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                                  *)local_3d8,(bool *)&local_1e8);
                                      goto LAB_14d555c84;
                                    }
                                  }
                                  else {
                                    pUVar7 = FVector3dCameraParameter::StaticStruct();
                                    if ((UScriptStruct *)this_04[1]._padding_ ==
                                        (UScriptStruct *)0x0) {
                                      bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                    }
                                    else {
                                      bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                                    }
                                    if (bVar20) {
                                      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                                         (this_04,(UObject *)this_02,0);
                                      pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 0x18);
                                      if ((*(int *)((longlong)pvVar8 + 0x18) != -1) &&
                                         (*(longlong *)((longlong)pvVar8 + 0x20) == 0)) {
                                        bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                        if (bVar20) {
                                          local_4d0 = this_04->_padding_;
                                        }
                                        else {
                                          local_4d0 = 0;
                                        }
                                        local_1c8 = &local_1d8;
                                        local_1d8 = local_4d0;
                                        local_1d0 = this_02;
                                        local_1c0 = pFVar9;
                                        TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                        ::
                                        Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                                  ((
                                                  TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                                  *)this_00,
                                                  (
                                                  TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                                  *)local_3c0,(bool *)&local_1c8);
                                        goto LAB_14d555c84;
                                      }
                                    }
                                    else {
                                      pUVar7 = FVector3dCameraVariableReference::StaticStruct();
                                      if ((UScriptStruct *)this_04[1]._padding_ ==
                                          (UScriptStruct *)0x0) {
                                        bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                      }
                                      else {
                                        bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                                      }
                                      if (bVar20) {
                                        pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                                           (this_04,(UObject *)this_02,0);
                                        if ((pFVar9->Value != 0xffffffff) &&
                                           (*(longlong *)(pFVar9 + 2) == 0)) {
                                          bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                          if (bVar20) {
                                            local_4c8 = this_04->_padding_;
                                          }
                                          else {
                                            local_4c8 = 0;
                                          }
                                          local_1a8 = &local_1b8;
                                          local_1b8 = local_4c8;
                                          local_1b0 = this_02;
                                          local_1a0 = pFVar9;
                                          TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                          ::
                                          Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                                    ((
                                                  TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                                  *)this_00,
                                                  (
                                                  TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                                  *)local_3d0,(bool *)&local_1a8);
                                          goto LAB_14d555c84;
                                        }
                                      }
                                      else {
                                        pUVar7 = FVector4fCameraParameter::StaticStruct();
                                        if ((UScriptStruct *)this_04[1]._padding_ ==
                                            (UScriptStruct *)0x0) {
                                          bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                        }
                                        else {
                                          bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7;
                                        }
                                        if (bVar20) {
                                          pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                                             (this_04,(UObject *)this_02,0);
                                          pFVar9 = (FCameraVariableID *)((longlong)pvVar8 + 0x10);
                                          if ((*(int *)((longlong)pvVar8 + 0x10) != -1) &&
                                             (*(longlong *)((longlong)pvVar8 + 0x18) == 0)) {
                                            bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                            if (bVar20) {
                                              local_4c0 = this_04->_padding_;
                                            }
                                            else {
                                              local_4c0 = 0;
                                            }
                                            local_188 = &local_198;
                                            local_198 = local_4c0;
                                            local_190 = this_02;
                                            local_180 = pFVar9;
                                            TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                            ::
                                            Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                                                      ((
                                                  TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                                                  *)this_00,
                                                  (
                                                  TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>
                                                  *)(local_3d0 + 4),(bool *)&local_188);
                                            goto LAB_14d555c84;
                                          }
                                        }
                                        else {
                                          pUVar7 = FVector4fCameraVariableReference::StaticStruct();
                                          if ((UScriptStruct *)this_04[1]._padding_ ==
                                              (UScriptStruct *)0x0) {
                                            bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                          }
                                          else {
                                            bVar20 = (UScriptStruct *)this_04[1]._padding_ == pUVar7
                                            ;
                                          }
                                          if (bVar20) {
                                            pFVar9 = FProperty::
                                                     ContainerUObjectPtrToValuePtrInternal
                                                               (this_04,(UObject *)this_02,0);
                                            if ((pFVar9->Value != 0xffffffff) &&
                                               (*(longlong *)(pFVar9 + 2) == 0)) {
                                              bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                              if (bVar20) {
                                                local_4b0 = this_04->_padding_;
                                              }
                                              else {
                                                local_4b0 = 0;
                                              }
                                              local_178._0_8_ = local_4b0;
                                              local_178._8_8_ = this_02;
                                              TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                              ::
                                              Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                        ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_178,
                                                  pFVar9);
                                              goto LAB_14d555c84;
                                            }
                                          }
                                          else {
                                            pUVar7 = FVector4dCameraParameter::StaticStruct();
                                            if ((UScriptStruct *)this_04[1]._padding_ ==
                                                (UScriptStruct *)0x0) {
                                              bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                            }
                                            else {
                                              bVar20 = (UScriptStruct *)this_04[1]._padding_ ==
                                                       pUVar7;
                                            }
                                            if (bVar20) {
                                              pvVar8 = FProperty::
                                                       ContainerUObjectPtrToValuePtrInternal
                                                                 (this_04,(UObject *)this_02,0);
                                              pFVar9 = (FCameraVariableID *)
                                                       ((longlong)pvVar8 + 0x20);
                                              if ((*(int *)((longlong)pvVar8 + 0x20) != -1) &&
                                                 (*(longlong *)((longlong)pvVar8 + 0x28) == 0)) {
                                                bVar20 = IsThisNotNull(this_04,"FField::GetFName");
                                                if (bVar20) {
                                                  local_4a8 = this_04->_padding_;
                                                }
                                                else {
                                                  local_4a8 = 0;
                                                }
                                                local_168._0_8_ = local_4a8;
                                                local_168._8_8_ = this_02;
                                                TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                ::
                                                Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                          ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_168,
                                                  pFVar9);
                                                goto LAB_14d555c84;
                                              }
                                            }
                                            else {
                                              pUVar7 = FVector4dCameraVariableReference::
                                                       StaticStruct();
                                              if ((UScriptStruct *)this_04[1]._padding_ ==
                                                  (UScriptStruct *)0x0) {
                                                bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                              }
                                              else {
                                                bVar20 = (UScriptStruct *)this_04[1]._padding_ ==
                                                         pUVar7;
                                              }
                                              if (bVar20) {
                                                pFVar9 = FProperty::
                                                         ContainerUObjectPtrToValuePtrInternal
                                                                   (this_04,(UObject *)this_02,0);
                                                if ((pFVar9->Value != 0xffffffff) &&
                                                   (*(longlong *)(pFVar9 + 2) == 0)) {
                                                  bVar20 = IsThisNotNull(this_04,"FField::GetFName")
                                                  ;
                                                  if (bVar20) {
                                                    local_4a0 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_4a0 = 0;
                                                  }
                                                  local_158._0_8_ = local_4a0;
                                                  local_158._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_158,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                }
                                              }
                                              else {
                                                pUVar7 = FRotator3fCameraParameter::StaticStruct();
                                                if ((UScriptStruct *)this_04[1]._padding_ ==
                                                    (UScriptStruct *)0x0) {
                                                  bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                                }
                                                else {
                                                  bVar20 = (UScriptStruct *)this_04[1]._padding_ ==
                                                           pUVar7;
                                                }
                                                if (bVar20) {
                                                  pvVar8 = FProperty::
                                                           ContainerUObjectPtrToValuePtrInternal
                                                                     (this_04,(UObject *)this_02,0);
                                                  pFVar9 = (FCameraVariableID *)
                                                           ((longlong)pvVar8 + 0xc);
                                                  if ((*(int *)((longlong)pvVar8 + 0xc) != -1) &&
                                                     (*(longlong *)((longlong)pvVar8 + 0x10) == 0))
                                                  {
                                                    bVar20 = IsThisNotNull(this_04,
                                                  "FField::GetFName");
                                                  if (bVar20) {
                                                    local_498 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_498 = 0;
                                                  }
                                                  local_148._0_8_ = local_498;
                                                  local_148._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_148,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                  }
                                                }
                                                else {
                                                  pUVar7 = FRotator3fCameraVariableReference::
                                                           StaticStruct();
                                                  if ((UScriptStruct *)this_04[1]._padding_ ==
                                                      (UScriptStruct *)0x0) {
                                                    bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                                  }
                                                  else {
                                                    bVar20 = (UScriptStruct *)this_04[1]._padding_
                                                             == pUVar7;
                                                  }
                                                  if (bVar20) {
                                                    pFVar9 = FProperty::
                                                             ContainerUObjectPtrToValuePtrInternal
                                                                       (this_04,(UObject *)this_02,0
                                                                       );
                                                    if ((pFVar9->Value != 0xffffffff) &&
                                                       (*(longlong *)(pFVar9 + 2) == 0)) {
                                                      bVar20 = IsThisNotNull(this_04,
                                                  "FField::GetFName");
                                                  if (bVar20) {
                                                    local_490 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_490 = 0;
                                                  }
                                                  local_68._0_8_ = local_490;
                                                  local_68._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_68,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                  }
                                                  }
                                                  else {
                                                    pUVar7 = FRotator3dCameraParameter::StaticStruct
                                                                       ();
                                                    if ((UScriptStruct *)this_04[1]._padding_ ==
                                                        (UScriptStruct *)0x0) {
                                                      bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                                    }
                                                    else {
                                                      bVar20 = (UScriptStruct *)this_04[1]._padding_
                                                               == pUVar7;
                                                    }
                                                    if (bVar20) {
                                                      pvVar8 = FProperty::
                                                               ContainerUObjectPtrToValuePtrInternal
                                                                         (this_04,(UObject *)this_02
                                                                          ,0);
                                                      pFVar9 = (FCameraVariableID *)
                                                               ((longlong)pvVar8 + 0x18);
                                                      if ((*(int *)((longlong)pvVar8 + 0x18) != -1)
                                                         && (*(longlong *)((longlong)pvVar8 + 0x20)
                                                             == 0)) {
                                                        bVar20 = IsThisNotNull(this_04,
                                                  "FField::GetFName");
                                                  if (bVar20) {
                                                    local_488 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_488 = 0;
                                                  }
                                                  local_128._0_8_ = local_488;
                                                  local_128._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_128,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                  }
                                                  }
                                                  else {
                                                    pUVar7 = FRotator3dCameraVariableReference::
                                                             StaticStruct();
                                                    if ((UScriptStruct *)this_04[1]._padding_ ==
                                                        (UScriptStruct *)0x0) {
                                                      bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                                    }
                                                    else {
                                                      bVar20 = (UScriptStruct *)this_04[1]._padding_
                                                               == pUVar7;
                                                    }
                                                    if (bVar20) {
                                                      pFVar9 = FProperty::
                                                               ContainerUObjectPtrToValuePtrInternal
                                                                         (this_04,(UObject *)this_02
                                                                          ,0);
                                                      if ((pFVar9->Value != 0xffffffff) &&
                                                         (*(longlong *)(pFVar9 + 2) == 0)) {
                                                        bVar20 = IsThisNotNull(this_04,
                                                  "FField::GetFName");
                                                  if (bVar20) {
                                                    local_480 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_480 = 0;
                                                  }
                                                  local_118._0_8_ = local_480;
                                                  local_118._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_118,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                  }
                                                  }
                                                  else {
                                                    pUVar7 = FTransform3fCameraParameter::
                                                             StaticStruct();
                                                    if ((UScriptStruct *)this_04[1]._padding_ ==
                                                        (UScriptStruct *)0x0) {
                                                      bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                                    }
                                                    else {
                                                      bVar20 = (UScriptStruct *)this_04[1]._padding_
                                                               == pUVar7;
                                                    }
                                                    if (bVar20) {
                                                      pvVar8 = FProperty::
                                                               ContainerUObjectPtrToValuePtrInternal
                                                                         (this_04,(UObject *)this_02
                                                                          ,0);
                                                      pFVar9 = (FCameraVariableID *)
                                                               ((longlong)pvVar8 + 0x30);
                                                      if ((*(int *)((longlong)pvVar8 + 0x30) != -1)
                                                         && (*(longlong *)((longlong)pvVar8 + 0x38)
                                                             == 0)) {
                                                        bVar20 = IsThisNotNull(this_04,
                                                  "FField::GetFName");
                                                  if (bVar20) {
                                                    local_478 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_478 = 0;
                                                  }
                                                  local_108._0_8_ = local_478;
                                                  local_108._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_108,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                  }
                                                  }
                                                  else {
                                                    pUVar7 = FTransform3fCameraVariableReference::
                                                             StaticStruct();
                                                    if ((UScriptStruct *)this_04[1]._padding_ ==
                                                        (UScriptStruct *)0x0) {
                                                      bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                                    }
                                                    else {
                                                      bVar20 = (UScriptStruct *)this_04[1]._padding_
                                                               == pUVar7;
                                                    }
                                                    if (bVar20) {
                                                      pFVar9 = FProperty::
                                                               ContainerUObjectPtrToValuePtrInternal
                                                                         (this_04,(UObject *)this_02
                                                                          ,0);
                                                      if ((pFVar9->Value != 0xffffffff) &&
                                                         (*(longlong *)(pFVar9 + 2) == 0)) {
                                                        bVar20 = IsThisNotNull(this_04,
                                                  "FField::GetFName");
                                                  if (bVar20) {
                                                    local_470 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_470 = 0;
                                                  }
                                                  local_f8._0_8_ = local_470;
                                                  local_f8._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_f8,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                  }
                                                  }
                                                  else {
                                                    pUVar7 = FTransform3dCameraParameter::
                                                             StaticStruct();
                                                    if ((UScriptStruct *)this_04[1]._padding_ ==
                                                        (UScriptStruct *)0x0) {
                                                      bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                                    }
                                                    else {
                                                      bVar20 = (UScriptStruct *)this_04[1]._padding_
                                                               == pUVar7;
                                                    }
                                                    if (bVar20) {
                                                      pvVar8 = FProperty::
                                                               ContainerUObjectPtrToValuePtrInternal
                                                                         (this_04,(UObject *)this_02
                                                                          ,0);
                                                      pFVar9 = (FCameraVariableID *)
                                                               ((longlong)pvVar8 + 0x60);
                                                      if ((*(int *)((longlong)pvVar8 + 0x60) != -1)
                                                         && (*(longlong *)((longlong)pvVar8 + 0x68)
                                                             == 0)) {
                                                        bVar20 = IsThisNotNull(this_04,
                                                  "FField::GetFName");
                                                  if (bVar20) {
                                                    local_420 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_420 = 0;
                                                  }
                                                  local_e8._0_8_ = local_420;
                                                  local_e8._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_e8,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                  }
                                                  }
                                                  else {
                                                    pUVar7 = FTransform3dCameraVariableReference::
                                                             StaticStruct();
                                                    if ((UScriptStruct *)this_04[1]._padding_ ==
                                                        (UScriptStruct *)0x0) {
                                                      bVar20 = pUVar7 == (UScriptStruct *)0x0;
                                                    }
                                                    else {
                                                      bVar20 = (UScriptStruct *)this_04[1]._padding_
                                                               == pUVar7;
                                                    }
                                                    if (!bVar20) goto LAB_14d555afe;
                                                    pFVar9 = FProperty::
                                                             ContainerUObjectPtrToValuePtrInternal
                                                                       (this_04,(UObject *)this_02,0
                                                                       );
                                                    if ((pFVar9->Value != 0xffffffff) &&
                                                       (*(longlong *)(pFVar9 + 2) == 0)) {
                                                      bVar20 = IsThisNotNull(this_04,
                                                  "FField::GetFName");
                                                  if (bVar20) {
                                                    local_468 = this_04->_padding_;
                                                  }
                                                  else {
                                                    local_468 = 0;
                                                  }
                                                  local_d8._0_8_ = local_468;
                                                  local_d8._8_8_ = this_02;
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  ::
                                                  Emplace<TTuple<FName,UObject_*>,FCameraVariableID_const_&>
                                                            ((
                                                  TMapBase<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                                                  *)this_00,(TTuple<FName,UObject_*> *)local_d8,
                                                  pFVar9);
                                                  goto LAB_14d555c84;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_508._8_8_ = this_04->_padding_;
      TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)local_508);
      this_04 = (FProperty *)local_508._8_8_;
    }
    pUVar12 = Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister();
    plVar13 = UObjectBaseUtility::GetInterfaceAddress(this_02,pUVar12);
    if (plVar13 != (longlong *)0x0) {
      local_508._0_8_ = (UStruct *)0x0;
      local_508._8_8_ = (FProperty *)0x0;
      local_4f8 = (void *)0x0;
      local_4f0 = 0;
      (**(code **)(*plVar13 + 0x10))(plVar13,local_508);
      uVar5 = local_508._8_4_;
      lVar18 = (longlong)(int)local_508._8_4_;
      ppFVar16 = (FProperty **)(local_508._0_8_ + 0x20);
      plVar13 = (longlong *)local_508._0_8_;
      while( true ) {
        if (local_508._8_4_ != uVar5) {
          `TCheckedPointerIterator<FCustomCameraNodeParameterInfos::FBlendableParameterInfo,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((UStruct *)(ppFVar16 + -4) == (UStruct *)(plVar13 + lVar18 * 6)) break;
        pFVar3 = (FField *)*ppFVar16;
        if ((pFVar3 != (FField *)0x0) && ((int)pFVar3->_padding_ != -1)) {
          local_a8 = ((UStruct *)(ppFVar16 + -4))->_padding_;
          local_98 = &local_a8;
          local_a0 = this_02;
          local_90 = pFVar3;
          TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
                    ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
                      *)this_00,
                     (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&> *)
                     (local_3c8 + 4),(bool *)&local_98);
          *(undefined4 *)&((FField *)*ppFVar16)->_padding_ = 0xffffffff;
        }
        ppFVar16 = ppFVar16 + 6;
      }
      iVar15 = (int)local_4f0;
      puVar17 = (undefined8 *)((longlong)local_4f8 + 0x20);
      puVar1 = (undefined8 *)((longlong)local_4f8 + (longlong)(int)local_4f0 * 0x28);
      while( true ) {
        if ((int)local_4f0 != iVar15) {
          `TCheckedPointerIterator<FCustomCameraNodeParameterInfos::FDataParameterInfo,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (puVar17 + -4 == puVar1) break;
        piVar4 = (int *)*puVar17;
        if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
          local_88 = puVar17[-4];
          local_78 = &local_88;
          local_80 = this_02;
          local_70 = piVar4;
          TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraContextDataID_const_&>_>
                    ((TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
                      *)this_01,
                     (TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraContextDataID_const_&> *)
                     local_3b0,(bool *)&local_78);
          *(undefined4 *)*puVar17 = 0xffffffff;
        }
        puVar17 = puVar17 + 5;
      }
      if (local_4f8 != (void *)0x0) {
        FMemory::Free(local_4f8);
      }
      if ((UStruct *)local_508._0_8_ != (UStruct *)0x0) {
        FMemory::Free((void *)local_508._0_8_);
      }
    }
    pFVar19 = pFVar19 + 8;
    uVar14 = (ulonglong)local_res18;
  } while( true );
}

// SetupCameraParameterOrVariableReferenceOverride @ 14d565350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::SetupCameraParameterOrVariableReferenceOverride
          (FCameraObjectInterfaceBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1)

{
  UObject *pUVar1;
  FCameraBuildLog *pFVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  undefined1 uVar5;
  FStructProperty *this_00;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  UScriptStruct *pUVar11;
  FBooleanCameraParameter *pFVar12;
  FBooleanCameraVariableReference *pFVar13;
  FInteger32CameraParameter *pFVar14;
  FInteger32CameraVariableReference *pFVar15;
  FFloatCameraParameter *pFVar16;
  FFloatCameraVariableReference *pFVar17;
  FDoubleCameraParameter *pFVar18;
  FDoubleCameraVariableReference *pFVar19;
  FVector2fCameraParameter *pFVar20;
  FVector2fCameraVariableReference *pFVar21;
  FVector2dCameraParameter *pFVar22;
  FVector2dCameraVariableReference *pFVar23;
  FVector3fCameraParameter *pFVar24;
  FVector3fCameraVariableReference *pFVar25;
  FVector3dCameraParameter *pFVar26;
  FVector3dCameraVariableReference *pFVar27;
  FVector4fCameraParameter *pFVar28;
  FVector4fCameraVariableReference *pFVar29;
  FVector4dCameraParameter *pFVar30;
  FVector4dCameraVariableReference *pFVar31;
  FRotator3fCameraParameter *pFVar32;
  FRotator3fCameraVariableReference *pFVar33;
  FRotator3dCameraParameter *pFVar34;
  longlong lVar35;
  FRotator3dCameraVariableReference *pFVar36;
  FName FVar37;
  FTransform3fCameraParameter *pFVar38;
  FTransform3fCameraVariableReference *pFVar39;
  FTransform3dCameraParameter *pFVar40;
  FTransform3dCameraVariableReference *pFVar41;
  longlong lVar42;
  bool bVar43;
  FCameraVariableID local_res10 [2];
  FCameraVariableID local_res18 [2];
  FCameraVariableID local_res20 [2];
  FInterfaceParameterBindingBuilder local_318;
  FCameraVariableID local_308;
  FCameraVariableID local_304;
  FCameraVariableID local_300;
  FCameraVariableID local_2fc;
  FCameraVariableID local_2f8;
  FCameraVariableID local_2f4;
  FCameraVariableID local_2f0;
  FCameraVariableID local_2ec;
  FCameraVariableID local_2e8;
  FCameraVariableID local_2e4;
  FCameraVariableID local_2e0;
  FCameraVariableID local_2dc;
  FCameraVariableID local_2d8;
  FCameraVariableID local_2d4;
  FCameraVariableID local_2d0;
  FCameraVariableID local_2cc;
  FCameraVariableID local_2c8;
  FCameraVariableID local_2c4;
  FCameraVariableID local_2c0;
  FCameraVariableID local_2bc;
  FCameraVariableID local_2b8;
  FCameraVariableID local_2b4;
  FName local_2b0;
  FName local_2a8;
  TTuple<FName,UObject_*> local_2a0;
  TTuple<FName,UObject_*> local_290;
  TTuple<FName,UObject_*> local_280;
  TTuple<FName,UObject_*> local_270;
  TTuple<FName,UObject_*> local_260;
  TTuple<FName,UObject_*> local_250;
  TTuple<FName,UObject_*> local_240;
  TTuple<FName,UObject_*> local_230;
  TTuple<FName,UObject_*> local_220;
  TTuple<FName,UObject_*> local_210;
  TTuple<FName,UObject_*> local_200;
  TTuple<FName,UObject_*> local_1f0;
  TTuple<FName,UObject_*> local_1e0;
  TTuple<FName,UObject_*> local_1d0;
  TTuple<FName,UObject_*> local_1c0;
  TTuple<FName,UObject_*> local_1b0;
  TTuple<FName,UObject_*> local_1a0;
  TTuple<FName,UObject_*> local_190;
  TTuple<FName,UObject_*> local_180;
  TTuple<FName,UObject_*> local_170;
  TTuple<FName,UObject_*> local_160;
  TTuple<FName,UObject_*> local_150;
  TTuple<FName,UObject_*> local_140;
  TTuple<FName,UObject_*> local_130;
  TTuple<FName,UObject_*> local_120 [2];
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FTextFormat local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  pUVar1 = (UObject *)param_1->_padding_;
  this_00 = (FStructProperty *)
            UStruct::FindPropertyByName(*(UStruct **)&pUVar1->field_0x10,(FName)param_1->_padding_);
  if (this_00 == (FStructProperty *)0x0) {
    return false;
  }
  if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) == 0) {
    local_2b0.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_2b0.Number = *(uint *)&pUVar1->field_0x1c;
    pFVar2 = this->BuildLog;
    pFVar6 = FText::FromName(&local_c0,&local_2b0);
    pFVar7 = FText::FromName(&local_b0,(FName *)&param_1->_padding_);
    pFVar8 = FText::FromString(&local_a0,(FString *)&param_1->_padding_);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_f0,L"CameraObjectInterfaceBuilder",L"InvalidCameraNodeParameter",
                        L"Invalid interface parameter \'{0}\', driving property \'{1}\' on \'{2}\', but it\'s not a camera parameter."
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_90,pFVar9,Default);
    pFVar6 = FText::Format<FText,FText,FText>(&local_100,pFVar10,pFVar8,pFVar7,pFVar6);
    FCameraBuildLog::AddMessage(pFVar2,Error,pUVar1,pFVar6);
    local_d0.TextData.Reference = local_f0.TextData.Reference;
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      local_d0.TextData.Reference = local_f0.TextData.Reference;
    }
  }
  else {
    local_318.CameraObject = this->CameraObject;
    local_318.Owner = this;
    pUVar11 = FBooleanCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FBooleanCameraParameter>(&local_318,param_1,pFVar12);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_280._0_8_ = lVar42;
      local_280._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_280,local_res10);
      (pFVar12->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FBooleanCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar13 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FBooleanCameraVariableReference>
                         (&local_318,param_1,pFVar13);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_270._0_8_ = lVar42;
      local_270._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_270,local_res18);
      (pFVar13->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FInteger32CameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FInteger32CameraParameter>
                         (&local_318,param_1,pFVar14);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_260._0_8_ = lVar42;
      local_260._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_260,local_res20);
      (pFVar14->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FInteger32CameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FInteger32CameraVariableReference>
                         (&local_318,param_1,pFVar15);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_250._0_8_ = lVar42;
      local_250._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_250,&local_308);
      (pFVar15->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FFloatCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FFloatCameraParameter>(&local_318,param_1,pFVar16);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_240._0_8_ = lVar42;
      local_240._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_240,&local_304);
      (pFVar16->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FFloatCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar17 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FFloatCameraVariableReference>
                         (&local_318,param_1,pFVar17);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_2a0._0_8_ = lVar42;
      local_2a0._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_2a0,&local_300);
      (pFVar17->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FDoubleCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FDoubleCameraParameter>(&local_318,param_1,pFVar18);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_220._0_8_ = lVar42;
      local_220._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_220,&local_2fc);
      (pFVar18->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FDoubleCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar19 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FDoubleCameraVariableReference>
                         (&local_318,param_1,pFVar19);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_210._0_8_ = lVar42;
      local_210._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_210,&local_2f8);
      (pFVar19->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector2fCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar20 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector2fCameraParameter>(&local_318,param_1,pFVar20)
      ;
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_200._0_8_ = lVar42;
      local_200._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_200,&local_2f4);
      (pFVar20->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector2fCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar21 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector2fCameraVariableReference>
                         (&local_318,param_1,pFVar21);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_1f0._0_8_ = lVar42;
      local_1f0._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_1f0,&local_2f0);
      (pFVar21->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector2dCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar22 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector2dCameraParameter>(&local_318,param_1,pFVar22)
      ;
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_1e0._0_8_ = lVar42;
      local_1e0._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_1e0,&local_2ec);
      (pFVar22->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector2dCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar23 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector2dCameraVariableReference>
                         (&local_318,param_1,pFVar23);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_1d0._0_8_ = lVar42;
      local_1d0._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_1d0,&local_2e8);
      (pFVar23->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector3fCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar24 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector3fCameraParameter>(&local_318,param_1,pFVar24)
      ;
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_1c0._0_8_ = lVar42;
      local_1c0._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_1c0,&local_2e4);
      (pFVar24->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector3fCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar25 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector3fCameraVariableReference>
                         (&local_318,param_1,pFVar25);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_230._0_8_ = lVar42;
      local_230._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_230,&local_2e0);
      (pFVar25->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector3dCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar26 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector3dCameraParameter>(&local_318,param_1,pFVar26)
      ;
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_1b0._0_8_ = lVar42;
      local_1b0._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_1b0,&local_2dc);
      (pFVar26->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector3dCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar27 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector3dCameraVariableReference>
                         (&local_318,param_1,pFVar27);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_1a0._0_8_ = lVar42;
      local_1a0._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_1a0,&local_2d8);
      (pFVar27->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector4fCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar28 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector4fCameraParameter>(&local_318,param_1,pFVar28)
      ;
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_190._0_8_ = lVar42;
      local_190._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_190,&local_2d4);
      (pFVar28->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector4fCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar29 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector4fCameraVariableReference>
                         (&local_318,param_1,pFVar29);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_180._0_8_ = lVar42;
      local_180._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_180,&local_2d0);
      (pFVar29->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector4dCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar30 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector4dCameraParameter>(&local_318,param_1,pFVar30)
      ;
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_170._0_8_ = lVar42;
      local_170._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_170,&local_2cc);
      (pFVar30->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FVector4dCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar31 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FVector4dCameraVariableReference>
                         (&local_318,param_1,pFVar31);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_160._0_8_ = lVar42;
      local_160._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_160,&local_2c8);
      (pFVar31->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FRotator3fCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar32 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FRotator3fCameraParameter>
                         (&local_318,param_1,pFVar32);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_150._0_8_ = lVar42;
      local_150._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_150,&local_2c4);
      (pFVar32->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FRotator3fCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar33 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FRotator3fCameraVariableReference>
                         (&local_318,param_1,pFVar33);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_140._0_8_ = lVar42;
      local_140._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_140,&local_2c0);
      (pFVar33->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FRotator3dCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar34 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      lVar42 = 0;
      lVar35 = lVar42;
      if (bVar43) {
        lVar35 = this_00->_padding_;
      }
      if ((param_1->_padding_ != lVar35) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FRotator3dCameraParameter>
                         (&local_318,param_1,pFVar34);
      if (!bVar43) {
        return true;
      }
      lVar35 = param_1->_padding_;
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      local_130._0_8_ = lVar42;
      local_130._8_8_ = lVar35;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_130,&local_2bc);
      (pFVar34->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FRotator3dCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar36 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      else {
        lVar42 = 0;
      }
      if ((param_1->_padding_ != lVar42) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FRotator3dCameraVariableReference>
                         (&local_318,param_1,pFVar36);
      if (!bVar43) {
        return true;
      }
      lVar42 = param_1->_padding_;
      FVar37 = FField::GetFName((FField *)this_00);
      local_120[0]._0_8_ = *(undefined8 *)FVar37;
      local_120[0]._8_8_ = lVar42;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,local_120,&local_2b8);
      (pFVar36->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FTransform3fCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar38 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116439>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x57,"BlendableParameter->PrivateVariableID.IsValid()"), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar43) {
        lVar42 = this_00->_padding_;
      }
      else {
        lVar42 = 0;
      }
      if ((param_1->_padding_ != lVar42) &&
         (bVar43 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1378543571254116440>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                              ,0x58,
                              "BlendableParameter->TargetPropertyName == TargetProperty->GetFName()"
                             ), bVar43)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      bVar43 = Cameras::Internal::FInterfaceParameterBindingBuilder::
               CheckIfParameterCanBeOverridden<FTransform3fCameraParameter>
                         (&local_318,param_1,pFVar38);
      if (!bVar43) {
        return true;
      }
      lVar42 = param_1->_padding_;
      FVar37 = FField::GetFName((FField *)this_00);
      local_290._0_8_ = *(undefined8 *)FVar37;
      local_290._8_8_ = lVar42;
      TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
      ::RemoveAndCopyValue(&(local_318.Owner)->OldDrivenBlendableParameters,&local_290,&local_2b4);
      (pFVar38->VariableID).Value = (param_1->PrivateVariableID).Value;
      return true;
    }
    pUVar11 = FTransform3fCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar39 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      Cameras::Internal::FInterfaceParameterBindingBuilder::
      SetCameraParameterOrVariableReferenceOverride<FTransform3fCameraVariableReference>
                (&local_318,param_1,this_00,pFVar39);
      return true;
    }
    pUVar11 = FTransform3dCameraParameter::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar40 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      Cameras::Internal::FInterfaceParameterBindingBuilder::
      SetCameraParameterOrVariableReferenceOverride<FTransform3dCameraParameter>
                (&local_318,param_1,this_00,pFVar40);
      return true;
    }
    pUVar11 = FTransform3dCameraVariableReference::StaticStruct();
    pUVar3 = (this_00->Struct).field0_0x0.DebugPtr;
    if (pUVar3 == (UScriptStruct *)0x0) {
      bVar43 = pUVar11 == (UScriptStruct *)0x0;
    }
    else {
      bVar43 = pUVar3 == pUVar11;
    }
    if (bVar43) {
      pFVar41 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,pUVar1,0);
      Cameras::Internal::FInterfaceParameterBindingBuilder::
      SetCameraParameterOrVariableReferenceOverride<FTransform3dCameraVariableReference>
                (&local_318,param_1,this_00,pFVar41);
      return true;
    }
    local_2a8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_2a8.Number = *(uint *)&pUVar1->field_0x1c;
    pFVar2 = this->BuildLog;
    pFVar6 = FText::FromName(&local_80,&local_2a8);
    pFVar7 = FText::FromName(&local_70,(FName *)&param_1->_padding_);
    pFVar8 = FText::FromString(&local_60,(FString *)&param_1->_padding_);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_d0,L"CameraObjectInterfaceBuilder",L"InvalidCameraNodeParameter",
                        L"Invalid interface parameter \'{0}\', driving property \'{1}\' on \'{2}\', but it\'s not a camera parameter."
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_50,pFVar9,Default);
    pFVar6 = FText::Format<FText,FText,FText>(&local_e0,pFVar10,pFVar8,pFVar7,pFVar6);
    FCameraBuildLog::AddMessage(pFVar2,Error,(UObject *)param_1,pFVar6);
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
  }
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  return true;
}

// SetupCustomBlendableParameterOverride @ 14d5671a0

bool __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::SetupCustomBlendableParameterOverride
          (FCameraObjectInterfaceBuilder *this,UCameraObjectInterfaceBlendableParameter *param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  longlong *plVar5;
  FBlendableParameterInfo *pFVar6;
  FCameraVariableID local_res10 [2];
  FCameraVariableID local_res18 [2];
  FCameraVariableID local_res20 [2];
  FInterfaceParameterBindingBuilder local_158;
  FBlendableParameterInfo *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  FCameraVariableID local_128;
  FCameraVariableID local_124;
  FCameraVariableID local_120;
  FCameraVariableID local_11c;
  FCameraVariableID local_118;
  FCameraVariableID local_114;
  FCameraVariableID local_110;
  FCameraVariableID local_10c;
  FCameraVariableID local_108;
  FCameraVariableID local_104;
  FCameraVariableID local_100 [2];
  FName local_f8;
  longlong local_f0;
  FName local_e8;
  longlong local_e0;
  FName local_d8;
  longlong local_d0;
  FName local_c8;
  longlong local_c0;
  FName local_b8;
  longlong local_b0;
  FName local_a8;
  longlong local_a0;
  FName local_98;
  longlong local_90;
  FName local_88;
  longlong local_80;
  FName local_78;
  longlong local_70;
  FName local_68;
  longlong local_60;
  FName local_58;
  longlong local_50;
  FName local_48;
  longlong local_40;
  FName local_38;
  longlong local_30;
  FName local_28;
  longlong local_20;
  
  this_00 = (UObjectBaseUtility *)param_1->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar4 = Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
    if (plVar5 != (longlong *)0x0) {
      local_148 = (FBlendableParameterInfo *)0x0;
      local_140 = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_148);
      if (local_148 != local_148 + (int)local_140) {
        pFVar6 = local_148;
        do {
          if (pFVar6->ParameterName == (FName)param_1->_padding_) {
            local_158.CameraObject = this->CameraObject;
            local_158.Owner = this;
            switch(pFVar6->ParameterType) {
            case Boolean:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_f8 = pFVar6->ParameterName;
                local_f0 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_f8,local_res10);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Integer32:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_e8 = pFVar6->ParameterName;
                local_e0 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_e8,local_res18);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Float:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_d8 = pFVar6->ParameterName;
                local_d0 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_d8,local_res20);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Double:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_c8 = pFVar6->ParameterName;
                local_c0 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_c8,&local_128);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Vector2f:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_b8 = pFVar6->ParameterName;
                local_b0 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_b8,&local_124);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Vector2d:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_a8 = pFVar6->ParameterName;
                local_a0 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_a8,&local_120);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Vector3f:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_98 = pFVar6->ParameterName;
                local_90 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_98,&local_11c);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Vector3d:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_88 = pFVar6->ParameterName;
                local_80 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_88,&local_118);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Vector4f:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_78 = pFVar6->ParameterName;
                local_70 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_78,&local_114);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Vector4d:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_68 = pFVar6->ParameterName;
                local_60 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_68,&local_110);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Rotator3f:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_58 = pFVar6->ParameterName;
                local_50 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_58,&local_10c);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Rotator3d:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_48 = pFVar6->ParameterName;
                local_40 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_48,&local_108);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Transform3f:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_38 = pFVar6->ParameterName;
                local_30 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_38,&local_104);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case Transform3d:
              if (((param_1->PrivateVariableID).Value == 0xffffffff) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116465>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x71,"BlendableParameter->PrivateVariableID.IsValid()"), bVar2
                 )) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              if (((FName)param_1->_padding_ != pFVar6->ParameterName) &&
                 (bVar2 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<1378543571254116466>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                     ,0x72,
                                     "BlendableParameter->TargetPropertyName == CustomParameter.ParameterName"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                      CheckIfParameterCanBeOverridden(&local_158,param_1,pFVar6);
              if (bVar2) {
                local_28 = pFVar6->ParameterName;
                local_20 = param_1->_padding_;
                TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
                ::RemoveAndCopyValue
                          (&(local_158.Owner)->OldDrivenBlendableParameters,
                           (TTuple<FName,UObject_*> *)&local_28,local_100);
                bVar2 = true;
                pFVar6->OverrideVariableID->Value = (param_1->PrivateVariableID).Value;
                goto LAB_14d567236;
              }
              break;
            case BlendableStruct:
              Cameras::Internal::FInterfaceParameterBindingBuilder::
              SetCustomBlendableStructParameterOverride(&local_158,param_1,pFVar6);
            }
            bVar2 = true;
            goto LAB_14d567236;
          }
          pFVar6 = pFVar6 + 1;
        } while (pFVar6 != local_148 + (int)local_140);
      }
      bVar2 = false;
LAB_14d567236:
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      if (local_148 == (FBlendableParameterInfo *)0x0) {
        return bVar2;
      }
      FMemory::Free(local_148);
      return bVar2;
    }
  }
  return false;
}

// SetupCustomDataParameterOverride @ 14d567d00

bool __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::SetupCustomDataParameterOverride
          (FCameraObjectInterfaceBuilder *this,UCameraObjectInterfaceDataParameter *param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  longlong *plVar5;
  FDataParameterInfo *pFVar6;
  FCameraContextDataID local_res10 [2];
  FInterfaceParameterBindingBuilder local_48;
  FName local_38;
  longlong local_30;
  void *local_28;
  undefined8 local_20;
  FDataParameterInfo *local_18;
  undefined8 local_10;
  
  this_00 = (UObjectBaseUtility *)param_1->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar4 = Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
    if (plVar5 != (longlong *)0x0) {
      local_28 = (void *)0x0;
      local_20 = 0;
      local_18 = (FDataParameterInfo *)0x0;
      local_10 = 0;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_28);
      if (local_18 != local_18 + (int)local_10) {
        pFVar6 = local_18;
        do {
          if (pFVar6->ParameterName == (FName)param_1->_padding_) {
            local_48.CameraObject = this->CameraObject;
            local_48.Owner = this;
            if ((param_1->PrivateDataID).Value == 0xffffffff) {
              bVar2 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<1378543571254116556>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                 ,0xcc,"DataParameter->PrivateDataID");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
            if ((FName)param_1->_padding_ != pFVar6->ParameterName) {
              bVar2 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<1378543571254116557>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                                 ,0xcd,
                                 "DataParameter->TargetPropertyName == CustomParameter.ParameterName"
                                );
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
            bVar2 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                    CheckIfParameterCanBeOverridden(&local_48,param_1,pFVar6);
            if (bVar2) {
              local_38 = pFVar6->ParameterName;
              local_30 = param_1->_padding_;
              TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
              ::RemoveAndCopyValue
                        (&(local_48.Owner)->OldDrivenDataParameters,
                         (TTuple<FName,UObject_*> *)&local_38,local_res10);
              pFVar6->OverrideDataID->Value = (param_1->PrivateDataID).Value;
            }
            bVar2 = true;
            goto LAB_14d567d91;
          }
          pFVar6 = pFVar6 + 1;
        } while (pFVar6 != local_18 + (int)local_10);
      }
      bVar2 = false;
LAB_14d567d91:
      if (local_18 != (FDataParameterInfo *)0x0) {
        FMemory::Free(local_18);
      }
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      return bVar2;
    }
  }
  return false;
}

// SetupDataContextPropertyOverride @ 14d567eb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraObjectInterfaceBuilder::SetupDataContextPropertyOverride
          (FCameraObjectInterfaceBuilder *this,UCameraObjectInterfaceDataParameter *param_1)

{
  UObject *pUVar1;
  UStruct *this_00;
  longlong lVar2;
  FCameraBuildLog *this_01;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FProperty *pFVar6;
  FName *pFVar7;
  FProperty *this_02;
  UPackage *pUVar8;
  FCameraContextDataID *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  int iVar16;
  longlong lVar17;
  FCameraContextDataID local_res10 [2];
  FName local_res18;
  FName local_res20;
  FString local_f8;
  FString local_e8;
  FInterfaceParameterBindingBuilder local_d8;
  TTuple<FName,UObject_*> local_c8;
  FName local_b8;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  pUVar1 = (UObject *)param_1->_padding_;
  this_00 = *(UStruct **)&pUVar1->field_0x10;
  pFVar6 = UStruct::FindPropertyByName(this_00,(FName)param_1->_padding_);
  if (pFVar6 != (FProperty *)0x0) {
    bVar4 = IsThisNotNull(pFVar6,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&pFVar6->_padding_,&local_e8);
    }
    else {
      ::FString::FString(&local_e8,L"None");
    }
    ::FString::ConcatFC(&local_f8,&local_e8,L"DataID");
    lVar17 = 0;
    iVar16 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    pFVar7 = ::FName::FName(&local_b8,iVar16,(wchar_t *)local_f8.Data.AllocatorInstance.Data,
                            FNAME_Add);
    local_res18 = *pFVar7;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    this_02 = UStruct::FindPropertyByName(this_00,local_res18);
    if ((this_02 != (FProperty *)0x0) && ((*(uint *)(this_02->_padding_ + 0x18) >> 0x14 & 1) != 0))
    {
      if (Z_Registration_Info_UScriptStruct_FCameraContextDataID.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FCameraContextDataID.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FCameraContextDataID,(UObject *)pUVar8,
                             L"CameraContextDataID");
      }
      if ((UScriptStruct *)this_02[1]._padding_ == (UScriptStruct *)0x0) {
        bVar4 = Z_Registration_Info_UScriptStruct_FCameraContextDataID.OuterSingleton ==
                (UScriptStruct *)0x0;
      }
      else {
        bVar4 = (UScriptStruct *)this_02[1]._padding_ ==
                Z_Registration_Info_UScriptStruct_FCameraContextDataID.OuterSingleton;
      }
      if (bVar4) {
        pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_02,pUVar1,0);
        local_d8.CameraObject = this->CameraObject;
        local_d8.Owner = this;
        if (((param_1->PrivateDataID).Value == 0xffffffff) &&
           (bVar4 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1378543571254116534>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceBuilder.cpp"
                               ,0xb6,"DataParameter->PrivateDataID"), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar4 = Cameras::Internal::FInterfaceParameterBindingBuilder::
                CheckIfParameterCanBeOverridden(&local_d8,param_1,pFVar6,pFVar9);
        if (bVar4) {
          lVar2 = param_1->_padding_;
          bVar4 = IsThisNotNull(pFVar6,"FField::GetFName");
          if (bVar4) {
            lVar17 = pFVar6->_padding_;
          }
          local_c8._0_8_ = lVar17;
          local_c8._8_8_ = lVar2;
          TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
          ::RemoveAndCopyValue(&this->OldDrivenDataParameters,&local_c8,local_res10);
          pFVar9->Value = (param_1->PrivateDataID).Value;
        }
        return true;
      }
    }
    this_01 = this->BuildLog;
    pFVar10 = FText::FromName(&local_90,&local_res18);
    local_res20.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res20.Number = *(uint *)&pUVar1->field_0x1c;
    pFVar11 = FText::FromName(&local_80,&local_res20);
    pFVar12 = FText::FromName(&local_70,(FName *)&param_1->_padding_);
    pFVar13 = FText::FromString(&local_60,(FString *)&param_1->_padding_);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_a0,L"CameraObjectInterfaceBuilder",L"MissingDataID",
                         L"Interface parameter \'{0}\' is driving data context property \'{1}\' on \'{2}\' but no FCameraContextDataID property \'{3}\' was found to store the override ID."
                        );
    pFVar15 = FTextFormat::FTextFormat(&local_50,pFVar14,Default);
    pFVar10 = FText::Format<FText,FText,FText,FText>
                        (&local_b0,pFVar15,pFVar13,pFVar12,pFVar11,pFVar10);
    FCameraBuildLog::AddMessage(this_01,Error,(UObject *)param_1,pFVar10);
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
  }
  return false;
}

