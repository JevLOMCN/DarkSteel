// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// DoMapping @ 14b0d1f30

void __thiscall Metasound::MetasoundMapRangeNodePrivate::FIntRange::DoMapping(FIntRange *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  piVar2 = *(int **)&(this->OutRangeB).field_0x8;
  fVar5 = (float)**(int **)&(this->Value).field_0x8;
  iVar1 = **(int **)&(this->OutRangeA).field_0x8;
  piVar3 = *(int **)&(this->InRangeA).field_0x8;
  if (**(char **)&(this->bClamped).field_0x8 == '\0') {
    fVar10 = (float)*piVar3;
    fVar9 = (float)**(int **)&(this->InRangeB).field_0x8;
    fVar7 = fVar9 - fVar10;
    fVar8 = (float)iVar1;
    if (__real_322bcc77 < (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar7 = (fVar5 - fVar10) / fVar7;
    }
    else {
      fVar7 = __real_3f800000;
      if (fVar5 < fVar9) {
        fVar7 = 0.0;
      }
    }
    **(int **)&(this->OutputValue).field_0x8 = (int)(((float)*piVar2 - fVar8) * fVar7 + fVar8);
    return;
  }
  fVar10 = (float)*piVar3;
  fVar8 = (float)**(int **)&(this->InRangeB).field_0x8;
  fVar9 = (float)iVar1;
  fVar7 = fVar8 - fVar10;
  if (__real_322bcc77 < (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    auVar6 = ZEXT416((uint)((fVar5 - fVar10) / fVar7));
  }
  else if (fVar5 < fVar8) {
    auVar6 = ZEXT816(0);
  }
  else {
    auVar6 = ZEXT416((uint)__real_3f800000);
  }
  if (__real_3f800000 <= auVar6._0_4_) {
    auVar6._0_4_ = __real_3f800000;
  }
  if (auVar6._0_4_ <= 0.0) {
    auVar4._12_4_ = 0;
    auVar4._0_12_ = auVar6._4_12_;
    auVar6 = auVar4 << 0x20;
  }
  **(int **)&(this->OutputValue).field_0x8 = (int)(auVar6._0_4_ * ((float)*piVar2 - fVar9) + fVar9);
  return;
}

// GetVertexInterface @ 14b0e0fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_278 [32];
  bool local_248 [4];
  int local_244 [5];
  FInputVertexInterface local_230;
  FOutputVertexInterface local_210;
  FInputVertexInterfaceDeclarationBuilder local_1f0;
  FOutputVertexInterfaceDeclarationBuilder local_1c8;
  TOutputDataVertex<int> local_1a0;
  TInputDataVertex<int> local_180;
  TInputDataVertex<int> local_148;
  TInputDataVertex<int> local_110;
  TInputDataVertex<int> local_d8;
  TInputDataVertex<int> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
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
      local_244[0] = 100;
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<int>::TInputDataVertex<int><int>
                         (&local_a0,&MapRangeVertexNames::InputOutRangeBNameName,
                          &FDataVertexMetadata::EmptyBasic,local_244);
      local_244[1] = 0;
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<int>::TInputDataVertex<int><int>
                         (&local_d8,&MapRangeVertexNames::InputOutRangeANameName,
                          &FDataVertexMetadata::EmptyBasic,local_244 + 1);
      local_244[2] = 100;
      pFVar7 = (FInputDataVertex *)
               TInputDataVertex<int>::TInputDataVertex<int><int>
                         (&local_110,&MapRangeVertexNames::InputInRangeBNameName,
                          &FDataVertexMetadata::EmptyBasic,local_244 + 2);
      local_244[3] = 0;
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<int>::TInputDataVertex<int><int>
                         (&local_148,&MapRangeVertexNames::InputInRangeANameName,
                          &FDataVertexMetadata::EmptyBasic,local_244 + 3);
      pFVar9 = (FInputDataVertex *)
               TInputDataVertex<int>::TInputDataVertex<int><>
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
                (&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface(void)'
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
      atexit(`Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVertexInterface::FVertexInterface
            (__return_storage_ptr__,
             &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return __return_storage_ptr__;
}

