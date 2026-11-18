// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// DoMapping @ 14b0d1b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::MetasoundMapRangeNodePrivate::FAudioRange::DoMapping(FAudioRange *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  plVar5 = *(longlong **)&(this->OutputValue).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar5[2] != (int)plVar5[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar6 = *plVar5;
  plVar5 = *(longlong **)&(this->Value).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar5[2] != (int)plVar5[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar7 = *plVar5;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar5[2] != (int)plVar5[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  fVar9 = __real_3f800000;
  fVar8 = __real_322bcc77;
  lVar14 = 0;
  lVar12 = (longlong)(int)plVar5[1];
  fVar1 = **(float **)&(this->InRangeA).field_0x8;
  fVar2 = **(float **)&(this->InRangeB).field_0x8;
  fVar17 = fVar2 - fVar1;
  fVar3 = **(float **)&(this->OutRangeA).field_0x8;
  fVar4 = **(float **)&(this->OutRangeB).field_0x8;
  if (3 < lVar12) {
    lVar11 = lVar7 - lVar6;
    lVar13 = (lVar12 - 4U >> 2) + 1;
    pfVar10 = (float *)(lVar6 + 4);
    fVar19 = (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    lVar14 = lVar13 * 4;
    do {
      fVar18 = *(float *)((longlong)pfVar10 + lVar11 + -4);
      if (fVar8 < fVar19) {
        fVar15 = (fVar18 - fVar1) / fVar17;
      }
      else {
        fVar15 = fVar9;
        if (fVar18 < fVar2) {
          fVar15 = 0.0;
        }
      }
      if (fVar9 <= fVar15) {
        fVar15 = fVar9;
      }
      fVar18 = fVar4 - fVar3;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      pfVar10[-1] = fVar15 * fVar18 + fVar3;
      if (fVar8 < fVar19) {
        fVar15 = (*(float *)((longlong)pfVar10 + lVar11) - fVar1) / fVar17;
      }
      else {
        fVar15 = fVar9;
        if (*(float *)((longlong)pfVar10 + lVar11) < fVar2) {
          fVar15 = 0.0;
        }
      }
      if (fVar9 <= fVar15) {
        fVar15 = fVar9;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      *pfVar10 = fVar15 * fVar18 + fVar3;
      fVar15 = *(float *)((longlong)pfVar10 + lVar11 + 4);
      if (fVar8 < fVar19) {
        fVar16 = (fVar15 - fVar1) / fVar17;
      }
      else {
        fVar16 = fVar9;
        if (fVar15 < fVar2) {
          fVar16 = 0.0;
        }
      }
      if (fVar9 <= fVar16) {
        fVar16 = fVar9;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      pfVar10[1] = fVar16 * fVar18 + fVar3;
      fVar15 = *(float *)((longlong)pfVar10 + lVar11 + 8);
      if (fVar8 < fVar19) {
        fVar16 = (fVar15 - fVar1) / fVar17;
      }
      else {
        fVar16 = fVar9;
        if (fVar15 < fVar2) {
          fVar16 = 0.0;
        }
      }
      if (fVar9 <= fVar16) {
        fVar16 = fVar9;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      pfVar10[2] = fVar16 * fVar18 + fVar3;
      pfVar10 = pfVar10 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (lVar14 < lVar12) {
    fVar19 = (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    pfVar10 = (float *)(lVar6 + lVar14 * 4);
    lVar12 = lVar12 - lVar14;
    do {
      fVar18 = *(float *)((lVar7 - lVar6) + (longlong)pfVar10);
      if (fVar8 < fVar19) {
        fVar15 = (fVar18 - fVar1) / fVar17;
      }
      else {
        fVar15 = fVar9;
        if (fVar18 < fVar2) {
          fVar15 = 0.0;
        }
      }
      if (fVar9 <= fVar15) {
        fVar15 = fVar9;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      *pfVar10 = fVar15 * (fVar4 - fVar3) + fVar3;
      pfVar10 = pfVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// GetVertexInterface @ 14b0df750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
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
  TOutputDataVertex<Metasound::FAudioBuffer> local_1a0;
  TInputDataVertex<Metasound::FAudioBuffer> local_180;
  TInputDataVertex<float> local_148;
  TInputDataVertex<float> local_110;
  TInputDataVertex<float> local_d8;
  TInputDataVertex<float> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
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
      local_240 = -1.0;
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_d8,&MapRangeVertexNames::InputOutRangeANameName,
                          &FDataVertexMetadata::EmptyBasic,&local_240);
      local_23c = 1.0;
      pFVar7 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_110,&MapRangeVertexNames::InputInRangeBNameName,
                          &FDataVertexMetadata::EmptyBasic,&local_23c);
      local_238[0] = -1.0;
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_148,&MapRangeVertexNames::InputInRangeANameName,
                          &FDataVertexMetadata::EmptyBasic,local_238);
      pFVar9 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FAudioBuffer>::
               TInputDataVertex<Metasound::FAudioBuffer><>
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
                (&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface(void)'
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
      atexit(`Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVertexInterface::FVertexInterface
            (__return_storage_ptr__,
             &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return __return_storage_ptr__;
}

