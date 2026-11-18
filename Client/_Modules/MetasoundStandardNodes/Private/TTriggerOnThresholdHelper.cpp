// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 3

// DeclareVertexInterface @ 14b26d880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_1c8 [32];
  int local_198 [2];
  FInputVertexInterface local_190;
  FOutputVertexInterface local_170;
  FInputVertexInterfaceDeclarationBuilder local_150;
  FOutputVertexInterfaceDeclarationBuilder local_128;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<int> local_e0;
  TInputDataVertex<int> local_a8;
  undefined1 local_70 [32];
  undefined1 local_50 [16];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface(float_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface(float_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface(float_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                         (&local_100,&TriggerOnThresholdVertexNames::OutPinName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_170);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_128,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_170,
                 &local_170.SubInterfaces);
      if ((local_128.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_128.Vertices)->AllocatorInstance,(local_128.Vertices)->ArrayNum,
                   &(local_128.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_128,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_128);
      local_198[0] = 0;
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int>
                         (local_70,&TriggerOnThresholdVertexNames::InTriggerTypeName,
                          &FDataVertexMetadata::EmptyBasic,local_198);
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<int>::TInputDataVertex<int><float_const_&>
                         (&local_a8,&TriggerOnThresholdVertexNames::InThresholdPinName,
                          &FDataVertexMetadata::EmptyBasic,param_1);
      local_198[1] = 0;
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<int>::TInputDataVertex<int><int>
                         (&local_e0,&TriggerOnThresholdVertexNames::InPinName,
                          &FDataVertexMetadata::EmptyBasic,local_198 + 1);
      local_190._padding_ = 0;
      local_190._padding_ = 0;
      local_190.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.SubInterfaces.ArrayNum = 0;
      local_190.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_150,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_190,
                 &local_190.SubInterfaces);
      if ((local_150.Vertices)->ArrayMax < 3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,3,&(local_150.Vertices)->AllocatorInstance,(local_150.Vertices)->ArrayNum,
                   &(local_150.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar6);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar5);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar4);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_150);
      FVertexInterface::FVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface(float_const&___ptr64)'
                  ::__l2::Interface,&local_190,&local_170);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_190._padding_,(int)local_190._padding_);
      if ((FInputDataVertex *)local_190._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      if (0xc < (byte)local_e0._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
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
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
      if (0xc < local_40) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_40])(local_50);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_170._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      atexit(`Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface(float_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVertexInterface::FVertexInterface
            (__return_storage_ptr__,
             &`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<int,int>::DeclareVertexInterface(float_const&___ptr64)'
              ::__l2::Interface);
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b26dc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_1c8 [32];
  int local_198;
  float local_194;
  FInputVertexInterface local_190;
  FOutputVertexInterface local_170;
  FInputVertexInterfaceDeclarationBuilder local_150;
  FOutputVertexInterfaceDeclarationBuilder local_128;
  TOutputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<float> local_e0;
  TInputDataVertex<float> local_a8;
  undefined1 local_70 [32];
  undefined1 local_50 [16];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface(float_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface(float_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface(float_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                         (&local_100,&TriggerOnThresholdVertexNames::OutPinName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_170);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_128,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_170,
                 &local_170.SubInterfaces);
      if ((local_128.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_128.Vertices)->AllocatorInstance,(local_128.Vertices)->ArrayNum,
                   &(local_128.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_128,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_128);
      local_198 = 0;
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int>
                         (local_70,&TriggerOnThresholdVertexNames::InTriggerTypeName,
                          &FDataVertexMetadata::EmptyBasic,&local_198);
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                         (&local_a8,&TriggerOnThresholdVertexNames::InThresholdPinName,
                          &FDataVertexMetadata::EmptyBasic,param_1);
      local_194 = 0.0;
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_e0,&TriggerOnThresholdVertexNames::InPinName,
                          &FDataVertexMetadata::EmptyBasic,&local_194);
      local_190._padding_ = 0;
      local_190._padding_ = 0;
      local_190.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.SubInterfaces.ArrayNum = 0;
      local_190.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_150,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_190,
                 &local_190.SubInterfaces);
      if ((local_150.Vertices)->ArrayMax < 3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,3,&(local_150.Vertices)->AllocatorInstance,(local_150.Vertices)->ArrayNum,
                   &(local_150.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar6);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar5);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar4);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_150);
      FVertexInterface::FVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface(float_const&___ptr64)'
                  ::__l2::Interface,&local_190,&local_170);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
                 local_190.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_190._padding_,(int)local_190._padding_);
      if ((FInputDataVertex *)local_190._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_190._padding_);
      }
      if (0xc < (byte)local_e0._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
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
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
      if (0xc < local_40) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_40])(local_50);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
                 local_170.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_170._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_170._padding_);
      }
      atexit(`Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface(float_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVertexInterface::FVertexInterface
            (__return_storage_ptr__,
             &`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<float,float>::DeclareVertexInterface(float_const&___ptr64)'
              ::__l2::Interface);
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b26dfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_1a8 [32];
  FInputVertexInterface local_178;
  FOutputVertexInterface local_158;
  FInputVertexInterfaceDeclarationBuilder local_138;
  FOutputVertexInterfaceDeclarationBuilder local_110;
  TOutputDataVertex<Metasound::FTrigger> local_e8;
  TInputDataVertex<Metasound::FAudioBuffer> local_c8;
  TInputDataVertex<float> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::DeclareVertexInterface(float_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::DeclareVertexInterface(float_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::DeclareVertexInterface(float_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                         (&local_e8,&TriggerOnThresholdVertexNames::OutPinName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_158);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_110,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
                 &local_158.SubInterfaces);
      if ((local_110.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_110.Vertices)->AllocatorInstance,(local_110.Vertices)->ArrayNum,
                   &(local_110.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_110,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_110);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
                         (local_58,&TriggerOnThresholdVertexNames::InTriggerTypeName,
                          &FDataVertexMetadata::EmptyBasic);
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                         (&local_90,&TriggerOnThresholdVertexNames::InThresholdPinName,
                          &FDataVertexMetadata::EmptyBasic,param_1);
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FAudioBuffer>::
               TInputDataVertex<Metasound::FAudioBuffer><>
                         (&local_c8,&TriggerOnThresholdVertexNames::InPinName,
                          &FDataVertexMetadata::EmptyBasic);
      local_178._padding_ = 0;
      local_178._padding_ = 0;
      local_178.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.SubInterfaces.ArrayNum = 0;
      local_178.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_138,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_178,
                 &local_178.SubInterfaces);
      if ((local_138.Vertices)->ArrayMax < 3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,3,&(local_138.Vertices)->AllocatorInstance,(local_138.Vertices)->ArrayNum,
                   &(local_138.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_138,pFVar6);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_138,pFVar5);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_138,pFVar4);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_138);
      FVertexInterface::FVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::DeclareVertexInterface(float_const&___ptr64)'
                  ::__l2::Interface,&local_178,&local_158);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_178.SubInterfaces.AllocatorInstance.Data,
                 local_178.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_178.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_178.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_178._padding_,(int)local_178._padding_);
      if ((FInputDataVertex *)local_178._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if (0xc < (byte)local_c8._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
      if (0xc < (byte)local_90._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
      if (0xc < local_28) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_28])(local_38);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
                 local_158.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      atexit(`Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::DeclareVertexInterface(float_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVertexInterface::FVertexInterface
            (__return_storage_ptr__,
             &`public:_static_class_Metasound::FVertexInterface_const___cdecl_Metasound::TTriggerOnThresholdHelper<Metasound::FAudioBuffer,float>::DeclareVertexInterface(float_const&___ptr64)'
              ::__l2::Interface);
  return __return_storage_ptr__;
}

