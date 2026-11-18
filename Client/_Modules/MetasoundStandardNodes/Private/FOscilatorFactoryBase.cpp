// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// GetCommmonVertexInterface @ 14b18fa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_2b8 [32];
  bool local_288;
  bool local_287 [3];
  float local_284;
  float local_280;
  float local_27c;
  FInputVertexInterface local_278;
  FInputDataVertex *local_258;
  FOutputVertexInterface local_250;
  FInputVertexInterfaceDeclarationBuilder local_230;
  FOutputVertexInterfaceDeclarationBuilder local_208;
  TOutputDataVertex<Metasound::FAudioBuffer> local_1e0;
  TInputDataVertex<float> local_1c0;
  TInputDataVertex<float> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<Metasound::FAudioBuffer> local_118;
  TInputDataVertex<float> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      local_288 = true;
      pFVar3 = (FInputDataVertex *)
               TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                         (&local_70,&OscillatorCommonVertexNames::EnabledPinName,
                          &FDataVertexMetadata::EmptyBasic,&local_288);
      local_287[0] = true;
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                         (&local_a8,&OscillatorCommonVertexNames::BiPolarPinName,
                          &FDataVertexMetadata::EmptyBasic,local_287);
      local_284 = 440.0;
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_e0,&OscillatorCommonVertexNames::OscBaseFrequencyPinName,
                          &FDataVertexMetadata::EmptyBasic,&local_284);
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FAudioBuffer>::
               TInputDataVertex<Metasound::FAudioBuffer><>
                         (&local_118,&OscillatorCommonVertexNames::FrequencyModPinName,
                          &FDataVertexMetadata::EmptyBasic);
      pFVar7 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_150,&OscillatorCommonVertexNames::OscPhaseResetPinName,
                          &FDataVertexMetadata::EmptyBasic);
      local_280 = 0.0;
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_188,&OscillatorCommonVertexNames::PhaseOffsetPinName,
                          &FDataVertexMetadata::EmptyBasic,&local_280);
      local_27c = 0.0;
      local_258 = (FInputDataVertex *)
                  TInputDataVertex<float>::TInputDataVertex<float><float>
                            (&local_1c0,&OscillatorCommonVertexNames::GlideFactorPinName,
                             &FDataVertexMetadata::EmptyBasic,&local_27c);
      local_278._padding_ = 0;
      local_278._padding_ = 0;
      local_278.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.SubInterfaces.ArrayNum = 0;
      local_278.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_230,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_278,
                 &local_278.SubInterfaces);
      if ((local_230.Vertices)->ArrayMax < 7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,7,&(local_230.Vertices)->AllocatorInstance,(local_230.Vertices)->ArrayNum,
                   &(local_230.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar3);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar4);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar5);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar6);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar7);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,local_258);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_230);
      pTVar9 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_1e0,&OscillatorCommonVertexNames::AudioOutPinName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_250);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_208,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_250,
                 &local_250.SubInterfaces);
      if ((local_208.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_208.Vertices)->AllocatorInstance,(local_208.Vertices)->ArrayNum,
                   &(local_208.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_208,(FOutputDataVertex *)pTVar9);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_208);
      FVertexInterface::FVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface(void)'
                  ::__l2::Interface,&local_278,&local_250);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_250.SubInterfaces.AllocatorInstance.Data,
                 local_250.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_250.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_250.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_250._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_250._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_278.SubInterfaces.AllocatorInstance.Data,
                 local_278.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_278.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_278.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_278._padding_,(int)local_278._padding_);
      if ((FInputDataVertex *)local_278._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
      if (0xc < (byte)local_1c0._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar1)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
      if (0xc < (byte)local_188._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar1)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
      if (0xc < (byte)local_150._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar1)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
      if (0xc < (byte)local_118._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar1)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
      if (0xc < (byte)local_e0._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar1)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
      if (0xc < (byte)local_a8._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar1)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
      if (0xc < (byte)local_70._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar1)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
      atexit(`Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVertexInterface::FVertexInterface
            (__return_storage_ptr__,
             &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface(void)'
              ::__l2::Interface);
  return __return_storage_ptr__;
}

