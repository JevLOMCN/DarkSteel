// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 6

// Calculate @ 14b0c04e0

void __cdecl
Metasound::TMathOpDivide<int,int>::Calculate
          (TMathOpDivide<int,int> *param_1,TDataReadReference<int> *param_2,
          TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *param_3,
          TDataWriteReference<int> *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_3->ArrayNum == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464080410>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x21a,"!InAdditionalOperands.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar5 = 0;
    **(undefined4 **)&param_4->field_0x8 = **(undefined4 **)&param_2->field_0x8;
    iVar4 = param_3->ArrayNum;
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = **(int **)((param_3->AllocatorInstance).Data + lVar6 + 8);
        if (iVar4 == 0) {
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
        **(int **)&param_4->field_0x8 = **(int **)&param_4->field_0x8 / iVar4;
        iVar4 = param_3->ArrayNum;
      } while ((int)uVar5 < iVar4);
    }
  }
  return;
}

// Calculate @ 14b0c05f0

void __cdecl
Metasound::TMathOpDivide<float,float>::Calculate
          (TMathOpDivide<float,float> *param_1,TDataReadReference<float> *param_2,
          TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3,
          TDataWriteReference<float> *param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_3->ArrayNum == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464080410>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x21a,"!InAdditionalOperands.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar6 = 0;
    **(undefined4 **)&param_4->field_0x8 = **(undefined4 **)&param_2->field_0x8;
    iVar5 = param_3->ArrayNum;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = **(float **)((param_3->AllocatorInstance).Data + lVar7 + 8);
        if (fVar1 == 0.0) {
          return;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x20;
        **(float **)&param_4->field_0x8 = **(float **)&param_4->field_0x8 / fVar1;
        iVar5 = param_3->ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// Calculate @ 14b0c0710

void __cdecl
Metasound::TMathOpDivide<Metasound::FTime,float>::Calculate
          (TMathOpDivide<Metasound::FTime,float> *param_1,
          TDataReadReference<Metasound::FTime> *param_2,
          TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3,
          TDataWriteReference<Metasound::FTime> *param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  **(undefined8 **)&param_4->field_0x8 = **(undefined8 **)&param_2->field_0x8;
  iVar5 = param_3->ArrayNum;
  if (iVar5 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2159234386464081244>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundMathNodes.cpp"
                       ,0x55c,"!InAdditionalOperands.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar6 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = **(float **)((param_3->AllocatorInstance).Data + lVar7 + 8);
        if (fVar1 != 0.0) {
          **(double **)&param_4->field_0x8 = **(double **)&param_4->field_0x8 / (double)fVar1;
        }
        iVar5 = param_3->ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x20;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// GetVertexInterface @ 14b0dbff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TInputDataVertex<int> *pTVar4;
  TInputDataVertex<int> *pTVar5;
  FInputVertexInterface *pFVar6;
  FVertexInterface *pFVar7;
  int *piVar8;
  undefined1 auStackY_148 [32];
  int local_118 [2];
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<int> local_a8;
  TInputDataVertex<int> local_88;
  TInputDataVertex<int> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                 ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                         ::__l2::OutputMetadata);
    FOutputVertexInterface::FOutputVertexInterface(&local_110);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
               &local_110.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_118[0] = 1;
    pTVar4 = TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,local_118);
    local_118[1] = 1;
    pTVar5 = TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,local_118 + 1);
    pFVar6 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<int>,Metasound::TInputDataVertex<int>_>
                       (&local_f0,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                ::__l2::Interface,pFVar6,&local_110);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
               local_f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
    if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
               local_110.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_110._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110._padding_);
    }
    atexit(`Metasound::TMathOpDivide<int,int>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<int,int>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0dc3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOutputDataVertex<float> *pTVar4;
  TInputDataVertex<float> *pTVar5;
  TInputDataVertex<float> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_148 [32];
  float local_118;
  float local_114;
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<float> local_a8;
  TInputDataVertex<float> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar4 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                         ::__l2::OutputMetadata);
    FOutputVertexInterface::FOutputVertexInterface(&local_110);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
               &local_110.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_118 = 1.0;
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,&local_118);
    local_114 = 1.0;
    pTVar6 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,&local_114);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
                       (&local_f0,pTVar6,pTVar5);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                ::__l2::Interface,pFVar7,&local_110);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
               local_f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
    if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
               local_110.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_110._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110._padding_);
    }
    atexit(`Metasound::TMathOpDivide<float,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<float,float>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b0dc790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOutputDataVertex<Metasound::FTime> *pTVar4;
  TInputDataVertex<float> *pTVar5;
  TInputDataVertex<Metasound::FTime> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_148 [32];
  float local_118;
  float local_114;
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::FTime> local_a8;
  TInputDataVertex<Metasound::FTime> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::PrimaryOperandMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
    ::__l2::PrimaryOperandMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__PrimaryOperandMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::AdditionalOperandsMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
    ::__l2::AdditionalOperandsMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__AdditionalOperandsMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.Description);
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName);
    `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
    ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
    atexit(`Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputMetadata__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_3__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_3__ == -1)) {
    pTVar4 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_a8,&MathOpNames::OutMathName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::OutputMetadata);
    FOutputVertexInterface::FOutputVertexInterface(&local_110);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
               &local_110.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_118 = 1.0;
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&MathOpNames::AdditionalOperandsName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::AdditionalOperandsMetadata,&local_118);
    local_114 = 1.0;
    pTVar6 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_88,&MathOpNames::PrimaryOperandName,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::PrimaryOperandMetadata,&local_114);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>_>
                       (&local_f0,pTVar6,pTVar5);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                ::__l2::Interface,pFVar7,&local_110);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
               local_f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
    if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar2)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
               local_110.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_110._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110._padding_);
    }
    atexit(`Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_3__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TMathOpDivide<Metasound::FTime,float>::GetVertexInterface(void)'
          ::__l2::Interface;
}

