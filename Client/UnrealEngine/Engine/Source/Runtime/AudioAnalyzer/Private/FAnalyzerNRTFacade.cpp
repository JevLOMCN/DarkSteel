// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 2

// FAnalyzerNRTFacade @ 14d80ca30

FAnalyzerNRTFacade * __thiscall
Audio::FAnalyzerNRTFacade::FAnalyzerNRTFacade
          (FAnalyzerNRTFacade *this,
          TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>
          param_1,FName *param_2)

{
  IAnalyzerNRTSettings IVar1;
  
  (this->Settings).Ptr = (IAnalyzerNRTSettings *)*param_1.Ptr;
  *param_1.Ptr = (IAnalyzerNRTSettings)0x0;
  this->FactoryName = *param_2;
  IVar1 = *param_1.Ptr;
  if (IVar1 != (IAnalyzerNRTSettings)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return this;
}

// AnalyzePCM16Audio @ 14d80da20

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_> __thiscall
Audio::FAnalyzerNRTFacade::AnalyzePCM16Audio
          (FAnalyzerNRTFacade *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,float param_3)

{
  short *psVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  longlong *plVar4;
  bool bVar5;
  IAnalyzerNRTFactory *pIVar6;
  FName *pFVar7;
  FName this_00;
  TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_> TVar8;
  undefined8 *puVar9;
  undefined4 in_register_00000084;
  int in_R9D;
  FLLMScope local_res8 [2];
  float in_stack_00000028;
  ForAnyElementType local_158;
  longlong *local_150;
  ForAnyElementType local_148;
  int local_140 [3];
  int local_134;
  int local_12c;
  float local_128;
  undefined1 local_120 [8];
  FMemScope local_118 [2];
  FScriptContainerElement *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  FName local_f8;
  FName local_f0;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  undefined1 local_c0 [16];
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  TArrayView<float,int> local_68;
  TArrayView<short_const_,int> local_58;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_f8 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(local_118,&local_f8,true);
  pIVar6 = GetAnalyzerNRTFactory(this->FactoryName);
  if (pIVar6 == (IAnalyzerNRTFactory *)0x0) {
    if (1 < (byte)LogAudioAnalyzer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    }
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    FMemScope::~FMemScope(local_118);
    FLLMScope::~FLLMScope(local_res8);
    return (TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_>)
           (IAnalyzerNRTResult *)param_1;
  }
  (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,&local_158);
  (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,&local_150,local_120,(this->Settings).Ptr);
  if (local_150 == (longlong *)0x0) {
    if (1 < (byte)LogAudioAnalyzer._0_1_) {
      pFVar7 = (FName *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_c8);
      ::FName::ToString(pFVar7,&local_a0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                        ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_f0 = `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                 ::__l2::AudioExtFeatureName;
      ::FName::ToString(&local_f0,&local_b0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    if (local_150 != (longlong *)0x0) {
      (**(code **)*local_150)(local_150,1);
    }
    if (local_158.Data == (FScriptContainerElement *)0x0) goto LAB_14d80def1;
    puVar9 = *(undefined8 **)local_158.Data;
  }
  else {
    if (local_158.Data == (FScriptContainerElement *)0x0) {
      if (1 < (byte)LogAudioAnalyzer._0_1_) {
        pFVar7 = (FName *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_c0);
        ::FName::ToString(pFVar7,&local_80);
        this_00 = IAnalyzerNRTFactory::GetModularFeatureName();
        ::FName::ToString((FName *)this_00,&local_90);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      if (local_150 != (longlong *)0x0) {
        (**(code **)*local_150)(local_150,1);
      }
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_158.Data)(local_158.Data,1);
      }
      goto LAB_14d80def1;
    }
    psVar1 = *(short **)CONCAT44(in_register_00000084,param_2);
    local_148.Data = (FScriptContainerElement *)0x0;
    local_140[2] = *(int *)((undefined8 *)CONCAT44(in_register_00000084,param_2) + 1) / 2;
    local_134 = local_140[2] / in_R9D;
    local_140[1] = 0;
    local_12c = (int)in_stack_00000028;
    local_128 = (float)local_134 / (float)local_12c;
    if (local_140[2] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_140[2]);
    }
    local_140[0] = 0;
    if (0 < local_140[2]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_140[2],&local_148,0,local_140 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_140[2],&local_148,local_140,local_140 + 1);
    iStack_e0 = local_140[0];
    local_e8 = local_148.Data;
    if ((local_140[0] < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      TVar8.Ptr = (IAnalyzerNRTResult *)(*pcVar2)();
      return (TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_>)
             TVar8.Ptr;
    }
    uStack_100 = local_140[2];
    local_108 = (FScriptContainerElement *)psVar1;
    if ((local_140[2] < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      TVar8.Ptr = (IAnalyzerNRTResult *)(*pcVar2)();
      return (TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_>)
             TVar8.Ptr;
    }
    local_68._12_4_ = uStack_dc;
    local_68.ArrayNum = iStack_e0;
    local_58._12_4_ = uStack_fc;
    local_58.ArrayNum = uStack_100;
    local_68.DataPtr = (float *)local_e8;
    local_58.DataPtr = (short *)local_108;
    ArrayPcm16ToFloat(&local_58,&local_68);
    iStack_d0 = local_140[0];
    plVar4 = local_150;
    FVar3.Data = local_158.Data;
    local_108 = local_148.Data;
    pcVar2 = *(code **)(*local_150 + 8);
    if ((local_140[0] < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      TVar8.Ptr = (IAnalyzerNRTResult *)(*pcVar2)();
      return (TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_>)
             TVar8.Ptr;
    }
    local_d8 = local_108;
    uStack_40 = CONCAT44(uStack_cc,iStack_d0);
    local_48 = local_108;
    (*pcVar2)(plVar4,&local_48,FVar3.Data);
    (**(code **)(*local_150 + 0x10))(local_150,local_158.Data);
    (param_1->AllocatorInstance).Data = local_158.Data;
    local_158.Data = (FScriptContainerElement *)0x0;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    if (local_150 != (longlong *)0x0) {
      (**(code **)*local_150)(local_150,1);
    }
    if (local_158.Data == (FScriptContainerElement *)0x0) goto LAB_14d80def1;
    puVar9 = *(undefined8 **)local_158.Data;
  }
  (*(code *)*puVar9)(local_158.Data,1);
LAB_14d80def1:
  FMemScope::~FMemScope(local_118);
  FLLMScope::~FLLMScope(local_res8);
  return (TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_>)
         (IAnalyzerNRTResult *)param_1;
}

