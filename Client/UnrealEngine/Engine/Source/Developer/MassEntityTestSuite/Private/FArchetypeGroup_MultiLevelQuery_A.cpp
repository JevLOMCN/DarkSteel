// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// operator() @ 1470fee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  FArchetypeGroup_MultiLevelQueryBase *local_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [32];
  initializer_list<int_const_> local_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_a8;
  initializer_list<int_const_> local_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_88;
  int local_78 [20];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_78[0] = 4;
  local_78[1] = 5;
  local_78[2] = 6;
  local_78[3] = 7;
  local_78[4] = 0;
  local_78[5] = 1;
  local_78[6] = 2;
  local_78[7] = 3;
  local_78[8] = 0xc;
  local_78[9] = 0xd;
  local_78[10] = 0xe;
  local_78[0xb] = 0xf;
  local_78[0xc] = 8;
  local_78[0xd] = 9;
  local_78[0xe] = 10;
  local_78[0xf] = 0xb;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&local_98,local_78,local_78 + 0x10);
  piVar4 = &local_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&local_e8,&local_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&local_88,&local_e8,(TArray<int_const_,TSizedDefaultAllocator<32>_> *)local_d8
                     );
  piVar5 = &local_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (local_d8 + 8),&local_a8);
  _vector_destructor_iterator_
            (&local_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  local_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)this;
  local_f8 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test1
                       (local_f0,param_1,
                        (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(local_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (local_d8 + 8));
  return (bool)local_f8;
}

// operator() @ 147101de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp'::__l2::<lambda_2>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  FArchetypeGroup_MultiLevelQueryBase *local_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [32];
  initializer_list<int_const_> local_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_a8;
  initializer_list<int_const_> local_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_88;
  int local_78 [20];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_78[0] = 2;
  local_78[1] = 3;
  local_78[2] = 0;
  local_78[3] = 1;
  local_78[4] = 6;
  local_78[5] = 7;
  local_78[6] = 4;
  local_78[7] = 5;
  local_78[8] = 10;
  local_78[9] = 0xb;
  local_78[10] = 8;
  local_78[0xb] = 9;
  local_78[0xc] = 0xe;
  local_78[0xd] = 0xf;
  local_78[0xe] = 0xc;
  local_78[0xf] = 0xd;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&local_98,local_78,local_78 + 0x10);
  piVar4 = &local_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&local_e8,&local_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&local_88,&local_e8,(TArray<int_const_,TSizedDefaultAllocator<32>_> *)local_d8
                     );
  piVar5 = &local_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (local_d8 + 8),&local_a8);
  _vector_destructor_iterator_
            (&local_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  local_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)this;
  local_f8 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test2
                       (local_f0,param_1,
                        (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(local_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (local_d8 + 8));
  return (bool)local_f8;
}

// operator() @ 1471038f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp'::__l2::<lambda_3>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  FArchetypeGroup_MultiLevelQueryBase *local_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [32];
  initializer_list<int_const_> local_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_a8;
  initializer_list<int_const_> local_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_88;
  int local_78 [20];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_78[0] = 0xc;
  local_78[1] = 0xd;
  local_78[2] = 0xe;
  local_78[3] = 0xf;
  local_78[4] = 4;
  local_78[5] = 5;
  local_78[6] = 6;
  local_78[7] = 7;
  local_78[8] = 8;
  local_78[9] = 9;
  local_78[10] = 10;
  local_78[0xb] = 0xb;
  local_78[0xc] = 0;
  local_78[0xd] = 1;
  local_78[0xe] = 2;
  local_78[0xf] = 3;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&local_98,local_78,local_78 + 0x10);
  piVar4 = &local_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&local_e8,&local_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&local_88,&local_e8,(TArray<int_const_,TSizedDefaultAllocator<32>_> *)local_d8
                     );
  piVar5 = &local_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (local_d8 + 8),&local_a8);
  _vector_destructor_iterator_
            (&local_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  local_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)this;
  local_f8 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test3
                       (local_f0,param_1,
                        (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(local_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (local_d8 + 8));
  return (bool)local_f8;
}

// SetUp @ 14719de00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp(FArchetypeGroup_MultiLevelQuery_A *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  initializer_list<int_const_> *piVar5;
  longlong lVar6;
  initializer_list<int_const_> *piVar7;
  undefined1 auStack_338 [32];
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_318;
  FScriptContainerElement *local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  ForAnyElementType *local_2e8;
  ForAnyElementType *local_2e0;
  ForAnyElementType *local_2d8;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_2c0;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_2b8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_2b0;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  <lambda_1> local_298;
  <lambda_1> *local_290;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_288;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_280;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_278;
  FScriptContainerElement *local_270;
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  undefined4 local_258;
  undefined4 local_254;
  FScriptContainerElement *local_250;
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  longlong local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  FScriptContainerElement *local_218;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_210;
  <lambda_2> local_208;
  <lambda_2> *local_200;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_1f8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_1f0;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_180;
  <lambda_3> local_178;
  <lambda_3> *local_170;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_168;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_160;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  undefined4 local_138;
  undefined4 local_134;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_f0;
  initializer_list<int_const_> local_e8;
  initializer_list<int_const_> local_d8;
  int local_c8 [4];
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_b8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_88;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_c8[0] = 8;
  local_c8[1] = 4;
  local_c8[2] = 2;
  piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&local_d8,local_c8,local_c8 + 3);
  piVar7 = &local_e8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&piVar7->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
    piVar7 = (initializer_list<int_const_> *)((longlong)&piVar7->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int_const_,TSizedDefaultAllocator<32>_> *)&this->field_0x400,&local_e8);
  local_2e8 = (ForAnyElementType *)&this->field_0x410;
  local_290 = &local_298;
  local_298.__this = this;
  TFunction<bool___cdecl(FMassExecutionContext_&)>::
  TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp_::__l2::<lambda_1>_>
            ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_b8,local_290);
  local_2c0 = &local_b8;
  local_288 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
               *)local_2e8->Data;
  local_280 = local_288;
  local_278 = local_288;
  if ((local_288 <= local_2c0) &&
     (local_270 = local_2e8->Data, local_268 = local_270, local_260 = local_270,
     local_2c0 <
     (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
      *)(local_270 + (longlong)*(int *)((longlong)&local_2e8[1].Data + 4) * 0x30))) {
    local_258 = 0;
    local_254 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_300 = (longlong)*(int *)&local_2e8[1].Data;
    local_308 = (longlong)*(int *)((longlong)&local_2e8[1].Data + 4);
    local_310 = local_2e8->Data;
    local_2f8 = 0x30;
    local_318 = local_2c0;
    local_250 = local_310;
    local_248 = local_310;
    local_240 = local_310;
    local_238 = local_300;
    local_230 = local_308;
    local_228 = local_310;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(int *)&local_2e8[1].Data == *(int *)((longlong)&local_2e8[1].Data + 4)) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,local_2e8,(int *)((longlong)&local_2e8[1].Data + 4));
    *(int *)&local_2e8[1].Data = iVar4;
  }
  local_2d0 = *(int *)&local_2e8[1].Data;
  *(int *)&local_2e8[1].Data = *(int *)&local_2e8[1].Data + 1;
  local_220 = local_2e8->Data;
  local_218 = local_220 + (longlong)local_2d0 * 0x30;
  local_210 = ::operator_new(0x30,local_218);
  TFunction<bool___cdecl(FMassExecutionContext_&)>::TFunction<bool___cdecl(FMassExecutionContext_&)>
            (local_210,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_b8);
  local_2a8 = local_2d0;
  Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
            (&local_b8);
  local_2e0 = (ForAnyElementType *)&this->field_0x410;
  local_200 = &local_208;
  local_208.__this = this;
  TFunction<bool___cdecl(FMassExecutionContext_&)>::
  TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp_::__l2::<lambda_2>_>
            ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_88,local_200);
  local_2b8 = &local_88;
  local_1f8 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
               *)local_2e0->Data;
  local_1f0 = local_1f8;
  local_1e8 = local_1f8;
  if ((local_1f8 <= local_2b8) &&
     (local_1e0 = local_2e0->Data, local_1d8 = local_1e0, local_1d0 = local_1e0,
     local_2b8 <
     (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
      *)(local_1e0 + (longlong)*(int *)((longlong)&local_2e0[1].Data + 4) * 0x30))) {
    local_1c8 = 0;
    local_1c4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_300 = (longlong)*(int *)&local_2e0[1].Data;
    local_308 = (longlong)*(int *)((longlong)&local_2e0[1].Data + 4);
    local_310 = local_2e0->Data;
    local_2f8 = 0x30;
    local_318 = local_2b8;
    local_1c0 = local_310;
    local_1b8 = local_310;
    local_1b0 = local_310;
    local_1a8 = local_300;
    local_1a0 = local_308;
    local_198 = local_310;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(int *)&local_2e0[1].Data == *(int *)((longlong)&local_2e0[1].Data + 4)) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,local_2e0,(int *)((longlong)&local_2e0[1].Data + 4));
    *(int *)&local_2e0[1].Data = iVar4;
  }
  local_2cc = *(int *)&local_2e0[1].Data;
  *(int *)&local_2e0[1].Data = *(int *)&local_2e0[1].Data + 1;
  local_190 = local_2e0->Data;
  local_188 = local_190 + (longlong)local_2cc * 0x30;
  local_180 = ::operator_new(0x30,local_188);
  TFunction<bool___cdecl(FMassExecutionContext_&)>::TFunction<bool___cdecl(FMassExecutionContext_&)>
            (local_180,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_88);
  local_2a4 = local_2cc;
  Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
            (&local_88);
  local_2d8 = (ForAnyElementType *)&this->field_0x410;
  local_170 = &local_178;
  local_178.__this = this;
  TFunction<bool___cdecl(FMassExecutionContext_&)>::
  TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp_::__l2::<lambda_3>_>
            ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_58,local_170);
  local_2b0 = &local_58;
  local_168 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
               *)local_2d8->Data;
  local_160 = local_168;
  local_158 = local_168;
  if ((local_168 <= local_2b0) &&
     (local_150 = local_2d8->Data, local_148 = local_150, local_140 = local_150,
     local_2b0 <
     (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
      *)(local_150 + (longlong)*(int *)((longlong)&local_2d8[1].Data + 4) * 0x30))) {
    local_138 = 0;
    local_134 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_300 = (longlong)*(int *)&local_2d8[1].Data;
    local_308 = (longlong)*(int *)((longlong)&local_2d8[1].Data + 4);
    local_310 = local_2d8->Data;
    local_2f8 = 0x30;
    local_318 = local_2b0;
    local_130 = local_310;
    local_128 = local_310;
    local_120 = local_310;
    local_118 = local_300;
    local_110 = local_308;
    local_108 = local_310;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(int *)&local_2d8[1].Data == *(int *)((longlong)&local_2d8[1].Data + 4)) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,local_2d8,(int *)((longlong)&local_2d8[1].Data + 4));
    *(int *)&local_2d8[1].Data = iVar4;
  }
  local_2c8 = *(int *)&local_2d8[1].Data;
  *(int *)&local_2d8[1].Data = *(int *)&local_2d8[1].Data + 1;
  local_100 = local_2d8->Data;
  local_f8 = local_100 + (longlong)local_2c8 * 0x30;
  local_f0 = ::operator_new(0x30,local_f8);
  TFunction<bool___cdecl(FMassExecutionContext_&)>::TFunction<bool___cdecl(FMassExecutionContext_&)>
            (local_f0,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_58);
  local_2a0 = local_2c8;
  Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
            (&local_58);
  bVar2 = FArchetypeGroup_MultiLevelQueryBase::SetUp((FArchetypeGroup_MultiLevelQueryBase *)this);
  return bVar2;
}

