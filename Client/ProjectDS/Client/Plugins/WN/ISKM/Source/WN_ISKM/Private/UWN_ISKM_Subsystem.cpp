// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 23

// StaticClass @ 14a837020

UClass * __cdecl UWN_ISKM_Subsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_Subsystem",
               &Z_Registration_Info_UClass_UWN_ISKM_Subsystem.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_Subsystem,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_ISKM_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_ISKM_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_Subsystem.InnerSingleton;
}

// UWN_ISKM_Subsystem @ 14a83f5a0

UWN_ISKM_Subsystem * __thiscall
UWN_ISKM_Subsystem::UWN_ISKM_Subsystem(UWN_ISKM_Subsystem *this,FVTableHelper *param_1)

{
  FWN_UniqueIndexAllocator *pFVar1;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  pFVar1 = &this->ControllerIndexAllocator;
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1->Granularity = 0x400;
  pFVar1->BaseIndex = 0;
  (this->ControllerIndexAllocator).NumIndices = 0;
  (this->ControllerIndexAllocator).FreedIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControllerIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->ControllerIndexAllocator).FreedIndices.ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(pFVar1);
  pFVar1 = &this->ISKMActorIndexAllocator;
  (this->ControllerLodFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1->Granularity = 0x400;
  pFVar1->BaseIndex = 0;
  (this->ISKMActorIndexAllocator).NumIndices = 0;
  (this->ISKMActorIndexAllocator).FreedIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ISKMActorIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->ISKMActorIndexAllocator).FreedIndices.ArrayMax = 0;
  (this->ControllerLodFragments).ArrayNum = 0;
  (this->ControllerLodFragments).ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(pFVar1);
  *(undefined8 *)&this->ISKMActorIndexMap = 0;
  *(undefined8 *)&(this->ISKMActorIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->ISKMActorIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->ISKMActorIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x48 = 0;
  (this->ISKMActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ISKMActors).ArrayNum = 0;
  (this->ISKMActors).ArrayMax = 0;
  return this;
}

// UWN_ISKM_Subsystem @ 14a83f670

UWN_ISKM_Subsystem * __thiscall UWN_ISKM_Subsystem::UWN_ISKM_Subsystem(UWN_ISKM_Subsystem *this)

{
  FWN_UniqueIndexAllocator *pFVar1;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  pFVar1 = &this->ControllerIndexAllocator;
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1->Granularity = 0x400;
  pFVar1->BaseIndex = 0;
  (this->ControllerIndexAllocator).NumIndices = 0;
  (this->ControllerIndexAllocator).FreedIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControllerIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->ControllerIndexAllocator).FreedIndices.ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(pFVar1);
  pFVar1 = &this->ISKMActorIndexAllocator;
  (this->ControllerLodFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1->Granularity = 0x400;
  pFVar1->BaseIndex = 0;
  (this->ISKMActorIndexAllocator).NumIndices = 0;
  (this->ISKMActorIndexAllocator).FreedIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ISKMActorIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->ISKMActorIndexAllocator).FreedIndices.ArrayMax = 0;
  (this->ControllerLodFragments).ArrayNum = 0;
  (this->ControllerLodFragments).ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(pFVar1);
  *(undefined8 *)&this->ISKMActorIndexMap = 0;
  *(undefined8 *)&(this->ISKMActorIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->ISKMActorIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->ISKMActorIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x48 = 0;
  (this->ISKMActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ISKMActors).ArrayNum = 0;
  (this->ISKMActors).ArrayMax = 0;
  return this;
}

// ~UWN_ISKM_Subsystem @ 14a840180

