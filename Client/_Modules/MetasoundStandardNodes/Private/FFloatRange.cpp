// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// DoMapping @ 14b0d1e10

void __thiscall Metasound::MetasoundMapRangeNodePrivate::FFloatRange::DoMapping(FFloatRange *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = **(float **)&(this->Value).field_0x8;
  fVar2 = **(float **)&(this->OutRangeB).field_0x8;
  fVar3 = **(float **)&(this->OutRangeA).field_0x8;
  pfVar4 = *(float **)&(this->InRangeA).field_0x8;
  if (**(char **)&(this->bClamped).field_0x8 == '\0') {
    fVar5 = *pfVar4;
    fVar7 = **(float **)&(this->InRangeB).field_0x8;
    fVar6 = fVar7 - fVar5;
    if (__real_322bcc77 < (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar5 = (fVar1 - fVar5) / fVar6;
    }
    else {
      fVar5 = __real_3f800000;
      if (fVar1 < fVar7) {
        fVar5 = 0.0;
      }
    }
    **(float **)&(this->OutputValue).field_0x8 = (fVar2 - fVar3) * fVar5 + fVar3;
    return;
  }
  fVar5 = *pfVar4;
  pfVar4 = *(float **)&(this->InRangeB).field_0x8;
  fVar7 = *pfVar4 - fVar5;
  if (__real_322bcc77 < (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar5 = (fVar1 - fVar5) / fVar7;
  }
  else {
    fVar5 = __real_3f800000;
    if (fVar1 < *pfVar4) {
      fVar5 = 0.0;
    }
  }
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  **(float **)&(this->OutputValue).field_0x8 = fVar5 * (fVar2 - fVar3) + fVar3;
  return;
}

// GetVertexInterface @ 14b0e00e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_278 [32];
  bool local_248 [4];
  float local_244;
  float local_240;
  float local_23c;
  float local_238 [2];
  FInputVertexInterface local_230;
  FOutputVertexInterface local_210;
  FInputVertexInterfaceDeclarationBuilder local_1f0;
  FOutputVertexInterfaceDeclarationBuilder local_1c8;
  TOutputDataVertex<float> local_1a0;
  TInputDataVertex<float> local_180;
  TInputDataVertex<float> local_148;
  TInputDataVertex<float> local_110;
  TInputDataVertex<float> local_d8;
  TInputDataVertex<float> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                         (&local_1a0,&MapRangeVertexNames::OutputValueNameName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_210);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_1c8,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_210,
                 &local_210.SubInterfaces);
      if ((local_1c8.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_1c8.Vertices)->AllocatorInstance,(local_1c8.Vertices)->ArrayNum,
                   &(local_1c8.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_1c8,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_1c8);
      local_248[0] = true;
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                         (&local_68,&MapRangeVertexNames::InputClampedNameName,
                          &FDataVertexMetadata::EmptyBasic,local_248);
      local_244 = 1.0;
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_a0,&MapRangeVertexNames::InputOutRangeBNameName,
                          &FDataVertexMetadata::EmptyBasic,&local_244);
      local_240 = 0.0;
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_d8,&MapRangeVertexNames::InputOutRangeANameName,
                          &FDataVertexMetadata::EmptyBasic,&local_240);
      local_23c = 1.0;
      pFVar7 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_110,&MapRangeVertexNames::InputInRangeBNameName,
                          &FDataVertexMetadata::EmptyBasic,&local_23c);
      local_238[0] = 0.0;
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_148,&MapRangeVertexNames::InputInRangeANameName,
                          &FDataVertexMetadata::EmptyBasic,local_238);
      pFVar9 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><>
                         (&local_180,&MapRangeVertexNames::InputValueNameName,
                          &FDataVertexMetadata::EmptyBasic);
      local_230._padding_ = 0;
      local_230._padding_ = 0;
      local_230.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_230.SubInterfaces.ArrayNum = 0;
      local_230.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_1f0,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_230,
                 &local_230.SubInterfaces);
      if ((local_1f0.Vertices)->ArrayMax < 6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,6,&(local_1f0.Vertices)->AllocatorInstance,(local_1f0.Vertices)->ArrayNum,
                   &(local_1f0.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar9);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar7);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar6);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar5);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar4);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_1f0);
      FVertexInterface::FVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface(void)'
                  ::__l2::DefaultInterface,&local_230,&local_210);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_230.SubInterfaces.AllocatorInstance.Data,
                 local_230.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_230.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_230.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_230._padding_,(int)local_230._padding_);
      if ((FInputDataVertex *)local_230._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_230._padding_);
      }
      if (0xc < (byte)local_180._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
      if (0xc < (byte)local_148._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
      if (0xc < (byte)local_110._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
      if (0xc < (byte)local_d8._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
      if (0xc < (byte)local_a0._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
      if (0xc < (byte)local_68._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_210.SubInterfaces.AllocatorInstance.Data,
                 local_210.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_210.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_210.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_210._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_210._padding_);
      }
      atexit(`Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVertexInterface::FVertexInterface
            (__return_storage_ptr__,
             &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return __return_storage_ptr__;
}

