// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 7

// GetTestFlags @ 14eb26340

EAutomationTestFlags __thiscall FOnlineAchievementsSpec::GetTestFlags(FOnlineAchievementsSpec *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 14eb26350

FString * __thiscall
FOnlineAchievementsSpec::GetTestSourceFileName
          (FOnlineAchievementsSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Test\\OnlineAchievements.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14eb26380

int __thiscall FOnlineAchievementsSpec::GetTestSourceFileLine(FOnlineAchievementsSpec *this)

{
  return 8;
}

// GetBeautifiedTestName @ 14eb26390

FString * __thiscall
FOnlineAchievementsSpec::GetBeautifiedTestName
          (FOnlineAchievementsSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"OnlineAchievementsInterface");
  return __return_storage_ptr__;
}

// Define @ 14eb263c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FOnlineAchievementsSpec::Define(FOnlineAchievementsSpec *this)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStackY_158 [32];
  FString local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TArray<FName,TSizedDefaultAllocator<32>_> local_f8;
  FName local_e8 [2];
  code *local_d8;
  undefined **local_c8;
  FOnlineAchievementsSpec *local_c0;
  FName local_b8;
  undefined ***local_b0;
  FString local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FOnlineTestCommon::GetEnabledTestSubsystems(&local_f8);
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < local_f8.ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar3 = 0;
      if ((int)uVar8 < local_f8.ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_b0 = (undefined ***)0x0;
      local_c8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FOnlineAchievementsSpec::Define'::`4'::<lambda_1>,0,0>::
                  _vftable_;
      local_e8[0] = *(FName *)(local_f8.AllocatorInstance.Data + uVar10);
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FOnlineAchievementsSpec::Define'::__l4::<lambda_1>,void>::Call;
      local_c0 = this;
      local_b8 = local_e8[0];
      pFVar4 = ::FName::ToString(local_e8,&local_a8);
      local_68 = local_d8;
      local_40 = (longlong *)0x0;
      if (local_d8 != (code *)0x0) {
        pppuVar6 = &local_c8;
        if (local_b0 != (undefined ***)0x0) {
          pppuVar6 = local_b0;
        }
        (*(code *)**pppuVar6)(pppuVar6,&local_58);
      }
      local_98[0] = (code *)0x0;
      local_70 = (undefined8 *)0x0;
      local_70 = FMemory::Malloc(0x40,0x10);
      *local_70 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__Describe_FAutomationSpecBase__QEAAXAEBVFString__V__TFunction___A6AXXZ___Z__0A__00_Function_Private_Core_UE__6B_
      ;
      plVar5 = local_70 + 2;
      *plVar5 = (longlong)local_68;
      local_70[7] = local_40;
      local_40 = (longlong *)0x0;
      local_70[4] = local_58;
      local_70[5] = uStack_50;
      local_70[6] = local_48;
      if (*plVar5 != 0) {
        local_68 = (code *)0x0;
      }
      if (plVar5 != (longlong *)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FAutomationSpecBase::Describe'::__l2::<lambda_1>,void,int>
                      ::Call;
      }
      local_118.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      lVar7 = (longlong)local_118.Data.ArrayNum;
      _Src = (pFVar4->Data).AllocatorInstance.Data;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_118.Data.ArrayNum == 0) {
        local_118.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
                   local_118.Data.ArrayNum,&local_118.Data.ArrayMax);
        memcpy(local_118.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
      }
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
      ConstructItems<FString,FString,int>(local_108.AllocatorInstance.Data,&local_118,1);
      FAutomationSpecBase::Describe
                ((FAutomationSpecBase *)this,&local_108,(TFunction<void___cdecl(int)> *)local_98);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_68 != (code *)0x0) {
        plVar5 = &local_58;
        if (local_40 != (longlong *)0x0) {
          plVar5 = local_40;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_d8 != (code *)0x0) {
        pppuVar6 = &local_c8;
        if (local_b0 != (undefined ***)0x0) {
          pppuVar6 = local_b0;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < local_f8.ArrayNum);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// ~FOnlineAchievementsSpec @ 14eb34eb0

void __thiscall FOnlineAchievementsSpec::~FOnlineAchievementsSpec(FOnlineAchievementsSpec *this)

{
  FScriptContainerElement *pFVar1;
  
  FOnlineTestCommon::~FOnlineTestCommon(&this->CommonUtils);
  pFVar1 = (this->AccountCredentials).Token.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccountCredentials).Id.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccountCredentials).Type.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineIdentity).SharedReferenceCount.ReferenceController);
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 14eb71aa0

void __thiscall `FOnlineAchievementsSpec::Define'::__l4::<lambda_1>::operator()(void *this)

{
  FAutomationSpecBase *this_00;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FOnlineAchievementsSpec::Define'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = *(undefined8 *)((longlong)this + 8);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FOnlineAchievementsSpec::Define'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  FAutomationSpecBase::BeforeEach(local_20,(TFunction<void___cdecl(void)> *)local_38);
  this_00 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FOnlineAchievementsSpec::Define'::`4'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_18 = *(undefined8 *)((longlong)this + 8);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FOnlineAchievementsSpec::Define'::__l4::<lambda_1>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_10 = 0;
  local_20 = this_00;
  ::FString::FString(&local_48,"Online Achievements");
  FAutomationSpecBase::Describe(this_00,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_20 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FOnlineAchievementsSpec::Define'::`4'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FOnlineAchievementsSpec::Define'::__l4::<lambda_1>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  FAutomationSpecBase::AfterEach(local_20,ThreadPool,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