void __thiscall UWN_ISKM_Subsystem::~UWN_ISKM_Subsystem(UWN_ISKM_Subsystem *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->ISKMActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ISKMActorIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ISKMActorIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FWN_ISKM_Key,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWN_ISKM_Key,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWN_ISKM_Key,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ISKMActorIndexMap);
  pFVar1 = (this->ISKMActorIndexAllocator).FreedIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControllerLodFragments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControllerIndexAllocator).FreedIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// operator() @ 14a840dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `UWN_ISKM_Subsystem::Tick'::__l15::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  
  uVar7 = _UNK_152242e58;
  uVar6 = ___xmm_465ac00045fa0000453b8000447a0000;
  fVar5 = __real_43480000;
  fVar4 = __real_41f00000;
  fVar3 = __real_3f800000;
  iVar18 = 0;
  iVar17 = *(int *)((longlong)this + 4) * param_1;
  if (0 < *(int *)((longlong)this + 4)) {
    lVar16 = (longlong)iVar17 * 8;
    do {
      if (*(int *)this <= iVar18 + iVar17) {
        return;
      }
      fVar22 = *(float *)((longlong)this + 0x20);
      fVar23 = *(float *)((longlong)this + 0x1c);
      fVar21 = *(float *)((longlong)this + 0x18);
      puVar2 = *(uint **)(lVar16 + *(longlong *)((longlong)this + 8));
      fVar1 = *(float *)((longlong)this + 0x14);
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"WN_UpdateISKM_LodLevel");
      bVar20 = -1 < CpuChannel->Enabled;
      if (bVar20) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId68,"WN_UpdateISKM_LodLevel",
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
                   ,0x44);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId68);
      }
      pdVar8 = (double *)(**(code **)(**(longlong **)(puVar2 + 6) + 8))();
      dVar27 = *pdVar8 - *(double *)((longlong)this + 0x28);
      dVar28 = pdVar8[1] - *(double *)((longlong)this + 0x30);
      dVar26 = pdVar8[2] - *(double *)((longlong)this + 0x38);
      auVar24._0_8_ = dVar27 * dVar27;
      auVar24._8_8_ = 0;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar28 * dVar28 + auVar24._0_8_ + dVar26 * dVar26;
      auVar25 = sqrtpd(auVar24,auVar25);
      fVar29 = (float)auVar25._0_8_;
      if ((0.0 <= dVar28 * sCamDir.field0_0x0._s_0.Y + dVar27 * sCamDir.field0_0x0._s_0.X +
                  dVar26 * sCamDir.field0_0x0._s_0.Z) || (fVar29 <= fVar5)) {
        iVar15 = 0;
      }
      else {
        iVar15 = 1;
      }
      uVar19 = 0;
      bVar14 = (byte)iVar15;
      if (fVar29 <= fVar21) {
        if (fVar29 <= fVar1) {
          uVar12 = GFrameCounter - *(longlong *)(puVar2 + 4);
          fVar23 = fVar3;
          if (bVar14 != 0) {
            fVar23 = 0.0;
          }
          uVar19 = (uint)(bVar14 ^ 1);
          fVar23 = (fVar29 - fVar1) / fVar1 - fVar23;
          if (fVar3 <= fVar23) {
            fVar23 = fVar3;
          }
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          fVar22 = powf(fVar23,fVar22);
          bVar13 = fVar22 * fVar4 <= (float)uVar12;
        }
        else {
          fVar21 = (fVar29 - fVar1) / (fVar21 - fVar1);
          if (fVar3 <= fVar21) {
            fVar21 = fVar3;
          }
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          fVar22 = powf(fVar21,fVar22);
          if (((float)(GFrameCounter - *(longlong *)(puVar2 + 4)) < fVar22 * fVar23) ||
             (bVar14 != 0)) goto LAB_14a840f80;
          bVar13 = true;
        }
      }
      else {
LAB_14a840f80:
        bVar13 = false;
      }
      iVar10 = 6;
      local_e0 = 0x469c4000;
      lVar9 = 6;
      local_dc = 0x471c4000;
      local_f0 = uVar6;
      uStack_e8 = uVar7;
      local_d8 = 0x479c4000;
      do {
        if (fVar29 < *(float *)((longlong)&local_f0 + lVar9 * 4)) break;
        iVar10 = iVar10 + -1;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      puVar2[2] = iVar10 + 1;
      uVar11 = (iVar15 << 2 ^ *puVar2) & 4 ^ *puVar2;
      uVar11 = ((uint)bVar13 << 4 ^ uVar11) & 0x10 ^ uVar11;
      uVar11 = (uVar19 * 2 ^ uVar11) & 2 ^ uVar11;
      *puVar2 = uVar11;
      puVar2[1] = (uint)fVar29;
      if ((uVar11 & 8) != 0) {
        puVar2[3] = 0;
      }
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      iVar18 = iVar18 + 1;
      lVar16 = lVar16 + 8;
    } while (iVar18 < *(int *)((longlong)this + 4));
  }
  return;
}

// operator() @ 14a841190

