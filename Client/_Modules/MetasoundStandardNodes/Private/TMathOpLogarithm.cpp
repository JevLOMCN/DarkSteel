// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// Calculate @ 14b0c0830

void __cdecl
Metasound::TMathOpLogarithm<float,float>::Calculate
          (TMathOpLogarithm<float,float> *param_1,TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3,
          TDataWriteReference<float> *param_4)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  if (param_3->ArrayNum == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464080621>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x2ed,"!InAdditionalOperands.IsEmpty()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar8 = 0;
    **(undefined4 **)&param_4->field_0x8 = **(undefined4 **)&param_2->field_0x8;
    fVar3 = __real_322bcc77;
    iVar6 = param_3->ArrayNum;
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pfVar1 = *(float **)&param_4->field_0x8;
        fVar10 = **(float **)((param_3->AllocatorInstance).Data + lVar7 + 8);
        if (fVar10 <= fVar3) {
          fVar10 = fVar3;
        }
        fVar9 = logf(fVar10);
        fVar10 = *pfVar1;
        if (fVar10 <= fVar3) {
          fVar10 = fVar3;
        }
        fVar10 = logf(fVar10);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x20;
        *pfVar1 = fVar9 / fVar10;
        iVar6 = param_3->ArrayNum;
      } while ((int)uVar8 < iVar6);
    }
  }
  return;
}

// GetVertexInterface @ 14b0dcb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TInputDataVertex<float> *pTVar4;
  TInputDataVertex<float> *pTVar5;
  FInputVertexInterface *pFVar6;
  FVertexInterface *pFVar7;
  int *piVar8;
  undefined1 auStackY_138 [32];
  FOutputVertexInterface local_108;
  FInputVertexInterface local_e8;
  FOutputVertexInterfaceDeclarationBuilder local_c8;
  TOutputDataVertex<float> local_a0;
  TInputDataVertex<float> local_80;
  TInputDataVertex<float> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_138;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpLogarithm<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpLogarithm<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpLogarithm<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_a0,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                         ::__l2::OutputMetadata);
    FOutputVertexInterface::FOutputVertexInterface(&local_108);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c8,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_108,
               &local_108.SubInterfaces);
    if ((local_c8.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c8.Vertices)->AllocatorInstance,(local_c8.Vertices)->ArrayNum,
                 &(local_c8.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c8,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c8);
    pTVar4 = TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_48,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata);
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_80,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata);
    pFVar6 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
                       (&local_e8,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                ::__l2::DefaultInterface,pFVar6,&local_108);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data,
               local_e8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_e8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_e8._padding_,(int)local_e8._padding_);
    if ((FInputDataVertex *)local_e8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
               local_108.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_108._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_108._padding_);
    }
    atexit(`Metasound::TMathOpLogarithm<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpLogarithm<float,float>::GetVertexInterface(void)'
          ::__l2::DefaultInterface;
}

