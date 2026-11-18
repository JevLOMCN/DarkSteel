// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FUAVTracker @ 145cd1c10

FUAVTracker * __thiscall RHIValidation::FTracker::FUAVTracker::FUAVTracker(FUAVTracker *this)

{
  int *piVar1;
  
  piVar1 = &(this->UAVs).ArrayMax;
  (this->UAVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UAVs).ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,8,(ForAnyElementType *)this,0,piVar1);
  return this;
}

// ~FUAVTracker @ 145cd2d10

void __thiscall RHIValidation::FTracker::FUAVTracker::~FUAVTracker(FUAVTracker *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->UAVs).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// DrawOrDispatch @ 145cda1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
RHIValidation::FTracker::FUAVTracker::DrawOrDispatch
          (FUAVTracker *this,FTracker *param_1,FState *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<RHIValidation::FResourceIdentity> FVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<RHIValidation::FResourceIdentity> FVar11;
  longlong lVar12;
  undefined1 auStack_258 [32];
  FViewIdentity *local_238;
  ForElementType<RHIValidation::FResourceIdentity> local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  FViewIdentity local_208;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  FResource *pFStack_1d8;
  FState local_1b8;
  FState local_1b0;
  undefined8 uStack_1a8;
  void *local_1a0;
  FOperation local_198;
  ForElementType<RHIValidation::FResourceIdentity> local_150;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_258;
  FVar11 = (ForElementType<RHIValidation::FResourceIdentity>)0x0;
  uVar9 = 0;
  local_150.SecondaryData = (ForElementType<RHIValidation::FResourceIdentity>)0x0;
  iVar6 = (this->UAVs).ArrayNum;
  local_48 = 0;
  local_44 = 8;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar6) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_230 = (ForElementType<RHIValidation::FResourceIdentity>)(longlong)iVar6;
        local_238 = (FViewIdentity *)(longlong)(int)uVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar11 = local_150.SecondaryData;
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong *)((this->UAVs).AllocatorInstance.Data + lVar12) != 0) {
        iVar6 = (this->UAVs).ArrayNum;
        uVar8 = 0;
        if ((int)uVar9 < iVar6) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_238 = (FViewIdentity *)(longlong)(int)uVar9;
          local_230 = (ForElementType<RHIValidation::FResourceIdentity>)(longlong)iVar6;
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
        lVar10 = *(longlong *)((this->UAVs).AllocatorInstance.Data + lVar12);
        FViewIdentity::FViewIdentity
                  (&local_208,*(FRHIViewableResource **)(lVar10 + 0x18),
                   (FRHIViewDesc *)(lVar10 + 0x20));
        lVar10 = 0;
        FVar11 = local_150.SecondaryData;
        iVar6 = local_48;
        for (uVar8 = 0; (int)uVar8 < iVar6; uVar8 = uVar8 + 1) {
          uVar5 = 0;
          if ((int)uVar8 < iVar6) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_230 = (ForElementType<RHIValidation::FResourceIdentity>)(longlong)iVar6;
            local_238 = (FViewIdentity *)(longlong)(int)uVar8;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            FVar11 = local_150.SecondaryData;
            iVar6 = local_48;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FVar7 = (ForElementType<RHIValidation::FResourceIdentity>)&local_150;
          if (FVar11 != (ForElementType<RHIValidation::FResourceIdentity>)0x0) {
            FVar7 = FVar11;
          }
          if (((((*(FResource **)(lVar10 + (longlong)FVar7) == (FResource *)local_208._padding_) &&
                (*(int *)(lVar10 + 8 + (longlong)FVar7) == (int)local_208._padding_)) &&
               (*(int *)(lVar10 + 0xc + (longlong)FVar7) == local_208._padding_._4_4_)) &&
              ((*(int *)(lVar10 + 0x10 + (longlong)FVar7) == (int)local_208._padding_ &&
               (*(int *)(lVar10 + 0x14 + (longlong)FVar7) == local_208._padding_._4_4_)))) &&
             ((*(int *)(lVar10 + 0x18 + (longlong)FVar7) == (int)local_208._padding_ &&
              (*(int *)(lVar10 + 0x1c + (longlong)FVar7) == local_208._padding_._4_4_))))
          goto LAB_145cda54b;
          lVar10 = lVar10 + 0x20;
        }
        if ((GRHIGlobals.MaxSimultaneousUAVs <= iVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("UniqueIdentities.Num() < GRHIGlobals.MaxSimultaneousUAVs",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                               ,0x14f,L""), FVar11 = local_150.SecondaryData, iVar6 = local_48,
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar7 = (ForElementType<RHIValidation::FResourceIdentity>)&local_150;
        if (FVar11 != (ForElementType<RHIValidation::FResourceIdentity>)0x0) {
          FVar7 = FVar11;
        }
        if ((ulonglong)FVar7 <= &local_208) {
          FVar7 = (ForElementType<RHIValidation::FResourceIdentity>)&local_150;
          if (FVar11 != (ForElementType<RHIValidation::FResourceIdentity>)0x0) {
            FVar7 = FVar11;
          }
          if (&local_208 < (FViewIdentity *)((longlong)local_44 * 0x20 + (longlong)FVar7)) {
            local_220 = (longlong)iVar6;
            local_218 = 0x20;
            local_238 = &local_208;
            local_230 = (ForElementType<RHIValidation::FResourceIdentity>)&local_150;
            if (FVar11 != (ForElementType<RHIValidation::FResourceIdentity>)0x0) {
              local_230 = FVar11;
            }
            local_228 = (longlong)local_44;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            FVar11 = local_150.SecondaryData;
            iVar6 = local_48;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        if (iVar6 == local_44) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<RHIValidation::FResourceIdentity>_>
                            (0x820,&local_150,&local_44);
          FVar11 = local_150.SecondaryData;
        }
        local_48 = iVar6 + 1;
        FVar7 = (ForElementType<RHIValidation::FResourceIdentity>)&local_150;
        if (FVar11 != (ForElementType<RHIValidation::FResourceIdentity>)0x0) {
          FVar7 = FVar11;
        }
        plVar1 = (longlong *)((longlong)iVar6 * 0x20 + (longlong)FVar7);
        *plVar1 = local_208._padding_;
        plVar1[1] = CONCAT44(local_208._padding_._4_4_,(int)local_208._padding_);
        puVar2 = (undefined8 *)((longlong)iVar6 * 0x20 + 0x10 + (longlong)FVar7);
        *puVar2 = CONCAT44(local_208._padding_._4_4_,(int)local_208._padding_);
        puVar2[1] = CONCAT44(local_208._padding_._4_4_,(int)local_208._padding_);
        local_1b8 = *param_2;
        LOCK();
        ((FThreadSafeCounter *)(local_208._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_208._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        pFStack_1d8 = (FResource *)local_208._padding_;
        local_1e0 = 7;
        local_198._4_4_ = uStack_1dc;
        local_198.Type = Assert;
        local_198.field1_0x8.Data_BeginTransition.Identity.Resource =
             (FResource *)local_208._padding_;
        local_198.field1_0x8.Data_BeginTransition.CreateBacktrace = local_1a0;
        local_198.field1_0x8.Data_BeginTransition.NextState = local_1b0;
        local_198.field1_0x8._48_8_ = uStack_1a8;
        local_198.field1_0x8.Data_BeginTransition.PreviousState = local_1b8;
        AddOp(param_1,&local_198);
        FVar11 = local_150.SecondaryData;
      }
LAB_145cda54b:
      iVar6 = (this->UAVs).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar9 < iVar6);
  }
  if (FVar11 != (ForElementType<RHIValidation::FResourceIdentity>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  return;
}

