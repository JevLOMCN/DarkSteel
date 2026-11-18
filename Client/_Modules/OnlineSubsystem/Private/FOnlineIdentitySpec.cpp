// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 8

// GetTestFlags @ 14eb23f10

EAutomationTestFlags __thiscall FOnlineIdentitySpec::GetTestFlags(FOnlineIdentitySpec *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 14eb23f20

FString * __thiscall
FOnlineIdentitySpec::GetTestSourceFileName
          (FOnlineIdentitySpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Test\\OnlineIdentity.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14eb23f50

int __thiscall FOnlineIdentitySpec::GetTestSourceFileLine(FOnlineIdentitySpec *this)

{
  return 0xf;
}

// GetBeautifiedTestName @ 14eb23f60

FString * __thiscall
FOnlineIdentitySpec::GetBeautifiedTestName
          (FOnlineIdentitySpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"OnlineIdentityInterface");
  return __return_storage_ptr__;
}

// Define @ 14eb23f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FOnlineIdentitySpec::Define(FOnlineIdentitySpec *this)

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
  undefined1 auStackY_188 [32];
  FString local_148;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  TArray<FName,TSizedDefaultAllocator<32>_> local_128;
  FName local_118 [2];
  code *local_108;
  undefined **local_f8;
  FOnlineIdentitySpec *local_f0;
  FName local_e8;
  undefined ***local_e0;
  FString local_d8;
  code *local_c8 [5];
  undefined8 *local_a0;
  code *local_98 [2];
  undefined **local_88;
  FOnlineIdentitySpec *local_80;
  undefined8 local_70;
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FOnlineTestCommon::GetEnabledTestSubsystems(&local_128);
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < local_128.ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar3 = 0;
      if ((int)uVar8 < local_128.ArrayNum) {
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
      local_e0 = (undefined ***)0x0;
      local_f8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FOnlineIdentitySpec::Define'::`4'::<lambda_1>,0,0>::
                  _vftable_;
      local_118[0] = *(FName *)(local_128.AllocatorInstance.Data + uVar10);
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FOnlineIdentitySpec::Define'::__l4::<lambda_1>,void>::Call;
      local_f0 = this;
      local_e8 = local_118[0];
      pFVar4 = ::FName::ToString(local_118,&local_d8);
      local_68 = local_108;
      local_40 = (longlong *)0x0;
      if (local_108 != (code *)0x0) {
        pppuVar6 = &local_f8;
        if (local_e0 != (undefined ***)0x0) {
          pppuVar6 = local_e0;
        }
        (*(code *)**pppuVar6)(pppuVar6,&local_58);
      }
      local_c8[0] = (code *)0x0;
      local_a0 = (undefined8 *)0x0;
      local_a0 = FMemory::Malloc(0x40,0x10);
      *local_a0 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__Describe_FAutomationSpecBase__QEAAXAEBVFString__V__TFunction___A6AXXZ___Z__0A__00_Function_Private_Core_UE__6B_
      ;
      plVar5 = local_a0 + 2;
      *plVar5 = (longlong)local_68;
      local_a0[7] = local_40;
      local_40 = (longlong *)0x0;
      local_a0[4] = local_58;
      local_a0[5] = uStack_50;
      local_a0[6] = local_48;
      if (*plVar5 != 0) {
        local_68 = (code *)0x0;
      }
      if (plVar5 != (longlong *)0x0) {
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FAutomationSpecBase::Describe'::__l2::<lambda_1>,void,int>
                      ::Call;
      }
      local_148.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      lVar7 = (longlong)local_148.Data.ArrayNum;
      _Src = (pFVar4->Data).AllocatorInstance.Data;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_148.Data.ArrayNum == 0) {
        local_148.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_148,
                   local_148.Data.ArrayNum,&local_148.Data.ArrayMax);
        memcpy(local_148.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
      }
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
      ConstructItems<FString,FString,int>(local_138.AllocatorInstance.Data,&local_148,1);
      FAutomationSpecBase::Describe
                ((FAutomationSpecBase *)this,&local_138,(TFunction<void___cdecl(int)> *)local_c8);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_68 != (code *)0x0) {
        plVar5 = &local_58;
        if (local_40 != (longlong *)0x0) {
          plVar5 = local_40;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_108 != (code *)0x0) {
        pppuVar6 = &local_f8;
        if (local_e0 != (undefined ***)0x0) {
          pppuVar6 = local_e0;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < local_128.ArrayNum);
  }
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FOnlineIdentitySpec::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FOnlineIdentitySpec::Define'::__l2::<lambda_2>,void>::Call;
  local_80 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_98);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return;
}

// ~FOnlineIdentitySpec @ 14eb35220

void __thiscall FOnlineIdentitySpec::~FOnlineIdentitySpec(FOnlineIdentitySpec *this)

{
  FScriptContainerElement *pFVar1;
  
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
            ((this->OnlineIdentity).SharedReferenceCount.ReferenceController);
  FOnlineTestCommon::~FOnlineTestCommon(&this->CommonUtils);
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 14eb71e60

void __thiscall `FOnlineIdentitySpec::Define'::__l4::<lambda_1>::operator()(void *this)

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
              TFunction_OwnedObject<``FOnlineIdentitySpec::Define'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = *(undefined8 *)((longlong)this + 8);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FOnlineIdentitySpec::Define'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  FAutomationSpecBase::BeforeEach(local_20,(TFunction<void___cdecl(void)> *)local_38);
  this_00 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FOnlineIdentitySpec::Define'::`4'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_18 = *(undefined8 *)((longlong)this + 8);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FOnlineIdentitySpec::Define'::__l4::<lambda_1>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_10 = 0;
  local_20 = this_00;
  ::FString::FString(&local_48,"Online Identity Interface");
  FAutomationSpecBase::Describe(this_00,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14eb8c400

void __thiscall `FOnlineIdentitySpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  plVar1 = *(longlong **)(*(longlong *)this + 0x250);
  if (plVar1 != (longlong *)0x0) {
    iVar5 = (**(code **)(*plVar1 + 0x138))(plVar1,0);
    if (iVar5 == 2) {
      lVar2 = *(longlong *)this;
      if (*(longlong *)(lVar2 + 0x250) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar1 = *(longlong **)(lVar2 + 0x250);
      (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    }
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0x250) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar1 = *(longlong **)(lVar2 + 0x250);
    (**(code **)(*plVar1 + 0x98))(plVar1,0,*(longlong *)this + 0x298);
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0x250) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar1 = *(longlong **)(lVar2 + 0x250);
    (**(code **)(*plVar1 + 0xc0))(plVar1,0,*(longlong *)this + 0x290);
    lVar2 = *(longlong *)this;
    puVar7 = (undefined8 *)(lVar2 + 0x250);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (puVar7 != &local_18) {
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar2 + 600),&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  pwVar6 = FCommandLine::GetOriginal();
  FCommandLine::Set(pwVar6);
  return;
}

