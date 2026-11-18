// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 2

// FAnalyzerFacade @ 14d80c9e0

FAnalyzerFacade * __thiscall
Audio::FAnalyzerFacade::FAnalyzerFacade
          (FAnalyzerFacade *this,
          TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> param_1,
          IAnalyzerFactory *param_2)

{
  IAnalyzerSettings IVar1;
  
  (this->Settings).Ptr = (IAnalyzerSettings *)*param_1.Ptr;
  *param_1.Ptr = (IAnalyzerSettings)0x0;
  (this->Worker).Ptr = (IAnalyzerWorker *)0x0;
  this->Factory = param_2;
  (this->FactoryName).ComparisonIndex = 0;
  (this->FactoryName).Number = 0;
  IVar1 = *param_1.Ptr;
  if (IVar1 != (IAnalyzerSettings)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return this;
}

// AnalyzeAudioBuffer @ 14d80d610

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_> __thiscall
Audio::FAnalyzerFacade::AnalyzeAudioBuffer
          (FAnalyzerFacade *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          float param_3,TSharedPtr<Audio::IAnalyzerControls,1> *param_4)

{
  TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_> *pTVar1;
  IAnalyzerFactory *pIVar2;
  IAnalyzerWorker *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  FName this_00;
  TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_> TVar8;
  undefined4 in_register_00000084;
  FLLMScope local_res8 [2];
  undefined8 *in_stack_00000030;
  ForAnyElementType local_f8;
  FMemScope local_f0;
  int local_e8 [2];
  FName local_e0;
  undefined8 *local_d8;
  FName local_d0;
  FScriptContainerElement *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_e0 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(&local_f0,&local_e0,true);
  pIVar2 = this->Factory;
  if (pIVar2 == (IAnalyzerFactory *)0x0) {
    if (1 < (byte)LogAudioAnalyzer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    }
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    FMemScope::~FMemScope(&local_f0);
    FLLMScope::~FLLMScope(local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)in_stack_00000030[1]);
    return (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_>)
           (IAnalyzerResult *)param_1;
  }
  pTVar1 = &this->Worker;
  if ((this->Worker).Ptr == (IAnalyzerWorker *)0x0) {
    local_e8[0] = (int)param_4._0_4_;
    puVar6 = (undefined8 *)
             (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,&local_d8,local_e8,(this->Settings).Ptr)
    ;
    if (pTVar1 != (TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_> *)
                  puVar6) {
      pIVar3 = pTVar1->Ptr;
      pTVar1->Ptr = (IAnalyzerWorker *)*puVar6;
      *puVar6 = 0;
      if (pIVar3 != (IAnalyzerWorker *)0x0) {
        (**(code **)*pIVar3)(pIVar3,1);
      }
    }
    if (local_d8 != (undefined8 *)0x0) {
      (**(code **)*local_d8)(local_d8,1);
    }
    if (pTVar1->Ptr == (IAnalyzerWorker *)0x0) {
      if (1 < (byte)LogAudioAnalyzer._0_1_) {
        pFVar7 = (FName *)(**(code **)((longlong)*this->Factory + 8))(this->Factory,local_98);
        ::FName::ToString(pFVar7,&local_70);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                          ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
          _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        local_d0 = `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName;
        ::FName::ToString(&local_d0,&local_80);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      goto LAB_14d80d7f4;
    }
  }
  (**(code **)((longlong)*this->Factory + 0x18))(this->Factory,&local_f8);
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    pIVar3 = pTVar1->Ptr;
    pcVar4 = *(code **)((longlong)*pIVar3 + 0x10);
    local_c0 = *in_stack_00000030;
    local_b8 = in_stack_00000030[1];
    if (local_b8 != 0) {
      LOCK();
      *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
      UNLOCK();
    }
    (*pcVar4)(pIVar3,&local_c0);
    pIVar3 = pTVar1->Ptr;
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    local_c8 = local_f8.Data;
    local_a8 = *(undefined8 *)CONCAT44(in_register_00000084,param_2);
    iStack_a0 = *(int *)((undefined8 *)CONCAT44(in_register_00000084,param_2) + 1);
    if ((iStack_a0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar8.Ptr = (IAnalyzerResult *)(*pcVar4)();
      return (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_>)TVar8.Ptr;
    }
    local_38 = (undefined4)local_a8;
    uStack_34 = local_a8._4_4_;
    uStack_2c = uStack_9c;
    iStack_30 = iStack_a0;
    (*pcVar4)(pIVar3,&local_38,local_c8);
    (param_1->AllocatorInstance).Data = local_f8.Data;
    local_f8.Data = (FScriptContainerElement *)0x0;
    FMemScope::~FMemScope(&local_f0);
    FLLMScope::~FLLMScope(local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)in_stack_00000030[1]);
    return (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_>)
           (IAnalyzerResult *)param_1;
  }
  if (1 < (byte)LogAudioAnalyzer._0_1_) {
    pFVar7 = (FName *)(**(code **)((longlong)*this->Factory + 8))(this->Factory,local_90);
    ::FName::ToString(pFVar7,&local_50);
    this_00 = IAnalyzerFactory::GetModularFeatureName();
    ::FName::ToString((FName *)this_00,&local_60);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_f8.Data)(local_f8.Data,1);
  }
LAB_14d80d7f4:
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000030[1]);
  return (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_>)
         (IAnalyzerResult *)param_1;
}