void __thiscall `UWN_ISKM_Subsystem::Tick'::__l30::<lambda_3>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = sNearDist * sNearDist;
  fVar5 = tanf(sFovV);
  fVar5 = fVar5 * sNearDist;
  iVar3 = *(int *)((longlong)this + 4) * param_1;
  iVar2 = 0;
  if (0 < *(int *)((longlong)this + 4)) {
    lVar4 = (longlong)iVar3 << 4;
    do {
      if (*(int *)this <= iVar2 + iVar3) {
        return;
      }
      plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + lVar4);
      (**(code **)(*plVar1 + 0x38))
                (plVar1,*(undefined4 *)(*(longlong *)((longlong)this + 8) + 8 + lVar4),
                 *(undefined4 *)((longlong)this + 0x10),(longlong)this + 0x18,&sCamDir,fVar6,
                 fVar5 * fVar5);
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar2 < *(int *)((longlong)this + 4));
  }
  return;
}

// AddInstance @ 14a843400

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FWN_ISKM_InstanceKey __thiscall
UWN_ISKM_Subsystem::AddInstance
          (UWN_ISKM_Subsystem *this,USkeletalMesh *param_1,UWN_ISKM_Profile *param_2,int param_3)

{
  int *piVar1;
  TArray<TObjectPtr<AWN_ISKM_ISKMActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  UWorld *this_00;
  UClass *pUVar10;
  AActor *pAVar11;
  FString *pFVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  wchar_t *pwVar15;
  USceneComponent *this_01;
  AActor *pAVar16;
  wchar_t *pwVar17;
  undefined4 in_register_0000008c;
  UObject *pUVar18;
  longlong lVar19;
  int in_stack_00000028;
  undefined1 auStackY_188 [32];
  uint local_148 [2];
  UObject *local_140;
  UWN_ISKM_Profile *local_138;
  UWN_ISKM_Profile *local_130;
  UObject *pUStack_128;
  TPairInitializer<FWN_ISKM_Key_const_&,int_const_&> local_120;
  uint *local_110;
  TRotator<double> local_108;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  pUVar18 = (UObject *)CONCAT44(in_register_0000008c,param_3);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_2 == (UWN_ISKM_Profile *)0x0) || (pUVar18 == (UObject *)0x0)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_14a84394b;
  }
  local_140 = pUVar18;
  local_138 = param_2;
  local_130 = param_2;
  pUStack_128 = pUVar18;
  uVar6 = (*FCrc::MemCrc32Func)(&local_130,0x10,0);
  pAVar16 = (AActor *)0x0;
  if (*(int *)&(this->ISKMActorIndexMap).field_0x8 != *(int *)&(this->ISKMActorIndexMap).field_0x34)
  {
    puVar14 = *(undefined1 **)&(this->ISKMActorIndexMap).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->ISKMActorIndexMap).field_0x38;
    }
    iVar8 = *(int *)(puVar14 +
                    (ulonglong)(*(int *)&(this->ISKMActorIndexMap).field_0x48 - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      lVar19 = *(longlong *)&(this->ISKMActorIndexMap).field_0x0;
      do {
        lVar9 = (longlong)iVar8 * 0x20;
        if ((*(UWN_ISKM_Profile **)(lVar9 + lVar19) == local_130) &&
           (*(UObject **)(lVar9 + 8 + lVar19) == pUStack_128)) {
          if ((iVar8 != -1) &&
             (lVar19 = (longlong)iVar8 * 0x20 + lVar19, pAVar11 = (AActor *)(lVar19 + 0x10),
             lVar19 != 0)) goto LAB_14a8434fa;
          break;
        }
        iVar8 = *(int *)(lVar9 + 0x18 + lVar19);
      } while (iVar8 != -1);
    }
  }
  pAVar11 = pAVar16;
LAB_14a8434fa:
  if (pAVar11 == (AActor *)0x0) {
    local_148[0] = FWN_UniqueIndexAllocator::Acquire(&this->ISKMActorIndexAllocator);
    local_120.Value = (int *)&local_130;
    local_110 = local_148;
    TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FWN_ISKM_Key_const_&,int_const_&>_>
              ((TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
                *)&this->ISKMActorIndexMap,&local_120,(bool *)&local_120.Value);
    uVar6 = (this->ISKMActorIndexAllocator).NumIndices - (this->ISKMActorIndexAllocator).BaseIndex;
    if ((this->ISKMActors).ArrayNum < (int)uVar6) {
      pTVar2 = &this->ISKMActors;
      iVar8 = (this->ISKMActors).ArrayNum;
      piVar1 = &(this->ISKMActors).ArrayNum;
      if (iVar8 < (int)uVar6) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar6 - iVar8,&pTVar2->AllocatorInstance,piVar1,
                           &(this->ISKMActors).ArrayMax);
        memset((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
               (longlong)(int)(uVar6 - iVar8) << 3);
        pUVar18 = local_140;
        param_2 = local_138;
      }
      else {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        pUVar18 = local_140;
        param_2 = local_138;
        if ((int)uVar6 < iVar8) {
          iVar8 = iVar8 - uVar6;
          if (iVar8 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (FWN_ISKM_InstanceKey)uVar6;
            }
          }
          else if (iVar8 == 0) goto LAB_14a843648;
          pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
          iVar7 = (*piVar1 - iVar8) - uVar6;
          if (iVar7 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)iVar8 * 8,(longlong)iVar7 << 3);
          }
          *piVar1 = *piVar1 - iVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->ISKMActors).ArrayMax);
          pUVar18 = local_140;
          param_2 = local_138;
        }
      }
    }
LAB_14a843648:
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_c8);
    local_c8[0x32] = local_c8[0x32] | 2;
    local_c8._52_4_ = RF_DuplicateTransient|RF_Transient;
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    local_108.Roll = 0.0;
    local_108.Pitch = 0.0;
    local_108.Yaw = 0.0;
    pUVar10 = AWN_ISKM_ISKMActor::StaticClass();
    pAVar11 = UWorld::SpawnActor(this_00,pUVar10,&UE::Math::TVector<double>::ZeroVector,&local_108,
                                 (FActorSpawnParameters *)local_c8);
    if (pAVar11 != (AActor *)0x0) {
      pUVar10 = AWN_ISKM_ISKMActor::StaticClass();
      iVar8 = (int)pUVar10->_padding_;
      if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar8) ||
         (pAVar16 = pAVar11,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
         &pUVar10->_padding_)) {
        pFVar12 = GetTypeName<AWN_ISKM_ISKMActor>(&local_f0);
        pwVar15 = L"";
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<AActor>(&local_e0,pAVar11);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar15,pwVar17);
      }
    }
    this_01 = (USceneComponent *)pAVar16[1]._padding_;
    pAVar16[1]._padding_ = (longlong)local_130;
    pAVar16[1]._padding_ = (longlong)pUStack_128;
    *(int *)((longlong)&this_01[2].Bounds.BoxExtent.field0_0x0 + 8) = in_stack_00000028;
    if (in_stack_00000028 == 0) {
      iVar8 = *(int *)((longlong)&this_01[2].Bounds.SphereRadius + 4);
      *(undefined4 *)&this_01[2].Bounds.SphereRadius = 0;
      if (iVar8 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)&this_01[2].Bounds.BoxExtent.field0_0x0._s_0.Z,0,
                   (int *)((longlong)&this_01[2].Bounds.SphereRadius + 4));
      }
    }
    else {
      iVar8 = (*(int *)&this_01[2].NetOldAttachParent - this_01[2].ClientAttachedChildren.ArrayMax)
              * in_stack_00000028;
      if (*(int *)&this_01[2].Bounds.SphereRadius < iVar8) {
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)
                   ((longlong)&this_01[2].Bounds.BoxExtent.field0_0x0 + 0x10),iVar8,No);
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar18);
    }
    *(UObject **)&this_01[2].AttachChildren.ArrayNum = pUVar18;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    this_01[2].ClientAttachedChildren.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
    USceneComponent::SetRelativeTransform
              (this_01,&UE::Math::TTransform<double>::Identity,false,(FHitResult *)0x0,None);
    UActorComponent::RegisterComponent((UActorComponent *)this_01);
    lVar19 = (longlong)(int)local_148[0];
    uVar6 = 0;
    if ((int)local_148[0] < (this->ISKMActors).ArrayNum) {
      uVar6 = ~local_148[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FWN_ISKM_InstanceKey)uVar6;
    }
    pFVar3 = (this->ISKMActors).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar16);
    }
    *(AActor **)(pFVar3 + lVar19 * 8) = pAVar16;
    if (local_c8._64_8_ != 0) {
      plVar13 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  else {
    local_148[0] = (uint)pAVar11->_padding_;
    lVar19 = (longlong)(int)local_148[0];
    uVar6 = 0;
    if ((int)local_148[0] < (this->ISKMActors).ArrayNum) {
      uVar6 = ~local_148[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FWN_ISKM_InstanceKey)uVar6;
    }
    this_01 = *(USceneComponent **)
               (*(longlong *)((this->ISKMActors).AllocatorInstance.Data + lVar19 * 8) + 0x2c0);
  }
  iVar8 = FWN_UniqueIndexAllocator::Acquire
                    ((FWN_UniqueIndexAllocator *)&this_01[2].ClientAttachedChildren.ArrayNum);
  if (*(int *)&this_01[2].Bounds.BoxExtent.field0_0x0 <= iVar8) {
    TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *)
               ((longlong)&this_01[2].Bounds.Origin.field0_0x0 + 0x10),
               *(int *)&this_01[2].NetOldAttachParent - this_01[2].ClientAttachedChildren.ArrayMax,
               No);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<float,TSizedDefaultAllocator<32>_> *)
               ((longlong)&this_01[2].Bounds.BoxExtent.field0_0x0 + 0x10),
               *(int *)((longlong)&this_01[2].Bounds.BoxExtent.field0_0x0 + 8) *
               *(int *)&this_01[2].Bounds.BoxExtent.field0_0x0,No);
  }
  if ((0xffff < iVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("instanceIndex < 65536",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
                         ,0x217,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (FWN_ISKM_InstanceKey)uVar6;
  }
  *(uint *)&param_1->_padding_ = CONCAT22((short)iVar8,(undefined2)local_148[0]);
LAB_14a84394b:
  return (FWN_ISKM_InstanceKey)(uint)param_1;
}

// BeginDestroy @ 14a843f70

void __thiscall UWN_ISKM_Subsystem::BeginDestroy(UWN_ISKM_Subsystem *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ControllerLodFragments).AllocatorInstance.Data;
  iVar2 = (this->ControllerLodFragments).ArrayNum;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->ControllerLodFragments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_ISKM_LodFragment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (((byte)*pFVar4 & 1) != 0) {
      plVar3 = *(longlong **)(pFVar4 + 0x18);
      (**(code **)(*plVar3 + 0x50))();
      *(undefined4 *)(plVar3 + 2) = 0xffffffff;
      *(uint *)pFVar4 = *(uint *)pFVar4 & 0xfffffffe;
    }
    pFVar4 = pFVar4 + 0x20;
  }
  piVar1 = &(this->ControllerLodFragments).ArrayMax;
  (this->ControllerLodFragments).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->ControllerLodFragments).AllocatorInstance,0,piVar1);
  }
  UTickableWorldSubsystem::BeginDestroy((UTickableWorldSubsystem *)this);
  return;
}

// Deinitialize @ 14a847370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWN_ISKM_Subsystem::Deinitialize(UWN_ISKM_Subsystem *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ControllerLodFragments).AllocatorInstance.Data;
  iVar2 = (this->ControllerLodFragments).ArrayNum;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->ControllerLodFragments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_ISKM_LodFragment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (((byte)*pFVar4 & 1) != 0) {
      plVar3 = *(longlong **)(pFVar4 + 0x18);
      (**(code **)(*plVar3 + 0x50))();
      *(undefined4 *)(plVar3 + 2) = 0xffffffff;
      *(uint *)pFVar4 = *(uint *)pFVar4 & 0xfffffffe;
    }
    pFVar4 = pFVar4 + 0x20;
  }
  piVar1 = &(this->ControllerLodFragments).ArrayMax;
  (this->ControllerLodFragments).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->ControllerLodFragments).AllocatorInstance,0,piVar1);
  }
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  if (4 < (byte)ISKM._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
    return;
  }
  return;
}

// GetInstanceCustomDatas @ 14a84a8a0

float * __thiscall
UWN_ISKM_Subsystem::GetInstanceCustomDatas
          (UWN_ISKM_Subsystem *this,FWN_ISKM_InstanceKey *param_1,int *param_2)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  
  uVar1 = (param_1->_s_0).ActorIndex;
  if ((this->ISKMActors).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("actorIndex < ISKMActors.Num()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
                       ,0x244,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar3)();
      return pfVar5;
    }
  }
  if ((this->ISKMActors).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar3)();
      return pfVar5;
    }
  }
  lVar2 = *(longlong *)
           (*(longlong *)((this->ISKMActors).AllocatorInstance.Data + (ulonglong)uVar1 * 8) + 0x2c0)
  ;
  uVar1 = (param_1->_s_0).InstanceIndex;
  *param_2 = *(int *)(lVar2 + 0x5d0);
  if (*(int *)(lVar2 + 0x5d0) == 0) {
    pfVar5 = (float *)0x0;
  }
  else {
    pfVar5 = (float *)(*(longlong *)(lVar2 + 0x5d8) +
                      (longlong)(int)(*(int *)(lVar2 + 0x5d0) * (uint)uVar1) * 4);
  }
  return pfVar5;
}

// GetInstanceData @ 14a84aa10

FWN_ISKM_InstanceData * __thiscall
UWN_ISKM_Subsystem::GetInstanceData(UWN_ISKM_Subsystem *this,FWN_ISKM_InstanceKey *param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FWN_ISKM_InstanceData *pFVar6;
  
  uVar1 = (param_1->_s_0).ActorIndex;
  if ((this->ISKMActors).ArrayNum <= (int)(uint)uVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("actorIndex < ISKMActors.Num()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
                       ,0x237,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FWN_ISKM_InstanceData *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((this->ISKMActors).ArrayNum <= (int)(uint)uVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FWN_ISKM_InstanceData *)(*pcVar4)();
      return pFVar6;
    }
  }
  uVar2 = (param_1->_s_0).InstanceIndex;
  lVar3 = *(longlong *)
           (*(longlong *)((this->ISKMActors).AllocatorInstance.Data + (ulonglong)uVar1 * 8) + 0x2c0)
  ;
  if (*(int *)(lVar3 + 0x5c8) <= (int)(uint)uVar2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FWN_ISKM_InstanceData *)(*pcVar4)();
      return pFVar6;
    }
  }
  return (FWN_ISKM_InstanceData *)((ulonglong)uVar2 * 0x80 + *(longlong *)(lVar3 + 0x5c0));
}

// GetPrivateStaticClass @ 14a84b440

UClass * __cdecl UWN_ISKM_Subsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_Subsystem",
               &Z_Registration_Info_UClass_UWN_ISKM_Subsystem.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_Subsystem,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_ISKM_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_ISKM_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_Subsystem.InnerSingleton;
}

// GetStatId @ 14a84b690

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UWN_ISKM_Subsystem::GetStatId(UWN_ISKM_Subsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_ISKM_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_ISKM_Subsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UWN_ISKM_Subsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_ISKM_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_ISKM_Subsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UWN_ISKM_Subsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UWN_ISKM_Subsystem,*pFVar1,
                   L"UWN_ISKM_Subsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UWN_ISKM_Subsystem;
  if (StatPtr_UWN_ISKM_Subsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_ISKM_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_ISKM_Subsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UWN_ISKM_Subsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_ISKM_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_ISKM_Subsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UWN_ISKM_Subsystem,*pFVar1,
                         L"UWN_ISKM_Subsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 14a84b980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWN_ISKM_Subsystem::GetTickableGameObjectWorld(UWN_ISKM_Subsystem *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].ISKMActorIndexMap.field_0x28);
  return pUVar1;
}

// Initialize @ 14a84fff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWN_ISKM_Subsystem::Initialize(UWN_ISKM_Subsystem *this,FSubsystemCollectionBase *param_1)

{
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  TArray<FWN_ISKM_LodFragment,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ControllerLodFragments,
             (this->ControllerIndexAllocator).NumIndices -
             (this->ControllerIndexAllocator).BaseIndex,Default);
  if (4 < (byte)ISKM._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
    return;
  }
  return;
}

// IsTickableInEditor @ 14a8501c0

bool __thiscall UWN_ISKM_Subsystem::IsTickableInEditor(UWN_ISKM_Subsystem *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].ISKMActorIndexMap.field_0x30 >> 4) & 1);
}

// IsTickableWhenPaused @ 14a8501e0

bool __thiscall UWN_ISKM_Subsystem::IsTickableWhenPaused(UWN_ISKM_Subsystem *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].ISKMActorIndexMap.field_0x30 >> 4) & 1);
}

// RegisterController @ 14a851b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UWN_ISKM_Subsystem::RegisterController(UWN_ISKM_Subsystem *this,IWN_ISKM_Controller *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1->IndexInSubsystem == -1) {
    uVar5 = FWN_UniqueIndexAllocator::Acquire(&this->ControllerIndexAllocator);
    iVar7 = (this->ControllerIndexAllocator).NumIndices - (this->ControllerIndexAllocator).BaseIndex
    ;
    if ((this->ControllerLodFragments).ArrayNum < iVar7) {
      TArray<FWN_ISKM_LodFragment,TSizedDefaultAllocator<32>_>::SetNum
                (&this->ControllerLodFragments,iVar7,Default);
    }
    uVar6 = 0;
    if ((int)uVar5 < (this->ControllerLodFragments).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    pFVar2 = (this->ControllerLodFragments).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(int)uVar5 * 0x20;
    *(uint *)pFVar1 = *(uint *)pFVar1 | 1;
    *(IWN_ISKM_Controller **)(pFVar2 + (longlong)(int)uVar5 * 0x20 + 0x18) = param_1;
    param_1->IndexInSubsystem = uVar5;
    param_1->ISKMSubsystem = this;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2878563012506026424>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
                       ,0x1b8,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RemoveInstance @ 14a853040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWN_ISKM_Subsystem::RemoveInstance(UWN_ISKM_Subsystem *this,FWN_ISKM_InstanceKey *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  AActor *pAVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  UWorld *this_00;
  longlong lVar12;
  
  uVar1 = (param_1->_s_0).ActorIndex;
  if ((this->ISKMActors).ArrayNum <= (int)(uint)uVar1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("actorIndex < ISKMActors.Num()",
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
                        ,0x222,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this->ISKMActors).ArrayNum <= (int)(uint)uVar1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar2 = (param_1->_s_0).InstanceIndex;
  pAVar4 = *(AActor **)((this->ISKMActors).AllocatorInstance.Data + (ulonglong)uVar1 * 8);
  lVar5 = pAVar4[1]._padding_;
  FWN_UniqueIndexAllocator::Release((FWN_UniqueIndexAllocator *)(lVar5 + 0x5a0),(uint)uVar2);
  if (*(int *)(lVar5 + 0x5c8) <= (int)(uint)uVar2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar5 + 0x5c0);
  lVar12 = (ulonglong)uVar2 * 0x80;
  *(undefined1 *)(lVar12 + lVar6) = 1;
  *(undefined2 *)(lVar12 + 2 + lVar6) = 0;
  *(undefined8 *)(lVar12 + 4 + lVar6) = 0xffffffffffffffff;
  *(undefined4 *)(lVar12 + 0xc + lVar6) = 0;
  auVar8._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  auVar8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(lVar12 + 0x30 + lVar6) = auVar8;
  auVar9._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  auVar9._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  auVar9._12_4_ = 0;
  *(undefined1 (*) [16])(lVar12 + 0x60 + lVar6) = auVar9;
  iVar3 = *(int *)(lVar5 + 0x5d0);
  if (0 < iVar3) {
    memset((void *)(*(longlong *)(lVar5 + 0x5d8) + (longlong)(int)(iVar3 * (uint)uVar2) * 4),0,
           (longlong)iVar3 << 2);
  }
  if (*(int *)(lVar5 + 0x5a8) - *(int *)(lVar5 + 0x5b8) == *(int *)(lVar5 + 0x5a4)) {
    if (*(int *)&(this->ISKMActorIndexMap).field_0x8 !=
        *(int *)&(this->ISKMActorIndexMap).field_0x34) {
      uVar11 = (*FCrc::MemCrc32Func)(&pAVar4[1]._padding_,0x10,0);
      TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<FWN_ISKM_Key>
                ((TSet<TTuple<FWN_ISKM_Key,int>,TDefaultMapHashableKeyFuncs<FWN_ISKM_Key,int,0>,FDefaultSetAllocator>
                  *)&this->ISKMActorIndexMap,uVar11,(FWN_ISKM_Key *)&pAVar4[1]._padding_);
    }
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    UWorld::DestroyActor(this_00,pAVar4,false,false);
    if ((this->ISKMActors).ArrayNum <= (int)(uint)uVar1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(undefined8 *)((this->ISKMActors).AllocatorInstance.Data + (ulonglong)uVar1 * 8) = 0;
  }
  return;
}

// ShouldCreateSubsystem @ 14a854ff0

bool __thiscall UWN_ISKM_Subsystem::ShouldCreateSubsystem(UWN_ISKM_Subsystem *this,UObject *param_1)

{
  return true;
}

// StaticRegisterNativesUWN_ISKM_Subsystem @ 14a855f50

void __cdecl UWN_ISKM_Subsystem::StaticRegisterNativesUWN_ISKM_Subsystem(void)

{
  return;
}

// Tick @ 14a855fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_ISKM_Subsystem::Tick(UWN_ISKM_Subsystem *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  APlayerCameraManager *pAVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong *plVar9;
  code *pcVar10;
  TConsoleVariableData<float> *pTVar11;
  TConsoleVariableData<float> *pTVar12;
  TConsoleVariableData<int> *pTVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  UWorld *this_00;
  APlayerController *this_01;
  longlong lVar17;
  TVector<double> *pTVar18;
  ForAnyElementType *pFVar19;
  ulonglong uVar20;
  int iVar21;
  byte *pbVar22;
  ForAnyElementType FVar23;
  ForAnyElementType FVar24;
  longlong *plVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  <lambda_1> local_res8;
  char local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [2];
  int local_1f4;
  ForAnyElementType local_1f0;
  int local_1e8 [2];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  double local_1d0;
  uint local_1c8;
  int local_1c0;
  int local_1bc;
  FScriptContainerElement *local_1b8;
  float local_1b0;
  TArrayView<std::nullptr_t,int> local_1a8;
  code *local_198;
  int *local_190;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  int *local_170;
  TArrayView<std::nullptr_t,int> local_168;
  code *local_158;
  int *local_150;
  int local_148;
  int local_144;
  FScriptContainerElement *local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  int local_108;
  int local_104;
  FScriptContainerElement *local_100;
  float local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  void *local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  TVector<double> local_b0 [5];
  
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].ISKMActorIndexMap.field_0x28);
  fVar33 = (float)this_00->TimeSeconds;
  bVar14 = UWorld::IsPlayInEditor(this_00);
  if (!bVar14) {
    UWorld::IsGameWorld(this_00);
  }
  local_1e0 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  uStack_1d8 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    sCamDir.field0_0x0._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    sCamDir.field0_0x0._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    sCamDir.field0_0x0._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    _Init_thread_footer(&::_TSS0);
  }
  this_01 = UWorld::GetFirstPlayerController(this_00);
  if ((this_01 != (APlayerController *)0x0) &&
     (pUVar5 = (UObject *)this_01->_padding_, pUVar5 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pAVar6 = (this_01->PlayerCameraManager).field0_0x0.DebugPtr;
    lVar17 = (**(code **)(pAVar6->_padding_ + 0x798))(pAVar6);
    sNearDist = *(float *)(lVar17 + 0x58);
    if (*(float *)(lVar17 + 0x58) <= 0.0) {
      sNearDist = GNearClippingPlane;
    }
    lVar7 = *(longlong *)(pUVar5 + 0xb);
    uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar7 != 0) {
      local_b8 = *(double *)(lVar7 + 0x220);
      local_c8 = *(undefined4 *)(lVar7 + 0x210);
      uStack_c4 = *(undefined4 *)(lVar7 + 0x214);
      uStack_c0 = *(undefined4 *)(lVar7 + 0x218);
      uStack_bc = *(undefined4 *)(lVar7 + 0x21c);
      uVar29 = local_c8;
      uVar30 = uStack_c4;
      uVar31 = uStack_c0;
      uVar32 = uStack_bc;
      local_1d0 = local_b8;
    }
    local_1e0 = CONCAT44(uVar30,uVar29);
    uStack_1d8 = CONCAT44(uVar32,uVar31);
    pTVar18 = UE::Math::TRotator<double>::RotateVector
                        ((TRotator<double> *)(lVar17 + 0x18),local_b0,
                         &UE::Math::TVector<double>::XAxisVector);
    sCamDir.field0_0x0._s_0.X = (pTVar18->field0_0x0)._s_0.X;
    sCamDir.field0_0x0._s_0.Y = (pTVar18->field0_0x0)._s_0.Y;
    sCamDir.field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
    fVar27 = (float)(**(code **)(pAVar6->_padding_ + 0x800))(pAVar6);
    sFovH = fVar27 * __real_3c8efa35;
    APlayerController::GetViewportSize(this_01,&sWidth,&sHeight);
    sAspectRatio = (float)sWidth / (float)sHeight;
  }
  fVar27 = sAspectRatio;
  fVar28 = tanf(sFovH * __real_3f000000);
  fVar27 = atanf(fVar28 / fVar27);
  pTVar11 = CVar_ISKM_LodSkeletalMaxDistance.Ref;
  sFovV = fVar27 + fVar27;
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar12 = CVar_ISKM_LodMaxDistance.Ref;
  fVar27 = pTVar11->ShadowedValue[0];
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar13 = CVar_ISKM_LodTickInterval.Ref;
  fVar28 = pTVar12->ShadowedValue[0];
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar11 = CVar_ISKM_LodDistRatioExponent.Ref;
  iVar3 = pTVar13->ShadowedValue[0];
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar2 = pTVar11->ShadowedValue[0];
  uVar4 = (uint)this->_padding_;
  lVar17 = (longlong)(int)uVar4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`UWN_ISKM_Subsystem::Tick'::__l9::_dynamic_atexit_destructor_for__sCandidates__);
    _Init_thread_footer(&::_TSS1);
  }
  uVar20 = (ulonglong)(uint)sCandidates.ArrayMax;
  if (sCandidates.ArrayMax < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar20);
  }
  sCandidates.ArrayNum = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (sCandidates.ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&sCandidates.AllocatorInstance,0,&sCandidates.ArrayMax);
    uVar20 = (ulonglong)(uint)sCandidates.ArrayMax;
  }
  pbVar8 = (byte *)this->_padding_;
  iVar21 = 0;
  pbVar22 = pbVar8;
  iVar16 = sCandidates.ArrayNum;
  if (0 < (int)uVar4) {
    do {
      if ((*pbVar22 & 1) != 0) {
        if (iVar16 == (int)uVar20) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&sCandidates.AllocatorInstance,&sCandidates.ArrayMax);
        }
        sCandidates.ArrayNum = iVar16 + 1;
        *(byte **)(sCandidates.AllocatorInstance.Data + (longlong)iVar16 * 8) =
             pbVar8 + (longlong)iVar21 * 0x20;
        uVar20 = (ulonglong)(uint)sCandidates.ArrayMax;
        iVar16 = sCandidates.ArrayNum;
      }
      iVar21 = iVar21 + 1;
      lVar17 = lVar17 + -1;
      pbVar22 = pbVar22 + 0x20;
    } while (lVar17 != 0);
  }
  iVar16 = FWindowsPlatformMisc::NumberOfCores();
  iVar21 = sCandidates.ArrayNum;
  FVar24 = sCandidates.AllocatorInstance;
  if (iVar16 < 1) {
    iVar16 = 1;
  }
  local_1c8 = ~(iVar16 - 1U);
  iVar26 = (int)(sCandidates.ArrayNum + -1 + iVar16 & local_1c8) / iVar16;
  local_1f4 = iVar16;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"ISKM_LodLevels");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId288,"ISKM_LodLevels",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
               ,0x120);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId288);
  }
  local_198 = UE::Core::Private::Function::
              TFunctionRefCaller<`UWN_ISKM_Subsystem::Tick'::__l15::<lambda_1>,void,int>::Call;
  local_190 = &local_148;
  local_1a8.DataPtr = (void **)0x0;
  local_1a8.ArrayNum = 0;
  local_res8 = SUB81(this,0);
  local_148 = iVar21;
  local_140 = FVar24.Data;
  local_120 = local_1e0;
  uStack_118 = uStack_1d8;
  local_110 = local_1d0;
  local_144 = iVar26;
  local_138 = param_1;
  local_134 = fVar27;
  local_130 = fVar28;
  local_12c = (float)iVar3;
  local_128 = fVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar16,1,(TFunctionRef<void___cdecl(int)> *)&local_198,local_res8,
             None,&local_1a8);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"ISKM_VisibilityAndTick");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId310,"ISKM_VisibilityAndTick",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
               ,0x136);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId310);
  }
  iVar3 = sCandidates.ArrayNum;
  uVar20 = (ulonglong)sCandidates.ArrayNum;
  pFVar1 = sCandidates.AllocatorInstance.Data + uVar20 * 8;
  FVar23.Data = sCandidates.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar20 != iVar3) {
      local_res18[0] = '\0';
      `TCheckedPointerIterator<FWN_ISKM_LodFragment_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar23.Data == pFVar1) break;
    plVar9 = *(longlong **)(*(longlong *)FVar23.Data + 0x18);
    (**(code **)(*plVar9 + 0x20))(plVar9,*(longlong *)FVar23.Data,fVar33);
    uVar20 = (ulonglong)(uint)sCandidates.ArrayNum;
    FVar23.Data = FVar23.Data + 8;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"ISKM_Components");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId320,"ISKM_Components",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
               ,0x140);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId320);
  }
  local_178 = UE::Core::Private::Function::
              TFunctionRefCaller<`UWN_ISKM_Subsystem::Tick'::__l21::<lambda_2>,void,int>::Call;
  local_170 = &local_1c0;
  local_1c0 = iVar21;
  local_1b8 = FVar24.Data;
  local_188.DataPtr = (void **)0x0;
  local_188.ArrayNum = 0;
  local_1bc = iVar26;
  local_1b0 = fVar33;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_1f4,1,(TFunctionRef<void___cdecl(int)> *)&local_178,
             local_res8,None,&local_188);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"ATTCreateInstanceTasks");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId343,"ATTCreateInstanceTasks",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
               ,0x157);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId343);
  }
  iVar3 = sCandidates.ArrayNum;
  uVar20 = (ulonglong)sCandidates.ArrayNum;
  pFVar1 = sCandidates.AllocatorInstance.Data + uVar20 * 8;
  FVar24.Data = sCandidates.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar20 != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FWN_ISKM_LodFragment_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    iVar16 = local_1f4;
    if (FVar24.Data == pFVar1) break;
    pFVar19 = (ForAnyElementType *)
              (**(code **)(**(longlong **)(*(longlong *)FVar24.Data + 0x18) + 0x30))
                        (*(longlong **)(*(longlong *)FVar24.Data + 0x18),local_d8,fVar33,&local_1e0,
                         &sCamDir,sFovH);
    if ((&local_1f0 == pFVar19) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar16 = *(int *)&pFVar19[1].Data;
    if (iVar16 != 0) {
      iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar16,&local_1f0,local_1e8,local_1e8 + 1);
      memmove(local_1f0.Data + (longlong)iVar21 * 0x10,pFVar19->Data,(longlong)iVar16 << 4);
      *(undefined4 *)&pFVar19[1].Data = 0;
    }
    if (local_d8[0] != (void *)0x0) {
      FMemory::Free(local_d8[0]);
    }
    uVar20 = (ulonglong)(uint)sCandidates.ArrayNum;
    FVar24.Data = FVar24.Data + 8;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  iVar3 = local_1e8[0];
  if (0 < local_1e8[0]) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"ATTUpdateInstanceTasks");
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId354,"ATTUpdateInstanceTasks",
                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
                 ,0x162);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId354);
    }
    local_108 = iVar3;
    local_104 = (int)(iVar16 + -1 + iVar3 & local_1c8) / iVar16;
    local_e0 = local_1d0;
    local_100 = local_1f0.Data;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`UWN_ISKM_Subsystem::Tick'::__l30::<lambda_3>,void,int>::Call;
    local_150 = &local_108;
    local_f0 = local_1e0;
    uStack_e8 = uStack_1d8;
    local_168.DataPtr = (void **)0x0;
    local_168.ArrayNum = 0;
    local_f8 = fVar33;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar16,1,(TFunctionRef<void___cdecl(int)> *)&local_158,local_res8
               ,None,&local_168);
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"ATTCreateInstanceTasks");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId380,"ATTCreateInstanceTasks",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
               ,0x17c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId380);
  }
  iVar3 = sCandidates.ArrayNum;
  uVar20 = (ulonglong)sCandidates.ArrayNum;
  pFVar1 = sCandidates.AllocatorInstance.Data + uVar20 * 8;
  FVar24.Data = sCandidates.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar20 != iVar3) {
      `TCheckedPointerIterator<FWN_ISKM_LodFragment_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1f8);
    }
    if (FVar24.Data == pFVar1) break;
    (**(code **)(**(longlong **)(*(longlong *)FVar24.Data + 0x18) + 0x40))
              (*(longlong **)(*(longlong *)FVar24.Data + 0x18),fVar33);
    uVar20 = (ulonglong)(uint)sCandidates.ArrayNum;
    FVar24.Data = FVar24.Data + 8;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"ISKM_VisibilityAndTick");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId391,"ISKM_VisibilityAndTick",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
               ,0x187);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId391);
  }
  iVar3 = sCandidates.ArrayNum;
  uVar20 = (ulonglong)sCandidates.ArrayNum;
  pFVar1 = sCandidates.AllocatorInstance.Data + uVar20 * 8;
  FVar24.Data = sCandidates.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar20 != iVar3) {
      `TCheckedPointerIterator<FWN_ISKM_LodFragment_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1f7);
    }
    if (FVar24.Data == pFVar1) break;
    plVar9 = *(longlong **)(*(longlong *)FVar24.Data + 0x18);
    (**(code **)(*plVar9 + 0x48))(plVar9,*(longlong *)FVar24.Data,fVar33);
    uVar20 = (ulonglong)(uint)sCandidates.ArrayNum;
    FVar24.Data = FVar24.Data + 8;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"ISKM_ISM");
  if (CpuChannel->Enabled < 0) {
    local_res18[0] = '\0';
  }
  else {
    local_res18[0] = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId401,"ISKM_ISM",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Subsystem.cpp"
               ,0x191);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId401);
  }
  plVar25 = *(longlong **)&(this->ISKMActorIndexMap).field_0x18;
  iVar3 = *(int *)&(this->ISKMActorIndexMap).field_0x20;
  plVar9 = plVar25 + iVar3;
  while( true ) {
    if (*(int *)&(this->ISKMActorIndexMap).field_0x20 != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<AWN_ISKM_ISKMActor>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_1f6);
    }
    if (plVar25 == plVar9) break;
    if (*plVar25 != 0) {
      UWN_ISKM_ISKMComponent::RefreshRenderingData(*(UWN_ISKM_ISKMComponent **)(*plVar25 + 0x2c0));
    }
    plVar25 = plVar25 + 1;
  }
  if (local_res18[0] != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UnregisterController @ 14a856da0

void __thiscall
UWN_ISKM_Subsystem::UnregisterController(UWN_ISKM_Subsystem *this,IWN_ISKM_Controller *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  uVar1 = param_1->IndexInSubsystem;
  if ((uVar1 != 0xffffffff) || ((this->ControllerLodFragments).ArrayNum < 0)) {
    param_1->IndexInSubsystem = -1;
    param_1->ISKMSubsystem = (UWN_ISKM_Subsystem *)0x0;
    uVar4 = 0;
    if ((int)uVar1 < (this->ControllerLodFragments).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (this->ControllerLodFragments).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20;
    *(uint *)pFVar5 = *(uint *)pFVar5 & 0xfffffff0 | 0x10;
    FWN_UniqueIndexAllocator::Release(&this->ControllerIndexAllocator,uVar1);
  }
  return;
}

