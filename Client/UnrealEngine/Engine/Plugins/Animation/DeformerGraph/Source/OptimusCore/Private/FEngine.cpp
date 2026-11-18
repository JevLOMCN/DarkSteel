// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// operator() @ 14e16b530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Optimus::Expression::FEngine::Parse'::__l2::<lambda_3>::operator()
          (void *this,
          TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>
          *param_1)

{
  undefined1 *puVar1;
  EOperator *pEVar2;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  EOperator *local_68;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  EOperator local_38;
  EOperator local_34 [2];
  byte local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  FVar3 = *(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
            *)((longlong)this + 8);
  if (OperatorTokenInfo[*(int *)param_1].Operator.bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_38 = OperatorTokenInfo[*(int *)param_1].Operator.TypedValue;
  }
  local_2c = 0;
  FVar7 = *(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
            *)((longlong)FVar3 + 0x300);
  if (*(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
        *)((longlong)FVar3 + 0x300) ==
      (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
       )0x0) {
    FVar7 = FVar3;
  }
  local_34[0] = local_38;
  if (((ulonglong)FVar7 <= local_34) &&
     (local_34 < (EOperator *)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar3 + 0x30c) * 0xc))
     ) {
    local_50 = (longlong)*(int *)((longlong)FVar3 + 0x308);
    local_48 = 0xc;
    local_68 = local_34;
    local_60 = FVar7;
    local_58 = (longlong)*(int *)((longlong)FVar3 + 0x30c);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar3 + 0x308);
  if (iVar6 == *(int *)((longlong)FVar3 + 0x30c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                      (0x40c,(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                              *)FVar3,(int *)((longlong)FVar3 + 0x30c));
  }
  *(int *)((longlong)FVar3 + 0x308) = iVar6 + 1;
  uVar8 = (ulonglong)local_2c;
  FVar7 = *(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
            *)((longlong)FVar3 + 0x300);
  if (*(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
        *)((longlong)FVar3 + 0x300) ==
      (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
       )0x0) {
    FVar7 = FVar3;
  }
  *(byte *)((longlong)FVar7 + 8 + (longlong)iVar6 * 0xc) = local_2c;
  pEVar2 = (EOperator *)((longlong)FVar7 + (longlong)iVar6 * 0xc);
  if ((3 < local_2c) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar8] ==
      UE::Core::Private::
      TMoveConstructorCaller<enum_Optimus::Expression::FExpressionObject::EOperator>::Construct) {
    *pEVar2 = local_34[0];
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar8])(pEVar2,local_34);
  }
  FVar3 = *(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
            *)((longlong)this + 0x10);
  puVar1 = &param_1->field_0x4;
  FVar7 = *(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
            *)((longlong)FVar3 + 0x200);
  if (*(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
        *)((longlong)FVar3 + 0x200) ==
      (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
       )0x0) {
    FVar7 = FVar3;
  }
  if (((ulonglong)FVar7 <= puVar1) &&
     (puVar1 < (undefined1 *)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar3 + 0x20c) * 8))) {
    local_50 = (longlong)*(int *)((longlong)FVar3 + 0x208);
    local_48 = 8;
    local_68 = (EOperator *)puVar1;
    local_60 = FVar7;
    local_58 = (longlong)*(int *)((longlong)FVar3 + 0x20c);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar3 + 0x208);
  if (iVar6 == *(int *)((longlong)FVar3 + 0x20c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_>
                      (0x408,(ForElementType<Optimus::Expression::FParseLocation> *)FVar3,
                       (int *)((longlong)FVar3 + 0x20c));
  }
  *(int *)((longlong)FVar3 + 0x208) = iVar6 + 1;
  FVar7 = *(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
            *)((longlong)FVar3 + 0x200);
  if (*(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
        *)((longlong)FVar3 + 0x200) ==
      (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
       )0x0) {
    FVar7 = FVar3;
  }
  *(undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 8) = *(undefined8 *)puVar1;
  return;
}

// Evaluate @ 14e1a9a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<float> __thiscall
Optimus::Expression::FEngine::Evaluate
          (FEngine *this,TStringView<wchar_t> *param_1,
          TFunctionRef<TOptional<float>___cdecl(FName)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<float> TVar3;
  undefined8 *in_R9;
  float fVar4;
  undefined1 auStack_f8 [32];
  TFunctionRef<TOptional<float>___cdecl(FName)> local_d8;
  TStringView<wchar_t> local_c8;
  TFunction<TOptional<float>___cdecl(FName)> local_b8;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_88;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8.DataPtr = *(wchar_t **)param_2;
  local_c8.Size = *(int *)&param_2->field_0x8;
  local_c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_b8._0_8_ = 0;
  local_b8._40_8_ = 0;
  Parse(this,&local_88,&local_c8,&local_b8);
  if (local_88.TypeIndex == 0) {
    local_d8._0_8_ = *in_R9;
    local_d8._8_8_ = in_R9[1];
    fVar4 = Execute(this,(FExpressionObject *)&local_88,&local_d8);
    *(float *)&param_1->DataPtr = fVar4;
    *(undefined1 *)((longlong)&param_1->DataPtr + 4) = 1;
    if (1 < (ulonglong)local_88.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (TOptional<float>)(*pcVar1)();
        return TVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_88.TypeIndex])(&local_88);
  }
  else {
    *(undefined1 *)((longlong)&param_1->DataPtr + 4) = 0;
    if (1 < local_88.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (TOptional<float>)(*pcVar1)();
        return TVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_88.TypeIndex])(&local_88);
  }
  return (TOptional<float>)param_1;
}

// Execute @ 14e1aaf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
Optimus::Expression::FEngine::Execute
          (FEngine *this,FExpressionObject *param_1,
          TFunctionRef<TOptional<float>___cdecl(FName)> *param_2)

{
  uint *puVar1;
  uchar uVar2;
  code *pcVar3;
  TArray<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar10;
  undefined8 uVar11;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar12;
  FScriptContainerElement *pFVar13;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_1b8 [32];
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  local_198;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168 [4];
  uint local_164;
  uint local_160;
  int local_15c;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  local_158;
  uint local_150;
  char local_14c;
  TFunctionRef<TOptional<float>___cdecl(FName)> *local_148;
  undefined8 local_140;
  uint *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  uint *local_128;
  undefined8 uStack_120;
  ForElementType<float> local_118;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  uVar5 = __xmm_80000000800000008000000080000000;
  uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar20 = __real_322bcc77;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_15c = (param_1->Expression).ArrayNum;
  pTVar4 = &param_1->Expression;
  if (local_15c == 0) {
LAB_14e1ac0ee:
    fVar20 = 0.0;
  }
  else {
    FVar12 = (param_1->Expression).AllocatorInstance.SecondaryData;
    local_118.SecondaryData = (ForElementType<float>)0x0;
    local_90 = 0;
    local_8c = 0x20;
    if (FVar12 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   )0x0) {
      param_1 = (FExpressionObject *)FVar12;
    }
    FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )((longlong)param_1 + (longlong)local_15c * 0xc);
    iVar8 = 0;
    local_158 = FVar12;
    local_148 = param_2;
    while( true ) {
      if (pTVar4->ArrayNum != local_15c) {
        local_168[0] = 0;
        `TCheckedPointerIterator<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_168);
        iVar8 = local_90;
      }
      uVar15 = 0;
      if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )param_1 == FVar12) break;
      uVar2 = *(uchar *)((longlong)param_1 + 8);
      if (uVar2 == '\x03') {
        if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )param_1 !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )&local_118;
          if (local_118.SecondaryData != (ForElementType<float>)0x0) {
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )local_118.SecondaryData;
          }
          if ((ulonglong)FVar10 <= param_1) {
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            if (param_1 < (ulonglong)((longlong)FVar10 + (longlong)local_8c * 4)) {
              local_178 = 4;
              local_180 = (longlong)iVar8;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )&local_118;
              if (local_118.SecondaryData != (ForElementType<float>)0x0) {
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )local_118.SecondaryData;
              }
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )param_1;
              local_188 = (longlong)local_8c;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
          }
          if (iVar8 == local_8c) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                              (0x404,&local_118,&local_8c);
          }
          local_90 = iVar8 + 1;
          FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )&local_118;
          if (local_118.SecondaryData != (ForElementType<float>)0x0) {
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )local_118.SecondaryData;
          }
          *(uint *)((longlong)FVar10 + (longlong)iVar8 * 4) = *(uint *)param_1;
          iVar8 = local_90;
        }
      }
      else if (uVar2 == '\x01') {
        if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )param_1 !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          local_140 = *(undefined8 *)param_1;
          (**(code **)local_148)(&local_150,*(undefined8 *)&local_148->field_0x8,&local_140);
          local_164 = local_150;
          if (local_14c == '\0') {
            local_164 = 0;
          }
          FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )&local_118;
          if (local_118.SecondaryData != (ForElementType<float>)0x0) {
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )local_118.SecondaryData;
          }
          if ((ulonglong)FVar10 <= &local_164) {
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            if (&local_164 < (uint *)((longlong)FVar10 + (longlong)local_8c * 4)) {
              local_180 = (longlong)local_90;
              local_178 = 4;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )&local_164;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )&local_118;
              if (local_118.SecondaryData != (ForElementType<float>)0x0) {
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )local_118.SecondaryData;
              }
              local_188 = (longlong)local_8c;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
          }
          iVar8 = local_90;
          if (local_90 == local_8c) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                              (0x404,&local_118,&local_8c);
          }
          local_90 = iVar8 + 1;
          FVar14 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )&local_118;
          uVar15 = local_164;
          if (local_118.SecondaryData != (ForElementType<float>)0x0) {
            FVar14 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )local_118.SecondaryData;
          }
LAB_14e1ac0c1:
          *(uint *)((longlong)FVar14 + (longlong)iVar8 * 4) = uVar15;
          iVar8 = local_90;
        }
      }
      else if (uVar2 == '\0') {
        if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )param_1 !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          uVar17 = 0;
          switch(*(uint *)param_1) {
          case 0:
            uVar16 = iVar8 - 1;
            uVar15 = 0;
            if ((int)uVar16 < iVar8) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if (uVar15 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar16;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            uVar15 = iVar8 - 1;
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            uVar16 = *(uint *)((longlong)FVar10 + (longlong)(int)uVar15 * 4);
            if ((int)uVar15 < iVar8) {
              uVar17 = ~uVar15 >> 0x1f;
            }
            if (uVar17 == 0) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar15;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            *(uint *)((longlong)FVar10 + (longlong)(iVar8 + -1) * 4) = uVar16 ^ uVar5;
            iVar8 = local_90;
            break;
          case 1:
            if (iVar8 < 1) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )0x0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            iVar9 = iVar8 + -1;
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = *(float *)((longlong)FVar10 + (longlong)iVar9 * 4);
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            puVar1 = (uint *)((longlong)FVar10 + (longlong)iVar9 * 4);
            iVar9 = (iVar8 - iVar9) + -1;
            if (iVar9 != 0) {
              memmove(puVar1,puVar1 + 1,(longlong)iVar9 << 2);
              iVar8 = local_90;
            }
            local_90 = iVar8 + -1;
            uVar15 = iVar8 - 2;
            if ((int)uVar15 < local_90) {
              uVar17 = ~uVar15 >> 0x1f;
            }
            if (uVar17 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar15;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            ((int *)((longlong)FVar10 + -4))[local_90] =
                 (int)(fVar21 + (float)((int *)((longlong)FVar10 + -4))[local_90]);
            iVar8 = local_90;
            break;
          case 2:
            if (iVar8 < 1) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )0x0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            iVar9 = iVar8 + -1;
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = *(float *)((longlong)FVar10 + (longlong)iVar9 * 4);
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            puVar1 = (uint *)((longlong)FVar10 + (longlong)iVar9 * 4);
            iVar9 = (iVar8 - iVar9) + -1;
            if (iVar9 != 0) {
              memmove(puVar1,puVar1 + 1,(longlong)iVar9 << 2);
              iVar8 = local_90;
            }
            local_90 = iVar8 + -1;
            uVar15 = iVar8 - 2;
            if ((int)uVar15 < local_90) {
              uVar17 = ~uVar15 >> 0x1f;
            }
            if (uVar17 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar15;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            ((int *)((longlong)FVar10 + -4))[local_90] =
                 (int)((float)((int *)((longlong)FVar10 + -4))[local_90] - fVar21);
            iVar8 = local_90;
            break;
          case 3:
            if (iVar8 < 1) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )0x0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            iVar9 = iVar8 + -1;
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = *(float *)((longlong)FVar10 + (longlong)iVar9 * 4);
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            puVar1 = (uint *)((longlong)FVar10 + (longlong)iVar9 * 4);
            iVar9 = (iVar8 - iVar9) + -1;
            if (iVar9 != 0) {
              memmove(puVar1,puVar1 + 1,(longlong)iVar9 << 2);
              iVar8 = local_90;
            }
            local_90 = iVar8 + -1;
            uVar15 = iVar8 - 2;
            if ((int)uVar15 < local_90) {
              uVar17 = ~uVar15 >> 0x1f;
            }
            if (uVar17 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar15;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            ((int *)((longlong)FVar10 + -4))[local_90] =
                 (int)(fVar21 * (float)((int *)((longlong)FVar10 + -4))[local_90]);
            iVar8 = local_90;
            break;
          case 4:
            if (iVar8 < 1) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )0x0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            iVar9 = iVar8 + -1;
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = *(float *)((longlong)FVar10 + (longlong)iVar9 * 4);
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            puVar1 = (uint *)((longlong)FVar10 + (longlong)iVar9 * 4);
            iVar9 = (iVar8 - iVar9) + -1;
            if (iVar9 != 0) {
              memmove(puVar1,puVar1 + 1,(longlong)iVar9 << 2);
              iVar8 = local_90;
            }
            local_90 = iVar8 + -1;
            uVar17 = iVar8 - 2;
            if (fVar20 < (float)((uint)fVar21 & uVar19)) {
              if ((int)uVar17 < local_90) {
                uVar15 = ~uVar17 >> 0x1f;
              }
              if (uVar15 == 0) {
                local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)(int)uVar17;
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)local_90;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  fVar20 = (float)(*pcVar3)();
                  return fVar20;
                }
              }
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )&local_118;
              if (local_118.SecondaryData != (ForElementType<float>)0x0) {
                FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                          )local_118.SecondaryData;
              }
              ((int *)((longlong)FVar10 + -4))[local_90] =
                   (int)((float)((int *)((longlong)FVar10 + -4))[local_90] / fVar21);
              iVar8 = local_90;
            }
            else {
              if ((int)uVar17 < local_90) {
                uVar15 = ~uVar17 >> 0x1f;
              }
              if (uVar15 == 0) {
                local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)(int)uVar17;
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)local_90;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  fVar20 = (float)(*pcVar3)();
                  return fVar20;
                }
              }
LAB_14e1ab715:
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )&local_118;
              if (local_118.SecondaryData != (ForElementType<float>)0x0) {
                FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                          )local_118.SecondaryData;
              }
              *(uint *)((longlong)FVar10 + (longlong)(local_90 + -1) * 4) = 0;
              iVar8 = local_90;
            }
            break;
          case 5:
            if (iVar8 < 1) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )0x0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            iVar9 = iVar8 + -1;
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = *(float *)((longlong)FVar10 + (longlong)iVar9 * 4);
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            puVar1 = (uint *)((longlong)FVar10 + (longlong)iVar9 * 4);
            iVar9 = (iVar8 - iVar9) + -1;
            if (iVar9 != 0) {
              memmove(puVar1,puVar1 + 1,(longlong)iVar9 << 2);
              iVar8 = local_90;
            }
            local_90 = iVar8 + -1;
            uVar16 = iVar8 - 2;
            if ((float)((uint)fVar21 & uVar19) <= fVar20) {
              if ((int)uVar16 < local_90) {
                uVar15 = ~uVar16 >> 0x1f;
              }
              if (uVar15 == 0) {
                local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)(int)uVar16;
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)local_90;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  fVar20 = (float)(*pcVar3)();
                  return fVar20;
                }
              }
              goto LAB_14e1ab715;
            }
            if ((int)uVar16 < local_90) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if (uVar15 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar16;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = FGenericPlatformMath::Fmod
                               ((float)((int *)((longlong)FVar10 + -4))[local_90],fVar21);
            uVar15 = local_90 - 1;
            if ((int)uVar15 < local_90) {
              uVar17 = ~uVar15 >> 0x1f;
            }
            if (uVar17 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar15;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            *(float *)((longlong)FVar10 + (longlong)(local_90 + -1) * 4) = fVar21;
            iVar8 = local_90;
            break;
          case 6:
            if (iVar8 < 1) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )0x0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            iVar9 = iVar8 + -1;
            FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = *(float *)((longlong)FVar12 + (longlong)iVar9 * 4);
            FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            puVar1 = (uint *)((longlong)FVar12 + (longlong)iVar9 * 4);
            iVar9 = (iVar8 - iVar9) + -1;
            if (iVar9 != 0) {
              memmove(puVar1,puVar1 + 1,(longlong)iVar9 << 2);
              iVar8 = local_90;
            }
            local_90 = iVar8 + -1;
            uVar15 = iVar8 - 2;
            uVar16 = uVar17;
            if ((int)uVar15 < local_90) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if (uVar16 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar15;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            iVar8 = local_90;
            uVar15 = local_90 - 1;
            FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = powf(*(float *)((longlong)FVar12 + (longlong)(int)uVar15 * 4),fVar21);
            uVar16 = uVar17;
            if ((int)uVar15 < iVar8) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if (uVar16 == 0) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar15;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            *(float *)((longlong)FVar12 + (longlong)(iVar8 + -1) * 4) = fVar21;
            uVar16 = local_90 - 1;
            uVar15 = uVar17;
            if ((int)uVar16 < local_90) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if (uVar15 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar16;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            iVar9 = _finite((double)*(float *)((longlong)FVar12 + (longlong)(local_90 + -1) * 4));
            FVar12 = local_158;
            iVar8 = local_90;
            if (iVar9 == 0) {
              uVar15 = local_90 - 1;
              if ((int)uVar15 < local_90) {
                uVar17 = ~uVar15 >> 0x1f;
              }
              if (uVar17 == 0) {
                local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)(int)uVar15;
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)local_90;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  fVar20 = (float)(*pcVar3)();
                  return fVar20;
                }
              }
              FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )&local_118;
              if (local_118.SecondaryData != (ForElementType<float>)0x0) {
                FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                          )local_118.SecondaryData;
              }
              *(uint *)((longlong)FVar12 + (longlong)(local_90 + -1) * 4) = 0;
              FVar12 = local_158;
              iVar8 = local_90;
            }
            break;
          case 7:
            if (iVar8 < 1) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)iVar8;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )0x0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              iVar8 = local_90;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            iVar9 = iVar8 + -1;
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            fVar21 = *(float *)((longlong)FVar10 + (longlong)iVar9 * 4);
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            puVar1 = (uint *)((longlong)FVar10 + (longlong)iVar9 * 4);
            iVar9 = (iVar8 - iVar9) + -1;
            if (iVar9 != 0) {
              memmove(puVar1,puVar1 + 1,(longlong)iVar9 << 2);
              iVar8 = local_90;
            }
            local_90 = iVar8 + -1;
            uVar16 = iVar8 - 2;
            if (fVar20 < (float)((uint)fVar21 & uVar19)) {
              uVar17 = uVar15;
              if ((int)uVar16 < local_90) {
                uVar17 = ~uVar16 >> 0x1f;
              }
              if (uVar17 == 0) {
                local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)(int)uVar16;
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)local_90;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  fVar20 = (float)(*pcVar3)();
                  return fVar20;
                }
              }
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )&local_118;
              if (local_118.SecondaryData != (ForElementType<float>)0x0) {
                FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                          )local_118.SecondaryData;
              }
              ((int *)((longlong)FVar10 + -4))[local_90] =
                   (int)((float)((int *)((longlong)FVar10 + -4))[local_90] / fVar21);
            }
            else {
              if ((int)uVar16 < local_90) {
                uVar17 = ~uVar16 >> 0x1f;
              }
              if (uVar17 == 0) {
                local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)(int)uVar16;
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)local_90;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  fVar20 = (float)(*pcVar3)();
                  return fVar20;
                }
              }
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )&local_118;
              if (local_118.SecondaryData != (ForElementType<float>)0x0) {
                FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                          )local_118.SecondaryData;
              }
              *(uint *)((longlong)FVar10 + (longlong)(local_90 + -1) * 4) = 0;
            }
            uVar16 = local_90 - 1;
            uVar17 = uVar15;
            if ((int)uVar16 < local_90) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if (uVar17 == 0) {
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar16;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            uVar17 = local_90 - 1;
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            if ((int)uVar17 < local_90) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            auVar22 = roundps(ZEXT416((uint)fVar21),
                              ZEXT416(*(uint *)((longlong)FVar10 + (longlong)(int)uVar17 * 4)),1);
            if (uVar15 == 0) {
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)local_90;
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )(longlong)(int)uVar17;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (local_118.SecondaryData != (ForElementType<float>)0x0) {
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
            }
            *(uint *)((longlong)FVar10 + (longlong)(local_90 + -1) * 4) = auVar22._0_4_;
            iVar8 = local_90;
          }
        }
      }
      else if ((uVar2 == '\x02') &&
              ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )param_1 !=
               (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )0x0)) {
        uVar17 = *(uint *)param_1;
        if ((-1 < (int)uVar17) &&
           (iVar9 = GBuiltinFunctions.Functions.ArrayNum, (int)uVar17 < iVar9)) {
          if ((int)uVar17 < iVar9) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if (uVar15 == 0) {
            local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                         )(longlong)iVar9;
            local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                         )(longlong)(int)uVar17;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            iVar8 = local_90;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              fVar20 = (float)(*pcVar3)();
              return fVar20;
            }
          }
          FVar6.Data = GBuiltinFunctions.Functions.AllocatorInstance.Data;
          lVar18 = (longlong)(int)uVar17 * 0x40;
          if ((iVar8 < *(int *)(GBuiltinFunctions.Functions.AllocatorInstance.Data + lVar18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("FunctionInfo.ArgumentCount <= ValueStack.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusExpressionEvaluator.cpp"
                                 ,0x3d4,L""), iVar8 = local_90, bVar7)) {
            pcVar3 = (code *)swi(3);
            fVar20 = (float)(*pcVar3)();
            return fVar20;
          }
          iVar9 = *(int *)(FVar6.Data + lVar18);
          FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )&local_118;
          if (local_118.SecondaryData != (ForElementType<float>)0x0) {
            FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )local_118.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar12 + ((longlong)iVar8 - (longlong)iVar9) * 4);
          if ((iVar9 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            fVar20 = (float)(*pcVar3)();
            return fVar20;
          }
          uStack_120 = CONCAT44(uStack_12c,iVar9);
          local_138 = puVar1;
          iStack_130 = iVar9;
          local_128 = puVar1;
          UE::Core::Private::Function::CheckCallable(*(void **)(FVar6.Data + lVar18 + 0x10));
          pcVar3 = *(code **)(FVar6.Data + lVar18 + 0x10);
          pFVar13 = FVar6.Data + lVar18 + 0x20;
          if (*(FScriptContainerElement **)(FVar6.Data + lVar18 + 0x38) !=
              (FScriptContainerElement *)0x0) {
            pFVar13 = *(FScriptContainerElement **)(FVar6.Data + lVar18 + 0x38);
          }
          uVar11 = (**(code **)(*(longlong *)pFVar13 + 8))();
          local_160 = (*pcVar3)(uVar11,&local_128);
          FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )local_118.SecondaryData;
          iVar8 = 0;
          if (0 < *(int *)(FVar6.Data + lVar18)) {
            do {
              if (local_90 < 1) {
                local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )(longlong)local_90;
                local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )0x0;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                          )local_118.SecondaryData;
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  fVar20 = (float)(*pcVar3)();
                  return fVar20;
                }
              }
              FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )&local_118;
              if (FVar10 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )0x0) {
                FVar12 = FVar10;
              }
              puVar1 = (uint *)((longlong)FVar12 + (longlong)(local_90 + -1) * 4);
              iVar9 = (local_90 - (local_90 + -1)) + -1;
              if (iVar9 != 0) {
                memmove(puVar1,puVar1 + 1,(longlong)iVar9 << 2);
                FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                          )local_118.SecondaryData;
              }
              local_90 = local_90 + -1;
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(FVar6.Data + lVar18));
          }
          FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )&local_118;
          if (FVar10 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                         )0x0) {
            FVar12 = FVar10;
          }
          if ((ulonglong)FVar12 <= &local_160) {
            FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_118;
            if (FVar10 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )0x0) {
              FVar12 = FVar10;
            }
            if (&local_160 < (uint *)((longlong)FVar12 + (longlong)local_8c * 4)) {
              local_180 = (longlong)local_90;
              local_178 = 4;
              local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )&local_118;
              if (FVar10 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                             )0x0) {
                local_190 = FVar10;
              }
              local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                           )&local_160;
              local_188 = (longlong)local_8c;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )local_118.SecondaryData;
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                fVar20 = (float)(*pcVar3)();
                return fVar20;
              }
            }
          }
          iVar8 = local_90;
          if (local_90 == local_8c) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                              (0x404,&local_118,&local_8c);
            FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )local_118.SecondaryData;
          }
          local_90 = iVar8 + 1;
          FVar14 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )&local_118;
          FVar12 = local_158;
          uVar15 = local_160;
          if (FVar10 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                         )0x0) {
            FVar14 = FVar10;
          }
          goto LAB_14e1ac0c1;
        }
        if (local_118.SecondaryData != (ForElementType<float>)0x0) {
          FMemory::Free((void *)local_118.SecondaryData);
        }
        goto LAB_14e1ac0ee;
      }
      param_1 = (FExpressionObject *)((longlong)param_1 + 0xc);
    }
    uVar19 = iVar8 - 1;
    if ((int)uVar19 < iVar8) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if (uVar15 == 0) {
      local_190 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   )(longlong)iVar8;
      local_198 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   )(longlong)(int)uVar19;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      iVar8 = local_90;
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        fVar20 = (float)(*pcVar3)();
        return fVar20;
      }
    }
    FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )&local_118;
    if (local_118.SecondaryData != (ForElementType<float>)0x0) {
      FVar12 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )local_118.SecondaryData;
    }
    fVar20 = *(float *)((longlong)FVar12 + (longlong)(iVar8 + -1) * 4);
    if (local_118.SecondaryData != (ForElementType<float>)0x0) {
      FMemory::Free((void *)local_118.SecondaryData);
    }
  }
  return fVar20;
}

// Parse @ 14e1f5df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> * __thiscall
Optimus::Expression::FEngine::Parse
          (FEngine *this,
          TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
          *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TFunction<TOptional<float>___cdecl(FName)> *param_2)

{
  undefined8 *puVar1;
  EOperator *pEVar2;
  void *pvVar3;
  uchar *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uchar uVar15;
  wchar_t *pwVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *pTVar20;
  TTuple<FName,int> *pTVar21;
  ForElementType<Optimus::Expression::FParseLocation> FVar22;
  ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
  FVar23;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar24;
  ForElementType<Optimus::Expression::FParseLocation> FVar25;
  FFunctionInfo *pFVar26;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar27;
  ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
  FVar28;
  undefined8 uVar29;
  TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
  *this_00;
  int *piVar30;
  longlong lVar31;
  longlong *plVar32;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar33;
  uint uVar34;
  TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
  *pTVar35;
  longlong lVar36;
  ulonglong uVar37;
  ForElementType<Optimus::Expression::FParseLocation> FVar38;
  int iVar39;
  uint uVar40;
  wchar_t *pwVar41;
  int iVar42;
  FTokenParseResult *pFVar43;
  ForAnyElementType FVar44;
  ulonglong uVar45;
  FName *this_01;
  undefined1 auStackY_d78 [32];
  int local_d20 [2];
  byte local_d18;
  char local_d14;
  EOperator local_d10;
  uchar local_d0c [4];
  int iStack_d08;
  int iStack_d04;
  int local_d00;
  int iStack_cfc;
  int iStack_cf8;
  int local_cf4;
  int iStack_cf0;
  int iStack_cec;
  int local_ce8;
  int iStack_ce4;
  int iStack_ce0;
  int local_cd8;
  int iStack_cd4;
  uchar local_cd0 [8];
  FString local_cc8;
  TStringView<wchar_t> local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  FString local_c48;
  FString local_c38;
  FString local_c28;
  FString local_c18;
  int local_c08;
  uchar auStack_c04 [4];
  int iStack_c00;
  int iStack_bfc;
  uchar local_bf8 [8];
  undefined1 local_bf0 [8];
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  local_be8;
  ForElementType<Optimus::Expression::FParseLocation> local_be0;
  FString local_bd8;
  longlong local_bc8;
  TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation> local_bb8
  ;
  TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation> local_ba8
  ;
  undefined1 local_b98 [4];
  uchar local_b94;
  FName local_b90;
  FString local_b88;
  FName local_b78;
  TStringView<wchar_t> *local_b70;
  TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation> local_b68
  ;
  wchar_t *local_b58;
  int iStack_b50;
  undefined4 uStack_b4c;
  int local_b48;
  int iStack_b44;
  FString local_b38 [2];
  undefined8 local_b18;
  TStringView<wchar_t> local_b08;
  FString local_af8;
  FTokenParseResult local_ae8;
  EOperator local_ac8 [2];
  byte local_ac0;
  TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
  local_abc;
  TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
  local_ab0;
  TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
  local_aa4;
  ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
  local_a98;
  int local_910;
  int local_90c;
  ForElementType<Optimus::Expression::FParseLocation> local_908;
  int local_700;
  int local_6fc;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  local_6f8;
  int local_3f0;
  int local_3ec;
  undefined1 local_3e8 [16];
  FExpressionObject local_3d8;
  ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
  local_368;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_d78;
  local_b70 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`Optimus::Expression::FEngine::Parse'::__l2::
           _dynamic_atexit_destructor_for__EmptyResult__);
    _Init_thread_footer(&::_TSS0);
  }
  pwVar9 = param_1->DataPtr;
  iVar39 = 0;
  iVar42 = param_1->Size;
  pwVar41 = pwVar9;
  while ((pwVar41 != pwVar9 + iVar42 && (iVar18 = iswspace(*pwVar41), iVar18 != 0))) {
    iVar39 = iVar39 + 1;
    pwVar41 = pwVar41 + 1;
  }
  pwVar9 = pwVar9 + iVar39;
  iVar42 = iVar42 - iVar39;
  if (iVar42 != 0) {
    lVar36 = (longlong)iVar42;
    pwVar41 = pwVar9 + lVar36 + -1;
    do {
      iVar39 = iswspace(*pwVar41);
      if (iVar39 == 0) break;
      iVar42 = iVar42 + -1;
      pwVar41 = pwVar41 + -1;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  uVar15 = EmptyResult.TypeIndex;
  local_cb8.Size = iVar42;
  local_cb8.DataPtr = pwVar9;
  if (iVar42 == 0) {
    uVar37 = (ulonglong)EmptyResult.TypeIndex;
    __return_storage_ptr__->TypeIndex = EmptyResult.TypeIndex;
    if ((1 < uVar15) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xec,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar37])(__return_storage_ptr__,&EmptyResult);
    if (*(longlong *)param_2 == 0) {
      return __return_storage_ptr__;
    }
    plVar32 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar32 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar32 + 0x10))();
    return __return_storage_ptr__;
  }
  local_be8 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
               )&local_6f8;
  local_6f8.SecondaryData =
       (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
        )0x0;
  local_be0 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
  local_3f0 = 0;
  local_3ec = 0x40;
  local_908.SecondaryData = (ForElementType<Optimus::Expression::FParseLocation>)0x0;
  local_700 = 0;
  local_6fc = 0x40;
  local_a98.SecondaryData =
       (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
        )0x0;
  local_910 = 0;
  local_90c = 0x20;
  local_368.SecondaryData =
       (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
        )0x0;
  local_60 = 0;
  local_5c = 0x20;
  local_d14 = '\0';
LAB_14e1f5fe0:
  local_b08.DataPtr = local_b70->DataPtr;
  local_b08.Size = local_b70->Size;
  local_b08._12_4_ = *(undefined4 *)&local_b70->field_0xc;
  ParseToken(&local_ae8,&local_cb8,&local_b08);
  uVar37 = (ulonglong)local_ae8.Result.TypeIndex;
  if ((1 < uVar37) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
              (*pcVar10)();
    return pTVar20;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar37) != '\0') {
    if ((local_ae8.Result.TypeIndex != 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    local_bd8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_ae8.Result._padding_;
    local_bd8.Data.ArrayNum = (int)local_ae8.Result._padding_;
    local_bd8.Data.ArrayMax = local_ae8.Result._padding_._4_4_;
    local_ae8.Result._padding_ = 0;
    local_ae8.Result._padding_ = 0;
    local_bc8 = CONCAT44(local_ae8.Location.End,local_ae8.Location.Start);
    ::FString::FString((FString *)__return_storage_ptr__,&local_bd8);
    __return_storage_ptr__->_padding_ = local_bc8;
    __return_storage_ptr__->TypeIndex = '\x01';
    if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
    }
    FTokenParseResult::~FTokenParseResult(&local_ae8);
    if (local_368.SecondaryData !=
        (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
         )0x0) {
      FMemory::Free((void *)local_368.SecondaryData);
    }
    if (local_a98.SecondaryData !=
        (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
         )0x0) {
      FMemory::Free((void *)local_a98.SecondaryData);
    }
    if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
      FMemory::Free((void *)local_908.SecondaryData);
    }
    if (local_6f8.SecondaryData !=
        (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )0x0) {
      FMemory::Free((void *)local_6f8.SecondaryData);
    }
    if (*(longlong *)param_2 == 0) {
      return __return_storage_ptr__;
    }
    plVar32 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar32 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar32 + 0x10))();
    return __return_storage_ptr__;
  }
  if ((local_ae8.Result.TypeIndex != 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
              (*pcVar10)();
    return pTVar20;
  }
  pFVar43 = &local_ae8;
  if ((byte)local_ae8.Result._padding_ != '\x01') {
    pFVar43 = (FTokenParseResult *)0x0;
  }
  if (pFVar43 != (FTokenParseResult *)0x0) {
    if (local_d14 == '\0') {
LAB_14e1f613e:
      local_aa4._0_8_ = (pFVar43->Result)._padding_;
      local_aa4.TypeIndex = '\x01';
      FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )&local_6f8;
      if (local_6f8.SecondaryData !=
          (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )0x0) {
        FVar27 = local_6f8.SecondaryData;
      }
      if ((ulonglong)FVar27 <= &local_aa4) {
        FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                  )&local_6f8;
        if (local_6f8.SecondaryData !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FVar27 = local_6f8.SecondaryData;
        }
        if ((&local_aa4 <
             (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
              *)((longlong)FVar27 + (longlong)local_3ec * 0xc)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
      }
      if (local_3f0 == local_3ec) {
        local_3f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                              (0x40c,&local_6f8,&local_3ec);
      }
      FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )&local_6f8;
      if (local_6f8.SecondaryData !=
          (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )0x0) {
        FVar27 = local_6f8.SecondaryData;
      }
      this_00 = (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                 *)((longlong)FVar27 + (longlong)local_3f0 * 0xc);
      pTVar35 = &local_aa4;
LAB_14e1f6258:
      local_3f0 = local_3f0 + 1;
      TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
      ::
      TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                (this_00,pTVar35);
      FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
      if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
        FVar22 = local_908.SecondaryData;
      }
      if ((ulonglong)FVar22 <= &local_ae8.Location) {
        FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
        if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
          FVar22 = local_908.SecondaryData;
        }
        if ((&local_ae8.Location < (undefined1 *)((longlong)FVar22 + (longlong)local_6fc * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
      }
      if (local_700 == local_6fc) {
        local_700 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_>
                              (0x408,&local_908,&local_6fc);
      }
      lVar36 = (longlong)local_700;
      FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
      if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
        FVar22 = local_908.SecondaryData;
      }
      local_700 = local_700 + 1;
      *(ulonglong *)((longlong)FVar22 + lVar36 * 8) =
           CONCAT44(local_ae8.Location.End,local_ae8.Location.Start);
      goto LAB_14e1f7caf;
    }
    uVar37 = (ulonglong)local_d18;
    if ((2 < local_d18) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,Optimus::Expression::FEngine::EOperatorToken,FName,float>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar37 + 4) == '\0') {
      if ((local_d14 == '\0') &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      uVar37 = (ulonglong)local_d18;
      if ((2 < local_d18) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,Optimus::Expression::FEngine::EOperatorToken,FName,float>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar37) == '\0') goto LAB_14e1f613e;
    }
    ::FString::FString(&local_cc8,L"Expected an operator");
    __return_storage_ptr__->_padding_ = (longlong)local_cc8.Data.AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->_padding_ = local_cc8.Data.ArrayNum;
    iVar42 = local_cc8.Data.ArrayMax;
    local_cc8.Data.ArrayNum = 0;
    local_cc8.Data.ArrayMax = 0;
    local_cc8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14e1f8074:
    *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = iVar42;
    __return_storage_ptr__->_padding_ = CONCAT44(local_ae8.Location.End,local_ae8.Location.Start);
    __return_storage_ptr__->TypeIndex = '\x01';
    FTokenParseResult::~FTokenParseResult(&local_ae8);
    if (local_368.SecondaryData !=
        (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
         )0x0) {
      FMemory::Free((void *)local_368.SecondaryData);
    }
    if (local_a98.SecondaryData !=
        (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
         )0x0) {
      FMemory::Free((void *)local_a98.SecondaryData);
    }
    if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
      FMemory::Free((void *)local_908.SecondaryData);
    }
    if (local_6f8.SecondaryData !=
        (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )0x0) {
      FMemory::Free((void *)local_6f8.SecondaryData);
    }
    bVar17 = *(longlong *)param_2 == 0;
    goto LAB_14e1f8558;
  }
  pFVar43 = &local_ae8;
  if ((byte)local_ae8.Result._padding_ != '\x02') {
    pFVar43 = (FTokenParseResult *)0x0;
  }
  if (pFVar43 != (FTokenParseResult *)0x0) {
    if (local_d14 == '\0') {
LAB_14e1f642c:
      local_ab0._0_4_ = *(undefined4 *)&(pFVar43->Result)._padding_;
      local_ab0.TypeIndex = '\x03';
      FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )&local_6f8;
      if (local_6f8.SecondaryData !=
          (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )0x0) {
        FVar27 = local_6f8.SecondaryData;
      }
      if ((ulonglong)FVar27 <= &local_ab0) {
        FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                  )&local_6f8;
        if (local_6f8.SecondaryData !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FVar27 = local_6f8.SecondaryData;
        }
        if ((&local_ab0 <
             (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
              *)((longlong)FVar27 + (longlong)local_3ec * 0xc)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
      }
      if (local_3f0 == local_3ec) {
        local_3f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                              (0x40c,&local_6f8,&local_3ec);
      }
      FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )&local_6f8;
      if (local_6f8.SecondaryData !=
          (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )0x0) {
        FVar27 = local_6f8.SecondaryData;
      }
      this_00 = (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                 *)((longlong)FVar27 + (longlong)local_3f0 * 0xc);
      pTVar35 = &local_ab0;
      goto LAB_14e1f6258;
    }
    uVar37 = (ulonglong)local_d18;
    if ((2 < local_d18) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,Optimus::Expression::FEngine::EOperatorToken,FName,float>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar37 + 4) == '\0') {
      if ((local_d14 == '\0') &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      uVar37 = (ulonglong)local_d18;
      if ((2 < local_d18) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,Optimus::Expression::FEngine::EOperatorToken,FName,float>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar37) == '\0') goto LAB_14e1f642c;
    }
    ::FString::FString(&local_c48,L"Expected an operator");
    __return_storage_ptr__->_padding_ = (longlong)local_c48.Data.AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->_padding_ = local_c48.Data.ArrayNum;
    iVar42 = local_c48.Data.ArrayMax;
    local_c48.Data.ArrayNum = 0;
    local_c48.Data.ArrayMax = 0;
    local_c48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    goto LAB_14e1f8074;
  }
  if (((byte)local_ae8.Result._padding_ != '\0') &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
              (*pcVar10)();
    return pTVar20;
  }
  iVar18 = local_910;
  iVar39 = (int)local_ae8.Result._padding_;
  lVar36 = (longlong)(int)local_ae8.Result._padding_;
  iVar42 = OperatorTokenInfo[lVar36].Precedence;
  if ((local_d14 != '\0') && (local_d18 == 0)) {
    if ((OperatorTokenInfo[lVar36].Operator.bIsSet == false) ||
       (OperatorTokenInfo[local_d20[0]].Operator.bIsSet == false)) {
      if ((local_d20[0] != 9) || ((int)local_ae8.Result._padding_ != 8)) {
        if ((local_d20[0] != 8) || ((int)local_ae8.Result._padding_ != 9)) goto LAB_14e1f668d;
        if (local_60 != 0) {
          uVar34 = 0;
          if ((int)(local_60 - 1U) < local_60) {
            uVar34 = ~(local_60 - 1U) >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
          FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
                    )&local_368;
          if (local_368.SecondaryData !=
              (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
               )0x0) {
            FVar23 = local_368.SecondaryData;
          }
          if (*(int *)((uchar *)((longlong)FVar23 + 8) + (longlong)(local_60 + -1) * 0x18) == iVar18
             ) goto LAB_14e1f6e00;
        }
        ::FString::FString(&local_c68,L"Empty Parentheses");
        __return_storage_ptr__->_padding_ = (longlong)local_c68.Data.AllocatorInstance.Data;
        *(int *)&__return_storage_ptr__->_padding_ = local_c68.Data.ArrayNum;
        iVar42 = local_c68.Data.ArrayMax;
        local_c68.Data.ArrayNum = 0;
        local_c68.Data.ArrayMax = 0;
        local_c68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        goto LAB_14e1f83ef;
      }
      ::FString::FString(&local_ca8,L"Expected an operator");
      __return_storage_ptr__->_padding_ = (longlong)local_ca8.Data.AllocatorInstance.Data;
      *(int *)&__return_storage_ptr__->_padding_ = local_ca8.Data.ArrayNum;
      iVar42 = local_ca8.Data.ArrayMax;
      local_ca8.Data.ArrayNum = 0;
      local_ca8.Data.ArrayMax = 0;
      local_ca8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      ::FString::FString(&local_c58,L"Expected an expression");
      __return_storage_ptr__->_padding_ = (longlong)local_c58.Data.AllocatorInstance.Data;
      *(int *)&__return_storage_ptr__->_padding_ = local_c58.Data.ArrayNum;
      iVar42 = local_c58.Data.ArrayMax;
      local_c58.Data.ArrayNum = 0;
      local_c58.Data.ArrayMax = 0;
      local_c58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = iVar42;
    __return_storage_ptr__->_padding_ = CONCAT44(local_ae8.Location.End,local_ae8.Location.Start);
    __return_storage_ptr__->TypeIndex = '\x01';
    FTokenParseResult::~FTokenParseResult(&local_ae8);
    if (local_368.SecondaryData !=
        (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
         )0x0) {
      FMemory::Free((void *)local_368.SecondaryData);
    }
    if (local_a98.SecondaryData !=
        (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
         )0x0) {
      FMemory::Free((void *)local_a98.SecondaryData);
    }
    if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
      FMemory::Free((void *)local_908.SecondaryData);
    }
    if (local_6f8.SecondaryData !=
        (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )0x0) {
      FMemory::Free((void *)local_6f8.SecondaryData);
    }
    bVar17 = *(longlong *)param_2 == 0;
    goto LAB_14e1f8558;
  }
LAB_14e1f668d:
  if ((int)local_ae8.Result._padding_ == 2) {
    if (local_d14 == '\0') {
LAB_14e1f673e:
      iStack_d08 = local_ae8.Location.Start;
      iStack_d04 = local_ae8.Location.End;
      local_d0c[0] = '\0';
      local_d0c[1] = '\0';
      local_d0c[2] = '\0';
      local_d0c[3] = '\0';
      FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                )&local_a98;
      if (local_a98.SecondaryData !=
          (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
           )0x0) {
        FVar28 = local_a98.SecondaryData;
      }
      if ((ulonglong)FVar28 <= local_d0c) {
        FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                  )&local_a98;
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FVar28 = local_a98.SecondaryData;
        }
        if ((local_d0c < (uchar *)((longlong)FVar28 + (longlong)local_90c * 0xc)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
      }
      if (local_910 == local_90c) {
        local_910 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>_>
                              (0x40c,&local_a98,&local_90c);
      }
      lVar36 = (longlong)local_910;
      FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                )&local_a98;
      if (local_a98.SecondaryData !=
          (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
           )0x0) {
        FVar28 = local_a98.SecondaryData;
      }
      lVar31 = lVar36 * 3;
      local_910 = local_910 + 1;
      *(ulonglong *)((longlong)FVar28 + lVar36 * 0xc) = CONCAT44(iStack_d08,local_d0c);
    }
    else {
      uVar37 = (ulonglong)local_d18;
      if ((2 < local_d18) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar37 + 4) != '\0') {
        if ((local_d14 == '\0') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
        if ((local_d18 != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
        if (local_d20[0] != 9) goto LAB_14e1f673e;
      }
LAB_14e1f776c:
      if (OperatorTokenInfo[lVar36].Associativity == Left) {
        while (local_910 != 0) {
          uVar34 = 0;
          if ((int)(local_910 - 1U) < local_910) {
            uVar34 = ~(local_910 - 1U) >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
          FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                    )&local_a98;
          if (local_a98.SecondaryData !=
              (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
               )0x0) {
            FVar28 = local_a98.SecondaryData;
          }
          if (OperatorTokenInfo[*(int *)((longlong)FVar28 + (longlong)(local_910 + -1) * 0xc)].
              Precedence < iVar42) break;
          if ((local_910 < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
          lVar36 = (longlong)(local_910 + -1);
          FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                    )&local_a98;
          if (local_a98.SecondaryData !=
              (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
               )0x0) {
            FVar28 = local_a98.SecondaryData;
          }
          puVar4 = (uchar *)((longlong)FVar28 + lVar36 * 0xc);
          uVar13._0_1_ = puVar4[0];
          uVar13._1_1_ = puVar4[1];
          uVar13._2_1_ = puVar4[2];
          uVar13._3_1_ = puVar4[3];
          uVar14._0_1_ = puVar4[4];
          uVar14._1_1_ = puVar4[5];
          uVar14._2_1_ = puVar4[6];
          uVar14._3_1_ = puVar4[7];
          puVar4 = (uchar *)((longlong)FVar28 + 8) + lVar36 * 0xc;
          uVar7._0_1_ = puVar4[0];
          uVar7._1_1_ = puVar4[1];
          uVar7._2_1_ = puVar4[2];
          uVar7._3_1_ = puVar4[3];
          FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                    )&local_a98;
          if (local_a98.SecondaryData !=
              (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
               )0x0) {
            FVar28 = local_a98.SecondaryData;
          }
          puVar4 = (uchar *)((longlong)FVar28 + lVar36 * 0xc);
          iVar18 = (local_910 - (local_910 + -1)) + -1;
          if (iVar18 != 0) {
            memmove(puVar4,puVar4 + 0xc,(longlong)iVar18 * 0xc);
          }
          local_910 = local_910 + -1;
          local_ba8._0_4_ = uVar13;
          local_ba8._4_4_ = uVar14;
          local_ba8._8_4_ = uVar7;
          `Optimus::Expression::FEngine::Parse'::__l2::<lambda_3>::operator()(local_bf0,&local_ba8);
        }
        iStack_cf0 = local_ae8.Location.Start;
        iStack_cec = local_ae8.Location.End;
        local_cf4 = iVar39;
        FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                  )&local_a98;
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FVar28 = local_a98.SecondaryData;
        }
        if ((ulonglong)FVar28 <= &local_cf4) {
          FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                    )&local_a98;
          if (local_a98.SecondaryData !=
              (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
               )0x0) {
            FVar28 = local_a98.SecondaryData;
          }
          if ((&local_cf4 < (int *)((longlong)FVar28 + (longlong)local_90c * 0xc)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
        }
        if (local_910 == local_90c) {
          local_910 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>_>
                                (0x40c,&local_a98,&local_90c);
        }
        lVar36 = (longlong)local_910;
        FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                  )&local_a98;
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FVar28 = local_a98.SecondaryData;
        }
        lVar31 = lVar36 * 3;
        local_910 = local_910 + 1;
        *(ulonglong *)((longlong)FVar28 + lVar36 * 0xc) = CONCAT44(iStack_cf0,local_cf4);
        iStack_d04 = iStack_cec;
      }
      else {
        if (OperatorTokenInfo[lVar36].Associativity != Right) goto LAB_14e1f7caf;
        while (local_910 != 0) {
          uVar34 = 0;
          if ((int)(local_910 - 1U) < local_910) {
            uVar34 = ~(local_910 - 1U) >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
          FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                    )&local_a98;
          if (local_a98.SecondaryData !=
              (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
               )0x0) {
            FVar28 = local_a98.SecondaryData;
          }
          if (OperatorTokenInfo[*(int *)((longlong)FVar28 + (longlong)(local_910 + -1) * 0xc)].
              Precedence <= iVar42) break;
          if ((local_910 < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
          lVar36 = (longlong)(local_910 + -1);
          FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                    )&local_a98;
          if (local_a98.SecondaryData !=
              (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
               )0x0) {
            FVar28 = local_a98.SecondaryData;
          }
          puVar4 = (uchar *)((longlong)FVar28 + lVar36 * 0xc);
          uVar11._0_1_ = puVar4[0];
          uVar11._1_1_ = puVar4[1];
          uVar11._2_1_ = puVar4[2];
          uVar11._3_1_ = puVar4[3];
          uVar12._0_1_ = puVar4[4];
          uVar12._1_1_ = puVar4[5];
          uVar12._2_1_ = puVar4[6];
          uVar12._3_1_ = puVar4[7];
          puVar4 = (uchar *)((longlong)FVar28 + 8) + lVar36 * 0xc;
          uVar6._0_1_ = puVar4[0];
          uVar6._1_1_ = puVar4[1];
          uVar6._2_1_ = puVar4[2];
          uVar6._3_1_ = puVar4[3];
          FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                    )&local_a98;
          if (local_a98.SecondaryData !=
              (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
               )0x0) {
            FVar28 = local_a98.SecondaryData;
          }
          puVar4 = (uchar *)((longlong)FVar28 + lVar36 * 0xc);
          iVar18 = (local_910 - (local_910 + -1)) + -1;
          if (iVar18 != 0) {
            memmove(puVar4,puVar4 + 0xc,(longlong)iVar18 * 0xc);
          }
          local_910 = local_910 + -1;
          local_b68._0_4_ = uVar11;
          local_b68._4_4_ = uVar12;
          local_b68._8_4_ = uVar6;
          `Optimus::Expression::FEngine::Parse'::__l2::<lambda_3>::operator()(local_bf0,&local_b68);
        }
        iStack_ce4 = local_ae8.Location.Start;
        iStack_ce0 = local_ae8.Location.End;
        local_ce8 = iVar39;
        FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                  )&local_a98;
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FVar28 = local_a98.SecondaryData;
        }
        if ((ulonglong)FVar28 <= &local_ce8) {
          FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                    )&local_a98;
          if (local_a98.SecondaryData !=
              (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
               )0x0) {
            FVar28 = local_a98.SecondaryData;
          }
          if ((&local_ce8 < (int *)((longlong)FVar28 + (longlong)local_90c * 0xc)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
        }
        if (local_910 == local_90c) {
          local_910 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>_>
                                (0x40c,&local_a98,&local_90c);
        }
        lVar36 = (longlong)local_910;
        FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                  )&local_a98;
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FVar28 = local_a98.SecondaryData;
        }
        lVar31 = lVar36 * 3;
        local_910 = local_910 + 1;
        *(ulonglong *)((longlong)FVar28 + lVar36 * 0xc) = CONCAT44(iStack_ce4,local_ce8);
        iStack_d04 = iStack_ce0;
      }
    }
    *(int *)((uchar *)((longlong)FVar28 + 8) + lVar31 * 4) = iStack_d04;
    goto LAB_14e1f7caf;
  }
  if ((int)local_ae8.Result._padding_ != 8) {
    if ((int)local_ae8.Result._padding_ == 9) {
LAB_14e1f6e00:
      do {
        if (local_910 == 0) {
LAB_14e1f838f:
          ::FString::FString(&local_c38,L"Mismatched parentheses");
          __return_storage_ptr__->_padding_ = (longlong)local_c38.Data.AllocatorInstance.Data;
          *(int *)&__return_storage_ptr__->_padding_ = local_c38.Data.ArrayNum;
          iVar42 = local_c38.Data.ArrayMax;
          local_c38.Data.ArrayNum = 0;
          local_c38.Data.ArrayMax = 0;
          local_c38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          goto LAB_14e1f83ef;
        }
        uVar34 = 0;
        if ((int)(local_910 - 1U) < local_910) {
          uVar34 = ~(local_910 - 1U) >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
        iVar42 = local_910;
        FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                  )&local_a98;
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FVar28 = local_a98.SecondaryData;
        }
        if (*(int *)((longlong)FVar28 + (longlong)(local_910 + -1) * 0xc) == 8) goto LAB_14e1f71de;
        if (local_910 == 0) goto LAB_14e1f838f;
        if ((local_910 < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
        lVar36 = (longlong)(local_910 + -1);
        FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                  )&local_a98;
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FVar28 = local_a98.SecondaryData;
        }
        piVar30 = (int *)((longlong)FVar28 + lVar36 * 0xc);
        iVar42 = *piVar30;
        iVar39 = piVar30[1];
        uVar6 = *(undefined4 *)((uchar *)((longlong)FVar28 + 8) + lVar36 * 0xc);
        FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                  )&local_a98;
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FVar28 = local_a98.SecondaryData;
        }
        puVar4 = (uchar *)((longlong)FVar28 + lVar36 * 0xc);
        iVar18 = (local_910 - (local_910 + -1)) + -1;
        local_b48 = iVar42;
        iStack_b44 = iVar39;
        if (iVar18 != 0) {
          memmove(puVar4,puVar4 + 0xc,(longlong)iVar18 * 0xc);
        }
        FVar27 = local_be8;
        local_910 = local_910 + -1;
        local_cd8 = iVar42;
        iStack_cd4 = iVar39;
        local_cd0._0_4_ = uVar6;
        if (OperatorTokenInfo[local_b48].Operator.bIsSet == false) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             );
          if (bVar17) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
        }
        else {
          local_d10 = OperatorTokenInfo[local_b48].Operator.TypedValue;
        }
        local_ac8[0] = local_d10;
        local_ac0 = 0;
        FVar33 = *(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   *)((longlong)FVar27 + 0x300);
        FVar24 = FVar27;
        if (FVar33 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                       )0x0) {
          FVar24 = FVar33;
        }
        if ((ulonglong)FVar24 <= local_ac8) {
          FVar24 = FVar27;
          if (FVar33 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                         )0x0) {
            FVar24 = FVar33;
          }
          if ((local_ac8 <
               (EOperator *)((longlong)FVar24 + (longlong)*(int *)((longlong)FVar27 + 0x30c) * 0xc))
             && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
        }
        iVar42 = *(int *)((longlong)FVar27 + 0x308);
        if (iVar42 == *(int *)((longlong)FVar27 + 0x30c)) {
          iVar42 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                             (0x40c,(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                                     *)FVar27,(int *)((longlong)FVar27 + 0x30c));
        }
        *(int *)((longlong)FVar27 + 0x308) = iVar42 + 1;
        uVar37 = (ulonglong)local_ac0;
        if (*(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              *)((longlong)FVar27 + 0x300) !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FVar27 = *(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                     *)((longlong)FVar27 + 0x300);
        }
        *(byte *)((longlong)FVar27 + 8 + (longlong)iVar42 * 0xc) = local_ac0;
        pEVar2 = (EOperator *)((longlong)FVar27 + (longlong)iVar42 * 0xc);
        if ((3 < local_ac0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0x105,L""), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar37] ==
            UE::Core::Private::
            TMoveConstructorCaller<enum_Optimus::Expression::FExpressionObject::EOperator>::
            Construct) {
          *pEVar2 = local_ac8[0];
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar37])(pEVar2,local_ac8);
        }
        FVar38 = local_be0;
        FVar22 = *(ForElementType<Optimus::Expression::FParseLocation> *)
                  ((longlong)local_be0 + 0x200);
        FVar25 = FVar22;
        if (FVar22 == (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
          FVar25 = local_be0;
        }
        if ((ulonglong)FVar25 <= &iStack_cd4) {
          FVar25 = local_be0;
          if (FVar22 != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
            FVar25 = FVar22;
          }
          if ((&iStack_cd4 <
               (int *)((longlong)FVar25 + (longlong)*(int *)((longlong)local_be0 + 0x20c) * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar10 = (code *)swi(3);
            pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)(*pcVar10)();
            return pTVar20;
          }
        }
        iVar42 = *(int *)((longlong)FVar38 + 0x208);
        if (iVar42 == *(int *)((longlong)FVar38 + 0x20c)) {
          iVar42 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_>
                             (0x408,(ForElementType<Optimus::Expression::FParseLocation> *)FVar38,
                              (int *)((longlong)FVar38 + 0x20c));
        }
        *(int *)((longlong)FVar38 + 0x208) = iVar42 + 1;
        if (*(ForElementType<Optimus::Expression::FParseLocation> *)((longlong)FVar38 + 0x200) !=
            (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
          FVar38 = *(ForElementType<Optimus::Expression::FParseLocation> *)
                    ((longlong)FVar38 + 0x200);
        }
        *(ulonglong *)((longlong)FVar38 + (longlong)iVar42 * 8) =
             CONCAT44(local_cd0._0_4_,iStack_cd4);
      } while( true );
    }
    if ((int)local_ae8.Result._padding_ != 10) goto LAB_14e1f776c;
    if (local_60 != 0) {
      uVar34 = 0;
      if ((int)(local_60 - 1U) < local_60) {
        uVar34 = ~(local_60 - 1U) >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      uVar34 = local_60 - 1;
      FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
                )&local_368;
      if (local_368.SecondaryData !=
          (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
           )0x0) {
        FVar23 = local_368.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar23 + 8) + (longlong)(int)uVar34 * 0x18) == iVar18) {
        uVar40 = 0;
        if ((int)uVar34 < local_60) {
          uVar40 = ~uVar34 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
        FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
                  )&local_368;
        if (local_368.SecondaryData !=
            (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
             )0x0) {
          FVar23 = local_368.SecondaryData;
        }
        *(int *)((uchar *)((longlong)FVar23 - 0x14) + (longlong)local_60 * 0x18) =
             *(int *)((uchar *)((longlong)FVar23 - 0x14) + (longlong)local_60 * 0x18) + 1;
        goto LAB_14e1f7caf;
      }
    }
    ::FString::FString(&local_c98,L"Unexpected comma");
    __return_storage_ptr__->_padding_ = (longlong)local_c98.Data.AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->_padding_ = local_c98.Data.ArrayNum;
    iVar42 = local_c98.Data.ArrayMax;
    local_c98.Data.ArrayNum = 0;
    local_c98.Data.ArrayMax = 0;
    local_c98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14e1f83ef:
    *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = iVar42;
    __return_storage_ptr__->_padding_ = CONCAT44(local_ae8.Location.End,local_ae8.Location.Start);
    goto LAB_14e1f83fe;
  }
  iStack_cfc = local_ae8.Location.Start;
  iStack_cf8 = local_ae8.Location.End;
  local_d00 = (int)local_ae8.Result._padding_;
  FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
            )&local_a98;
  if (local_a98.SecondaryData !=
      (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
       )0x0) {
    FVar28 = local_a98.SecondaryData;
  }
  if ((ulonglong)FVar28 <= &local_d00) {
    FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
              )&local_a98;
    if (local_a98.SecondaryData !=
        (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
         )0x0) {
      FVar28 = local_a98.SecondaryData;
    }
    if ((&local_d00 < (int *)((longlong)FVar28 + (longlong)local_90c * 0xc)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
  }
  iVar42 = local_910;
  if (local_910 == local_90c) {
    iVar42 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>_>
                       (0x40c,&local_a98,&local_90c);
  }
  local_910 = iVar42 + 1;
  FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
            )&local_a98;
  if (local_a98.SecondaryData !=
      (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
       )0x0) {
    FVar28 = local_a98.SecondaryData;
  }
  *(ulonglong *)((longlong)FVar28 + (longlong)iVar42 * 0xc) = CONCAT44(iStack_cfc,local_d00);
  *(int *)((uchar *)((longlong)FVar28 + 8) + (longlong)iVar42 * 0xc) = iStack_cf8;
  if (local_3f0 != 0) {
    uVar34 = 0;
    if ((int)(local_3f0 - 1U) < local_3f0) {
      uVar34 = ~(local_3f0 - 1U) >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )&local_6f8;
    if (local_6f8.SecondaryData !=
        (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )0x0) {
      FVar27 = local_6f8.SecondaryData;
    }
    bVar5 = ((uchar *)((longlong)FVar27 + 8))[(longlong)(local_3f0 + -1) * 0xc];
    if ((3 < (ulonglong)bVar5) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar5) == '\0') goto LAB_14e1f7caf;
    uVar34 = 0;
    if ((int)(local_3f0 - 1U) < local_3f0) {
      uVar34 = ~(local_3f0 - 1U) >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )&local_6f8;
    if (local_6f8.SecondaryData !=
        (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )0x0) {
      FVar27 = local_6f8.SecondaryData;
    }
    lVar36 = (longlong)local_3f0;
    if ((((uchar *)((longlong)FVar27 - 4))[lVar36 * 0xc] != '\x01') &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    local_b78.ComparisonIndex.Value =
         *(uint *)&((TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                     *)((longlong)FVar27 - 0xc))[lVar36].field_0x0;
    local_b78.Number =
         *(uint *)&((TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                     *)((longlong)FVar27 - 0xc))[lVar36].field_0x4;
    pTVar21 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)&GBuiltinFunctions,local_b78);
    piVar30 = (int *)&pTVar21->field_0x8;
    if (pTVar21 == (TTuple<FName,int> *)0x0) {
      piVar30 = (int *)0x0;
    }
    if ((piVar30 == (int *)0x0) || (iVar42 = *piVar30, iVar42 == -1)) {
      uVar34 = 0;
      if ((int)(local_700 - 1U) < local_700) {
        uVar34 = ~(local_700 - 1U) >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
      if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
        FVar22 = local_908.SecondaryData;
      }
      lVar36 = *(longlong *)((longlong)FVar22 + (longlong)(local_700 + -1) * 8);
      ::FName::ToString(&local_b78,&local_af8);
      ::FString::PrintfImpl(&local_c78,L"Unknown function \'%s\'");
      __return_storage_ptr__->_padding_ = (longlong)local_c78.Data.AllocatorInstance.Data;
      *(int *)&__return_storage_ptr__->_padding_ = local_c78.Data.ArrayNum;
      *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_c78.Data.ArrayMax;
      __return_storage_ptr__->_padding_ = lVar36;
      __return_storage_ptr__->TypeIndex = '\x01';
      local_c78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c78.Data.ArrayNum = 0;
      local_c78.Data.ArrayMax = 0;
      if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_af8.Data.AllocatorInstance.Data);
      }
      FTokenParseResult::~FTokenParseResult(&local_ae8);
      if (local_368.SecondaryData !=
          (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
           )0x0) {
        FMemory::Free((void *)local_368.SecondaryData);
      }
      if (local_a98.SecondaryData !=
          (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
           )0x0) {
        FMemory::Free((void *)local_a98.SecondaryData);
      }
      if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
        FMemory::Free((void *)local_908.SecondaryData);
      }
      if (local_6f8.SecondaryData !=
          (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )0x0) {
        FMemory::Free((void *)local_6f8.SecondaryData);
      }
      bVar17 = *(longlong *)param_2 == 0;
      goto LAB_14e1f8558;
    }
    if ((local_3f0 < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )&local_6f8;
    if (local_6f8.SecondaryData !=
        (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )0x0) {
      FVar27 = local_6f8.SecondaryData;
    }
    TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
    ::
    TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
              (local_3e8,
               (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                *)((longlong)FVar27 + (longlong)(local_3f0 + -1) * 0xc));
    FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )&local_6f8;
    if (local_6f8.SecondaryData !=
        (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )0x0) {
      FVar27 = local_6f8.SecondaryData;
    }
    pTVar35 = (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
               *)((longlong)FVar27 + (longlong)(local_3f0 + -1) * 0xc);
    iVar39 = (local_3f0 - (local_3f0 + -1)) + -1;
    if (iVar39 != 0) {
      memmove(pTVar35,pTVar35 + 1,(longlong)iVar39 * 0xc);
    }
    local_3f0 = local_3f0 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
              (0xc,4,&local_6f8,local_3f0,&local_3ec);
    if ((local_700 < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    iVar39 = local_700 + -1;
    FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
    if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
      FVar22 = local_908.SecondaryData;
    }
    uVar29 = *(undefined8 *)((longlong)FVar22 + (longlong)iVar39 * 8);
    pvVar3 = (void *)((longlong)FVar22 + (longlong)iVar39 * 8);
    iVar39 = (local_700 - iVar39) + -1;
    if (iVar39 != 0) {
      memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)iVar39 << 3);
    }
    local_700 = local_700 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_>
              (8,4,&local_908,local_700,&local_6fc);
    iStack_c00 = local_910;
    iStack_bfc = local_3f0;
    FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
              )&local_368;
    if (local_368.SecondaryData !=
        (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
         )0x0) {
      FVar23 = local_368.SecondaryData;
    }
    auStack_c04[0] = '\0';
    auStack_c04[1] = '\0';
    auStack_c04[2] = '\0';
    auStack_c04[3] = '\0';
    local_c08 = iVar42;
    local_bf8 = (uchar  [8])uVar29;
    if ((ulonglong)FVar23 <= &local_c08) {
      FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
                )&local_368;
      if (local_368.SecondaryData !=
          (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
           )0x0) {
        FVar23 = local_368.SecondaryData;
      }
      if ((&local_c08 < (int *)((longlong)FVar23 + (longlong)local_5c * 0x18)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
    }
    if (local_60 == local_5c) {
      local_60 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_Optimus::Expression::FEngine::Parse_::__l2::FFunctionCallInfo>_>
                           (0x418,&local_368,&local_5c);
    }
    FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
              )&local_368;
    if (local_368.SecondaryData !=
        (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
         )0x0) {
      FVar23 = local_368.SecondaryData;
    }
    lVar36 = (longlong)local_60;
    puVar1 = (undefined8 *)((longlong)FVar23 + lVar36 * 0x18);
    local_60 = local_60 + 1;
    *puVar1 = CONCAT44(auStack_c04,local_c08);
    puVar1[1] = CONCAT44(iStack_bfc,iStack_c00);
    *(uchar (*) [8])((uchar *)((longlong)FVar23 + 0x10) + lVar36 * 0x18) = local_bf8;
  }
LAB_14e1f7caf:
  uVar37 = local_ae8.Result._padding_ & 0xff;
  local_d18 = (byte)local_ae8.Result._padding_;
  if ((2 < (byte)local_ae8.Result._padding_) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xec,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
              (*pcVar10)();
    return pTVar20;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Optimus::Expression::FEngine::EOperatorToken,FName,float>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[uVar37])(local_d20,&local_ae8);
  pwVar16 = local_cb8.DataPtr;
  iVar42 = 0;
  iVar39 = local_cb8.Size;
  local_d14 = '\x01';
  pwVar9 = local_cb8.DataPtr + local_cb8.Size;
  pwVar41 = local_cb8.DataPtr;
  while ((pwVar41 != pwVar9 && (iVar18 = iswspace(*pwVar41), iVar18 != 0))) {
    iVar42 = iVar42 + 1;
    pwVar41 = pwVar41 + 1;
  }
  uVar37 = (ulonglong)local_ae8.Result.TypeIndex;
  iStack_b50 = iVar39 - iVar42;
  local_cb8.DataPtr = pwVar16 + iVar42;
  local_cb8._12_4_ = uStack_b4c;
  local_cb8.Size = iStack_b50;
  local_b58 = local_cb8.DataPtr;
  if ((1 < local_ae8.Result.TypeIndex) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
              (*pcVar10)();
    return pTVar20;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar37])(&local_ae8);
  if (local_cb8.Size == 0) {
    uVar37 = 0;
    iVar42 = local_3f0;
    while( true ) {
      local_3f0 = iVar42;
      if (local_910 == 0) {
        local_910._0_1_ = '\0';
        local_910._1_1_ = '\0';
        local_910._2_1_ = '\0';
        local_910._3_1_ = '\0';
        if ((*(longlong *)param_2 != 0) && (uVar45 = uVar37, 0 < iVar42)) {
          do {
            uVar40 = (uint)uVar37;
            uVar34 = 0;
            if ((int)uVar40 < iVar42) {
              uVar34 = ~uVar40 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar42 = local_3f0, bVar17)) {
              pcVar10 = (code *)swi(3);
              pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                         *)(*pcVar10)();
              return pTVar20;
            }
            FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )&local_6f8;
            if (local_6f8.SecondaryData !=
                (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )0x0) {
              FVar27 = local_6f8.SecondaryData;
            }
            this_01 = (FName *)((longlong)FVar27 + uVar45);
            if ((char)this_01[1].ComparisonIndex.Value == '\x01') {
              local_b90 = *this_01;
              UE::Core::Private::Function::CheckCallable(*(void **)param_2);
              pcVar10 = *(code **)param_2;
              plVar32 = *(longlong **)&param_2->field_0x28;
              if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
                plVar32 = (longlong *)&param_2->field_0x10;
              }
              uVar29 = (**(code **)(*plVar32 + 8))();
              (*pcVar10)(local_b98,uVar29,&local_b90);
              iVar42 = local_3f0;
              if (local_b94 == '\0') {
                uVar34 = 0;
                if ((int)uVar40 < local_700) {
                  uVar34 = ~uVar40 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                             *)(*pcVar10)();
                  return pTVar20;
                }
                FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
                if (local_908.SecondaryData !=
                    (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
                  FVar22 = local_908.SecondaryData;
                }
                lVar36 = *(longlong *)((longlong)FVar22 + (longlong)(int)uVar40 * 8);
                ::FName::ToString(this_01,local_b38);
                ::FString::PrintfImpl(&local_b88,L"Unknown identifier \'%s\'");
                FVar44.Data = (FScriptContainerElement *)L"";
                if (local_b88.Data.ArrayNum != 0) {
                  FVar44.Data = local_b88.Data.AllocatorInstance.Data;
                }
                ::FString::FString(&local_c18,(wchar_t *)FVar44.Data);
                __return_storage_ptr__->_padding_ = (longlong)local_c18.Data.AllocatorInstance.Data;
                *(int *)&__return_storage_ptr__->_padding_ = local_c18.Data.ArrayNum;
                *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_c18.Data.ArrayMax
                ;
                __return_storage_ptr__->_padding_ = lVar36;
                __return_storage_ptr__->TypeIndex = '\x01';
                local_c18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_c18.Data.ArrayNum = 0;
                local_c18.Data.ArrayMax = 0;
                if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b88.Data.AllocatorInstance.Data);
                }
                if (local_b38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b38[0].Data.AllocatorInstance.Data);
                }
                if (local_368.SecondaryData !=
                    (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
                     )0x0) {
                  FMemory::Free((void *)local_368.SecondaryData);
                }
                if (local_a98.SecondaryData !=
                    (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                     )0x0) {
                  FMemory::Free((void *)local_a98.SecondaryData);
                }
                if (local_908.SecondaryData !=
                    (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
                  FMemory::Free((void *)local_908.SecondaryData);
                }
                if (local_6f8.SecondaryData !=
                    (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                     )0x0) {
                  FMemory::Free((void *)local_6f8.SecondaryData);
                }
                if (*(longlong *)param_2 == 0) {
                  return __return_storage_ptr__;
                }
                plVar32 = (longlong *)&param_2->field_0x10;
                if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
                  plVar32 = *(longlong **)&param_2->field_0x28;
                }
                (**(code **)(*plVar32 + 0x10))();
                return __return_storage_ptr__;
              }
            }
            uVar37 = (ulonglong)(uVar40 + 1);
            uVar45 = uVar45 + 0xc;
          } while ((int)(uVar40 + 1) < iVar42);
        }
        local_3d8.Expression.AllocatorInstance.SecondaryData =
             (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )0x0;
        local_3d8.Expression.ArrayMax = 8;
        FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                  )&local_6f8;
        if (local_6f8.SecondaryData !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FVar27 = local_6f8.SecondaryData;
        }
        local_3d8.Expression.ArrayNum = iVar42;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                  (0xc,4,iVar42,8,
                   (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    *)&local_3d8,iVar42,&local_3d8.Expression.ArrayMax);
        FVar33 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                  )&local_3d8;
        if (local_3d8.Expression.AllocatorInstance.SecondaryData !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FVar33 = local_3d8.Expression.AllocatorInstance.SecondaryData;
        }
        ConstructItems<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,int>
                  ((void *)FVar33,
                   (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                    *)FVar27,iVar42);
        FExpressionObject::FExpressionObject((FExpressionObject *)__return_storage_ptr__,&local_3d8)
        ;
        __return_storage_ptr__->TypeIndex = '\0';
        if (local_3d8.Expression.AllocatorInstance.SecondaryData !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FMemory::Free((void *)local_3d8.Expression.AllocatorInstance.SecondaryData);
        }
        if (local_368.SecondaryData !=
            (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
             )0x0) {
          FMemory::Free((void *)local_368.SecondaryData);
        }
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FMemory::Free((void *)local_a98.SecondaryData);
        }
        if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
          FMemory::Free((void *)local_908.SecondaryData);
        }
        if (local_6f8.SecondaryData !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FMemory::Free((void *)local_6f8.SecondaryData);
        }
        if (*(longlong *)param_2 != 0) {
          plVar32 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar32 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar32 + 0x10))();
        }
        return __return_storage_ptr__;
      }
      uVar34 = 0;
      if ((int)(local_910 - 1U) < local_910) {
        uVar34 = ~(local_910 - 1U) >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      uVar34 = local_910 - 1;
      FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                )&local_a98;
      if (local_a98.SecondaryData !=
          (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
           )0x0) {
        FVar28 = local_a98.SecondaryData;
      }
      if (OperatorTokenInfo[*(int *)((longlong)FVar28 + (longlong)(int)uVar34 * 0xc)].Operator.
          bIsSet == false) break;
      if ((local_910 < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      lVar36 = (longlong)(local_910 + -1);
      FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                )&local_a98;
      if (local_a98.SecondaryData !=
          (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
           )0x0) {
        FVar28 = local_a98.SecondaryData;
      }
      puVar4 = (uchar *)((longlong)FVar28 + lVar36 * 0xc);
      uVar29._0_1_ = puVar4[0];
      uVar29._1_1_ = puVar4[1];
      uVar29._2_1_ = puVar4[2];
      uVar29._3_1_ = puVar4[3];
      uVar29._4_1_ = puVar4[4];
      uVar29._5_1_ = puVar4[5];
      uVar29._6_1_ = puVar4[6];
      uVar29._7_1_ = puVar4[7];
      puVar4 = (uchar *)((longlong)FVar28 + 8) + lVar36 * 0xc;
      uVar8._0_1_ = puVar4[0];
      uVar8._1_1_ = puVar4[1];
      uVar8._2_1_ = puVar4[2];
      uVar8._3_1_ = puVar4[3];
      FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
                )&local_a98;
      if (local_a98.SecondaryData !=
          (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
           )0x0) {
        FVar28 = local_a98.SecondaryData;
      }
      puVar4 = (uchar *)((longlong)FVar28 + lVar36 * 0xc);
      iVar42 = (local_910 - (local_910 + -1)) + -1;
      if (iVar42 != 0) {
        memmove(puVar4,puVar4 + 0xc,(longlong)iVar42 * 0xc);
      }
      local_910 = local_910 + -1;
      local_bb8._0_8_ = uVar29;
      local_bb8._8_4_ = uVar8;
      `Optimus::Expression::FEngine::Parse'::__l2::<lambda_3>::operator()(local_bf0,&local_bb8);
      iVar42 = local_3f0;
    }
    uVar40 = 0;
    if ((int)uVar34 < local_910) {
      uVar40 = ~uVar34 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
              )&local_a98;
    if (local_a98.SecondaryData !=
        (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
         )0x0) {
      FVar28 = local_a98.SecondaryData;
    }
    lVar36 = *(longlong *)((uchar *)((longlong)FVar28 + 4) + (longlong)(local_910 + -1) * 0xc);
    ::FString::FString(&local_c28,L"Mismatched parentheses");
    __return_storage_ptr__->_padding_ = (longlong)local_c28.Data.AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->_padding_ = local_c28.Data.ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_c28.Data.ArrayMax;
    __return_storage_ptr__->_padding_ = lVar36;
    __return_storage_ptr__->TypeIndex = '\x01';
    local_c28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c28.Data.ArrayNum = 0;
    local_c28.Data.ArrayMax = 0;
    if (local_368.SecondaryData !=
        (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
         )0x0) {
      FMemory::Free((void *)local_368.SecondaryData);
    }
    if (local_a98.SecondaryData !=
        (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
         )0x0) {
      FMemory::Free((void *)local_a98.SecondaryData);
    }
    if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
      FMemory::Free((void *)local_908.SecondaryData);
    }
    if (local_6f8.SecondaryData !=
        (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )0x0) {
      FMemory::Free((void *)local_6f8.SecondaryData);
    }
    bVar17 = *(longlong *)param_2 == 0;
LAB_14e1f8558:
    if (bVar17) {
      return __return_storage_ptr__;
    }
    plVar32 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar32 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar32 + 0x10))();
    return __return_storage_ptr__;
  }
  goto LAB_14e1f5fe0;
LAB_14e1f71de:
  if (local_60 != 0) {
    uVar34 = 0;
    if ((int)(local_60 - 1U) < local_60) {
      uVar34 = ~(local_60 - 1U) >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *
                )(*pcVar10)();
      return pTVar20;
    }
    FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
              )&local_368;
    if (local_368.SecondaryData !=
        (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
         )0x0) {
      FVar23 = local_368.SecondaryData;
    }
    if (*(int *)((uchar *)((longlong)FVar23 + 8) + (longlong)(local_60 + -1) * 0x18) == iVar42) {
      if ((local_60 < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar10)();
        return pTVar20;
      }
      lVar36 = (longlong)(local_60 + -1);
      FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
                )&local_368;
      if (local_368.SecondaryData !=
          (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
           )0x0) {
        FVar23 = local_368.SecondaryData;
      }
      local_b18 = *(undefined8 *)((uchar *)((longlong)FVar23 + 0x10) + lVar36 * 0x18);
      piVar30 = (int *)((longlong)FVar23 + lVar36 * 0x18);
      iVar42 = *piVar30;
      iVar39 = piVar30[1];
      iVar18 = piVar30[3];
      FVar23 = (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
                )&local_368;
      if (local_368.SecondaryData !=
          (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
           )0x0) {
        FVar23 = local_368.SecondaryData;
      }
      pvVar3 = (void *)((longlong)FVar23 + lVar36 * 0x18);
      iVar19 = (local_60 - (local_60 + -1)) + -1;
      if (iVar19 != 0) {
        memmove(pvVar3,(void *)((longlong)pvVar3 + 0x18),(longlong)iVar19 * 0x18);
      }
      local_60 = local_60 + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_Optimus::Expression::FEngine::Parse_::__l2::FFunctionCallInfo>_>
                (0x18,4,&local_368,local_60,&local_5c);
      pFVar26 = FBuiltinFunctions::GetInfoByIndex(&GBuiltinFunctions,iVar42);
      if (iVar39 + (uint)(iVar18 != local_3f0) != pFVar26->ArgumentCount) {
        iVar42 = local_ae8.Location.Start;
        if ((int)local_b18 < local_ae8.Location.Start) {
          iVar42 = (int)local_b18;
        }
        iVar39 = local_ae8.Location.End;
        if (local_ae8.Location.End < local_b18._4_4_) {
          iVar39 = local_b18._4_4_;
        }
        ::FString::PrintfImpl(&local_c88,L"Invalid argument count. Expected %d, got %d");
        __return_storage_ptr__->_padding_ = (longlong)local_c88.Data.AllocatorInstance.Data;
        *(int *)&__return_storage_ptr__->_padding_ = local_c88.Data.ArrayNum;
        *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_c88.Data.ArrayMax;
        __return_storage_ptr__->_padding_ = CONCAT44(iVar39,iVar42);
        local_c88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c88.Data.ArrayNum = 0;
        local_c88.Data.ArrayMax = 0;
LAB_14e1f83fe:
        __return_storage_ptr__->TypeIndex = '\x01';
        FTokenParseResult::~FTokenParseResult(&local_ae8);
        if (local_368.SecondaryData !=
            (ForElementType<_public:_class_TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>___cdecl_Optimus::Expression::FEngine::Parse(TStringView<wchar_t>,TFunction<TOptional<float>___cdecl(FName)>)const_::_2_::FFunctionCallInfo>
             )0x0) {
          FMemory::Free((void *)local_368.SecondaryData);
        }
        if (local_a98.SecondaryData !=
            (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
             )0x0) {
          FMemory::Free((void *)local_a98.SecondaryData);
        }
        if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
          FMemory::Free((void *)local_908.SecondaryData);
        }
        if (local_6f8.SecondaryData !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FMemory::Free((void *)local_6f8.SecondaryData);
        }
        bVar17 = *(longlong *)param_2 == 0;
        goto LAB_14e1f8558;
      }
      local_abc.TypeIndex = '\x02';
      FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )&local_6f8;
      if (local_6f8.SecondaryData !=
          (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )0x0) {
        FVar27 = local_6f8.SecondaryData;
      }
      local_abc._0_4_ = iVar42;
      if ((ulonglong)FVar27 <= &local_abc) {
        FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                  )&local_6f8;
        if (local_6f8.SecondaryData !=
            (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
             )0x0) {
          FVar27 = local_6f8.SecondaryData;
        }
        if ((&local_abc <
             (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
              *)((longlong)FVar27 + (longlong)local_3ec * 0xc)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
      }
      if (local_3f0 == local_3ec) {
        local_3f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                              (0x40c,&local_6f8,&local_3ec);
      }
      lVar36 = (longlong)local_3f0;
      FVar27 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )&local_6f8;
      if (local_6f8.SecondaryData !=
          (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )0x0) {
        FVar27 = local_6f8.SecondaryData;
      }
      local_3f0 = local_3f0 + 1;
      TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
      ::
      TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                ((TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                  *)((longlong)FVar27 + lVar36 * 0xc),&local_abc);
      FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
      if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
        FVar22 = local_908.SecondaryData;
      }
      if ((ulonglong)FVar22 <= &local_ae8.Location) {
        FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
        if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
          FVar22 = local_908.SecondaryData;
        }
        if ((&local_ae8.Location < (undefined1 *)((longlong)FVar22 + (longlong)local_6fc * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                     *)(*pcVar10)();
          return pTVar20;
        }
      }
      if (local_700 == local_6fc) {
        local_700 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_>
                              (0x408,&local_908,&local_6fc);
      }
      lVar36 = (longlong)local_700;
      FVar22 = (ForElementType<Optimus::Expression::FParseLocation>)&local_908;
      if (local_908.SecondaryData != (ForElementType<Optimus::Expression::FParseLocation>)0x0) {
        FVar22 = local_908.SecondaryData;
      }
      local_700 = local_700 + 1;
      *(ulonglong *)((longlong)FVar22 + lVar36 * 8) =
           CONCAT44(local_ae8.Location.End,local_ae8.Location.Start);
    }
  }
  if ((local_910 < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar20 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
              (*pcVar10)();
    return pTVar20;
  }
  FVar28 = (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
            )&local_a98;
  if (local_a98.SecondaryData !=
      (ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
       )0x0) {
    FVar28 = local_a98.SecondaryData;
  }
  puVar4 = (uchar *)((longlong)FVar28 + (longlong)(local_910 + -1) * 0xc);
  iVar42 = (local_910 - (local_910 + -1)) + -1;
  if (iVar42 != 0) {
    memmove(puVar4,puVar4 + 0xc,(longlong)iVar42 * 0xc);
  }
  local_910 = local_910 + -1;
  goto LAB_14e1f7caf;
}

// ParseFloat @ 14e1f8c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTokenParseResult * __cdecl
Optimus::Expression::FEngine::ParseFloat
          (FTokenParseResult *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  short sVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  wchar_t wVar7;
  FTokenParseResult *pFVar8;
  longlong lVar9;
  double *pdVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  wchar_t *pwVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  double dVar23;
  undefined1 auStack_d8 [32];
  uint local_b8;
  int local_b0;
  FString local_a8;
  TStringView<wchar_t> *local_98;
  FTokenParseResult *local_90;
  double local_88 [6];
  double local_58 [4];
  
  local_58[0] = (double)(__security_cookie.value ^ (ulonglong)auStack_d8);
  iVar22 = param_1->Size;
  uVar20 = 0;
  uVar13 = 0;
  uVar21 = 0xffffffff;
  uVar14 = 0xffffffff;
  uVar12 = uVar20;
  local_98 = param_2;
  local_90 = __return_storage_ptr__;
  if (0 < iVar22) {
    do {
      uVar13 = (uint)uVar20;
      if ((((int)uVar13 < 0) || (iVar22 <= (int)uVar13)) &&
         (local_b8 = uVar13, local_b0 = iVar22,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                            ,0x234,
                            L"Index out of bounds on StringView: index %i on a view with a length of %i"
                           ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FTokenParseResult *)(*pcVar4)();
        return pFVar8;
      }
      sVar1 = *(short *)(uVar12 + (longlong)param_1->DataPtr);
      if ((ushort)(sVar1 - 0x30U) < 10) {
        uVar17 = uVar21;
        if ((sVar1 != 0x30) && ((int)uVar14 < 0)) {
          uVar14 = uVar13;
        }
      }
      else if ((sVar1 != 0x2e) || (uVar17 = uVar13, -1 < (int)uVar21)) break;
      uVar21 = uVar17;
      iVar22 = param_1->Size;
      uVar13 = uVar13 + 1;
      uVar20 = (ulonglong)uVar13;
      uVar12 = uVar12 + 2;
    } while ((int)uVar13 < iVar22);
  }
  uVar12 = 0;
  uVar20 = (ulonglong)(uVar13 - uVar14);
  if ((int)uVar14 < 0) {
    uVar20 = uVar12;
  }
  uVar19 = (uint)uVar20;
  uVar17 = uVar13;
  uVar11 = uVar13;
  if ((-1 < (int)uVar21) && (uVar17 = uVar21, uVar11 = uVar13 - 1, (int)uVar14 < (int)uVar21)) {
    uVar19 = uVar19 - 1;
  }
  if (uVar11 == 0) {
    pwVar18 = local_98->DataPtr;
    pwVar3 = param_1->DataPtr;
    iVar22 = param_1->Size;
    if (1 < param_1->Size) {
      iVar22 = 1;
    }
    ::FString::FString(&local_a8,L"Invalid floating point value");
    (__return_storage_ptr__->Result)._padding_ = (longlong)local_a8.Data.AllocatorInstance.Data;
    *(int *)&(__return_storage_ptr__->Result)._padding_ = local_a8.Data.ArrayNum;
    *(int *)((longlong)&(__return_storage_ptr__->Result)._padding_ + 4) = local_a8.Data.ArrayMax;
    (__return_storage_ptr__->Result).TypeIndex = '\0';
    (__return_storage_ptr__->Location).Start = (int)((longlong)pwVar3 - (longlong)pwVar18 >> 1);
    iVar16 = 0;
    if (0 < iVar22) {
      iVar16 = iVar22;
    }
    (__return_storage_ptr__->Location).End =
         (int)(((longlong)iVar16 * 2 - (longlong)pwVar18) + (longlong)pwVar3 >> 1);
    return __return_storage_ptr__;
  }
  pwVar18 = param_1->DataPtr + (int)uVar14;
  if ((int)uVar19 < 0xc) {
    iVar22 = uVar17 - uVar11;
    if (0 < (int)uVar19) goto LAB_14e1f8d95;
  }
  else {
    uVar19 = 0xb;
    iVar22 = uVar17 - 0xb;
LAB_14e1f8d95:
    uVar20 = (ulonglong)uVar19;
    do {
      wVar2 = *pwVar18;
      wVar7 = wVar2;
      if (wVar2 == L'.') {
        wVar7 = pwVar18[1];
      }
      uVar12 = (ulonglong)(ushort)wVar7 + (uVar12 * 5 + -0x18) * 2;
      lVar9 = 4;
      if (wVar2 != L'.') {
        lVar9 = 2;
      }
      pwVar18 = (wchar_t *)((longlong)pwVar18 + lVar9);
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  iVar16 = 0;
  local_b0 = param_1->Size;
  bVar5 = false;
  if (local_b0 <= (int)(uVar13 + 1)) goto LAB_14e1f9016;
  if ((((int)uVar13 < 0) || (local_b0 <= (int)uVar13)) &&
     (local_b8 = uVar13,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index >= 0 && Index < Size",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                        ,0x234,
                        L"Index out of bounds on StringView: index %i on a view with a length of %i"
                       ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FTokenParseResult *)(*pcVar4)();
    return pFVar8;
  }
  if (param_1->DataPtr[(int)uVar13] != L'e') {
    local_b0 = param_1->Size;
    if ((((int)uVar13 < 0) || (local_b0 <= (int)uVar13)) &&
       (local_b8 = uVar13,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                          ,0x234,
                          L"Index out of bounds on StringView: index %i on a view with a length of %i"
                         ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTokenParseResult *)(*pcVar4)();
      return pFVar8;
    }
    if (param_1->DataPtr[(int)uVar13] != L'E') goto LAB_14e1f9016;
  }
  local_b0 = param_1->Size;
  uVar14 = uVar13 + 1;
  if ((((int)uVar14 < 0) || (local_b0 <= (int)uVar14)) &&
     (local_b8 = uVar14,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index >= 0 && Index < Size",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                        ,0x234,
                        L"Index out of bounds on StringView: index %i on a view with a length of %i"
                       ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FTokenParseResult *)(*pcVar4)();
    return pFVar8;
  }
  bVar6 = false;
  if (param_1->DataPtr[(int)uVar14] == L'+') {
LAB_14e1f8f35:
    bVar5 = bVar6;
    uVar14 = uVar13 + 2;
  }
  else {
    local_b0 = param_1->Size;
    if ((((int)uVar14 < 0) || (local_b0 <= (int)uVar14)) &&
       (local_b8 = uVar14,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                          ,0x234,
                          L"Index out of bounds on StringView: index %i on a view with a length of %i"
                         ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTokenParseResult *)(*pcVar4)();
      return pFVar8;
    }
    if (param_1->DataPtr[(int)uVar14] == L'-') {
      bVar6 = true;
      goto LAB_14e1f8f35;
    }
  }
  local_b0 = param_1->Size;
  iVar15 = 0;
  if ((int)uVar14 < local_b0) {
    lVar9 = (longlong)(int)uVar14 * 2;
    iVar16 = 0;
    do {
      if ((((int)uVar14 < 0) || (local_b0 <= (int)uVar14)) &&
         (local_b8 = uVar14,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                            ,0x234,
                            L"Index out of bounds on StringView: index %i on a view with a length of %i"
                           ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FTokenParseResult *)(*pcVar4)();
        return pFVar8;
      }
      if (9 < (ushort)(*(short *)((longlong)param_1->DataPtr + lVar9) - 0x30U)) break;
      if (iVar15 < 2) {
        local_b0 = param_1->Size;
        if ((((int)uVar14 < 0) || (local_b0 <= (int)uVar14)) &&
           (local_b8 = uVar14,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FTokenParseResult *)(*pcVar4)();
          return pFVar8;
        }
        iVar16 = (uint)*(ushort *)((longlong)param_1->DataPtr + lVar9) + (iVar16 * 5 + -0x18) * 2;
      }
      local_b0 = param_1->Size;
      uVar14 = uVar14 + 1;
      lVar9 = lVar9 + 2;
      iVar15 = iVar15 + 1;
    } while ((int)uVar14 < local_b0);
    if (0 < iVar15) {
      uVar13 = uVar14;
    }
  }
  if (bVar5) {
    iVar16 = -iVar16;
  }
LAB_14e1f9016:
  uVar21 = 0;
  uVar17 = iVar22 + iVar16;
  local_88[0] = ___xmm_40590000000000004024000000000000;
  local_88[1] = (double)_UNK_1517cfc88;
  uVar14 = -uVar17;
  if ((int)-uVar17 < 0) {
    uVar14 = uVar17;
  }
  local_88[2] = (double)___xmm_4197d7840000000040c3880000000000;
  local_88[3] = (double)_UNK_152e27238;
  uVar11 = 0x26;
  if ((int)uVar14 < 0x26) {
    uVar11 = uVar14;
  }
  pdVar10 = local_88;
  local_88[4] = (double)___xmm_4693b8b5b5056e174341c37937e08000;
  local_88[5] = (double)_UNK_152e27248;
  dVar23 = __real_3ff0000000000000;
  do {
    if (uVar11 == 0) break;
    if ((uVar11 & 1) != 0) {
      dVar23 = dVar23 * *pdVar10;
    }
    uVar11 = (int)uVar11 >> 1;
    pdVar10 = pdVar10 + 1;
  } while (pdVar10 != local_58);
  if ((int)uVar17 < 0) {
    dVar23 = (double)uVar12 / dVar23;
  }
  else {
    dVar23 = (double)uVar12 * dVar23;
  }
  uVar14 = param_1->Size;
  pwVar18 = param_1->DataPtr;
  uVar17 = uVar14;
  if ((int)uVar13 < (int)uVar14) {
    uVar17 = uVar13;
  }
  uVar11 = uVar21;
  if ((int)uVar13 < 0) {
    uVar11 = uVar13;
  }
  uVar19 = uVar13 - uVar11;
  if ((int)uVar14 < (int)(uVar13 - uVar11)) {
    uVar19 = uVar14;
  }
  uVar13 = uVar14 - uVar19;
  if ((int)(uVar11 + 0x7fffffff) < (int)(uVar14 - uVar19)) {
    uVar13 = uVar11 + 0x7fffffff;
  }
  uVar14 = uVar21;
  if (0 < (int)uVar13) {
    uVar14 = uVar13;
  }
  pwVar3 = local_98->DataPtr;
  param_1->DataPtr = pwVar18 + (int)uVar19;
  *(ulonglong *)&param_1->Size = CONCAT44(local_a8.Data.ArrayMax,uVar14);
  *(undefined1 *)&(local_90->Result)._padding_ = 2;
  *(float *)&(local_90->Result)._padding_ = (float)dVar23;
  if (0 < (int)uVar17) {
    uVar21 = uVar17;
  }
  (local_90->Result).TypeIndex = '\x01';
  (local_90->Location).Start = (int)((longlong)pwVar18 - (longlong)pwVar3 >> 1);
  (local_90->Location).End =
       (int)(((longlong)(int)uVar21 * 2 - (longlong)local_98->DataPtr) + (longlong)pwVar18 >> 1);
  return local_90;
}

// ParseIdentifier @ 14e1f9160

FTokenParseResult * __cdecl
Optimus::Expression::FEngine::ParseIdentifier
          (FTokenParseResult *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  int iVar4;
  TStringView<wchar_t> *pTVar5;
  bool bVar6;
  int iVar7;
  FTokenParseResult *pFVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FString local_78;
  TStringView<wchar_t> *local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  
  iVar12 = 0;
  local_68 = param_2;
  if ((param_1->Size < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FTokenParseResult *)(*pcVar3)();
    return pFVar8;
  }
  iVar7 = param_1->Size;
  if (*param_1->DataPtr == L'\'') {
    if (iVar7 < 2) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1->DataPtr;
      local_78.Data.ArrayNum = param_1->Size;
      local_78.Data.ArrayMax = *(int *)&param_1->field_0xc;
      ::FString::FString(&local_58,L"Missing end quote for constant");
      (__return_storage_ptr__->Result)._padding_ = (longlong)local_58.Data.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Result)._padding_ = local_58.Data.ArrayNum;
      pwVar1 = param_2->DataPtr;
      *(int *)((longlong)&(__return_storage_ptr__->Result)._padding_ + 4) = local_58.Data.ArrayMax;
      (__return_storage_ptr__->Result).TypeIndex = '\0';
      (__return_storage_ptr__->Location).Start =
           (int)((longlong)local_78.Data.AllocatorInstance.Data - (longlong)pwVar1 >> 1);
      (__return_storage_ptr__->Location).End =
           (int)((longlong)
                 (local_78.Data.AllocatorInstance.Data +
                 ((longlong)local_78.Data.ArrayNum * 2 - (longlong)param_2->DataPtr)) >> 1);
      return __return_storage_ptr__;
    }
    iVar12 = 1;
    iVar9 = 2;
    if (2 < iVar7) {
      lVar11 = 4;
      do {
        if (((iVar9 < 0) || (iVar7 <= iVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FTokenParseResult *)(*pcVar3)();
          return pFVar8;
        }
        param_2 = local_68;
        if (*(short *)((longlong)param_1->DataPtr + lVar11) == 0x27) break;
        iVar7 = param_1->Size;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 2;
      } while (iVar9 < iVar7);
    }
    if (iVar9 == param_1->Size) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1->DataPtr;
      local_78.Data.ArrayNum = param_1->Size;
      local_78.Data.ArrayMax = *(int *)&param_1->field_0xc;
      ::FString::FString(&local_48,L"Missing end quote for constant");
      (__return_storage_ptr__->Result)._padding_ = (longlong)local_48.Data.AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Result)._padding_ = local_48.Data.ArrayNum;
      *(int *)((longlong)&(__return_storage_ptr__->Result)._padding_ + 4) = local_48.Data.ArrayMax;
      pwVar1 = param_2->DataPtr;
      (__return_storage_ptr__->Result).TypeIndex = '\0';
      (__return_storage_ptr__->Location).Start =
           (int)((longlong)local_78.Data.AllocatorInstance.Data - (longlong)pwVar1 >> 1);
      (__return_storage_ptr__->Location).End =
           (int)((longlong)
                 (local_78.Data.AllocatorInstance.Data +
                 ((longlong)local_78.Data.ArrayNum * 2 - (longlong)param_2->DataPtr)) >> 1);
      return __return_storage_ptr__;
    }
    iVar10 = iVar9 + 1;
  }
  else {
    if ((iVar7 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FTokenParseResult *)(*pcVar3)();
      return pFVar8;
    }
    iVar7 = iswalpha(*param_1->DataPtr);
    if (iVar7 == 0) {
      if ((param_1->Size < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTokenParseResult *)(*pcVar3)();
        return pFVar8;
      }
      pTVar5 = local_68;
      pwVar1 = param_1->DataPtr;
      param_2 = local_68;
      if (*pwVar1 != L'_') {
        iVar12 = param_1->Size;
        if (1 < param_1->Size) {
          iVar12 = 1;
        }
        ::FString::FString(&local_78,L"Unexpected character");
        (__return_storage_ptr__->Result)._padding_ = (longlong)local_78.Data.AllocatorInstance.Data;
        *(int *)&(__return_storage_ptr__->Result)._padding_ = local_78.Data.ArrayNum;
        *(int *)((longlong)&(__return_storage_ptr__->Result)._padding_ + 4) = local_78.Data.ArrayMax
        ;
        pwVar2 = pTVar5->DataPtr;
        (__return_storage_ptr__->Result).TypeIndex = '\0';
        (__return_storage_ptr__->Location).Start = (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
        iVar7 = 0;
        if (0 < iVar12) {
          iVar7 = iVar12;
        }
        lVar11 = ((longlong)iVar7 * 2 - (longlong)pTVar5->DataPtr) + (longlong)pwVar1;
        goto LAB_14e1f95a6;
      }
    }
    iVar7 = param_1->Size;
    iVar10 = 1;
    iVar9 = iVar10;
    if (1 < iVar7) {
      lVar11 = 2;
      do {
        if (((iVar10 < 0) || (iVar7 <= iVar10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FTokenParseResult *)(*pcVar3)();
          return pFVar8;
        }
        iVar7 = iswalnum(*(wint_t *)(lVar11 + (longlong)param_1->DataPtr));
        if (iVar7 == 0) {
          if (((iVar10 < 0) || (param_1->Size <= iVar10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FTokenParseResult *)(*pcVar3)();
            return pFVar8;
          }
          iVar9 = iVar10;
          if (*(short *)(lVar11 + (longlong)param_1->DataPtr) != 0x5f) break;
        }
        iVar7 = param_1->Size;
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 2;
        iVar9 = iVar10;
      } while (iVar10 < iVar7);
    }
  }
  iVar7 = param_1->Size;
  iVar13 = iVar12;
  if (iVar7 < iVar12) {
    iVar13 = iVar7;
  }
  iVar4 = iVar7 - iVar13;
  if (iVar9 - iVar12 < iVar7 - iVar13) {
    iVar4 = iVar9 - iVar12;
  }
  iVar12 = 0;
  if (0 < iVar4) {
    iVar12 = iVar4;
  }
  ::FName::FName(&local_60,iVar12,param_1->DataPtr + iVar13,FNAME_Add);
  iVar12 = param_1->Size;
  pwVar1 = param_1->DataPtr;
  iVar7 = iVar12;
  if (iVar10 < iVar12) {
    iVar7 = iVar10;
  }
  iVar9 = 0;
  if (iVar10 < 0) {
    iVar9 = iVar10;
  }
  iVar13 = iVar10 - iVar9;
  if (iVar12 < iVar10 - iVar9) {
    iVar13 = iVar12;
  }
  iVar10 = iVar12 - iVar13;
  if (iVar9 + 0x7fffffff < iVar12 - iVar13) {
    iVar10 = iVar9 + 0x7fffffff;
  }
  iVar12 = 0;
  if (0 < iVar10) {
    iVar12 = iVar10;
  }
  param_1->DataPtr = pwVar1 + iVar13;
  param_1->Size = iVar12;
  *(int *)&param_1->field_0xc = local_78.Data.ArrayMax;
  *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 1;
  (__return_storage_ptr__->Result)._padding_ = (longlong)local_60;
  pwVar2 = param_2->DataPtr;
  (__return_storage_ptr__->Result).TypeIndex = '\x01';
  (__return_storage_ptr__->Location).Start = (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
  iVar12 = 0;
  if (0 < iVar7) {
    iVar12 = iVar7;
  }
  lVar11 = ((longlong)iVar12 * 2 - (longlong)param_2->DataPtr) + (longlong)pwVar1;
LAB_14e1f95a6:
  (__return_storage_ptr__->Location).End = (int)(lVar11 >> 1);
  return __return_storage_ptr__;
}

// ParseToken @ 14e1f95e0

FTokenParseResult * __cdecl
Optimus::Expression::FEngine::ParseToken
          (FTokenParseResult *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTokenParseResult *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  iVar7 = 0;
  pwVar1 = param_2->DataPtr;
  if ((param_1->Size < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FTokenParseResult *)(*pcVar3)();
    return pFVar6;
  }
  pwVar2 = param_1->DataPtr;
  switch(*pwVar2) {
  case L'%':
    iVar7 = param_1->Size;
    iVar9 = iVar7;
    if (1 < iVar7) {
      iVar9 = 1;
    }
    iVar10 = 1;
    if (iVar7 < 1) {
      iVar10 = iVar7;
    }
    iVar8 = 0;
    if (0 < iVar7 - iVar10) {
      iVar8 = iVar7 - iVar10;
    }
    param_1->DataPtr = pwVar2 + iVar10;
    param_1->Size = iVar8;
    *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
    *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
    *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 5;
    break;
  default:
    if ((param_1->Size < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTokenParseResult *)(*pcVar3)();
      return pFVar6;
    }
    if (9 < (ushort)(*param_1->DataPtr + L'￐')) {
      if ((param_1->Size < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FTokenParseResult *)(*pcVar3)();
        return pFVar6;
      }
      if (*param_1->DataPtr != L'.') {
        local_48.DataPtr = param_2->DataPtr;
        local_48.Size = param_2->Size;
        local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
        ParseIdentifier(__return_storage_ptr__,param_1,&local_48);
        return __return_storage_ptr__;
      }
    }
    local_38.DataPtr = param_2->DataPtr;
    local_38.Size = param_2->Size;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    ParseFloat(__return_storage_ptr__,param_1,&local_38);
    return __return_storage_ptr__;
  case L'(':
    iVar7 = param_1->Size;
    iVar9 = iVar7;
    if (1 < iVar7) {
      iVar9 = 1;
    }
    iVar10 = 1;
    if (iVar7 < 1) {
      iVar10 = iVar7;
    }
    iVar8 = 0;
    if (0 < iVar7 - iVar10) {
      iVar8 = iVar7 - iVar10;
    }
    param_1->DataPtr = pwVar2 + iVar10;
    param_1->Size = iVar8;
    *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
    *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
    *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 8;
    break;
  case L')':
    iVar7 = param_1->Size;
    iVar9 = iVar7;
    if (1 < iVar7) {
      iVar9 = 1;
    }
    iVar10 = 1;
    if (iVar7 < 1) {
      iVar10 = iVar7;
    }
    iVar8 = 0;
    if (0 < iVar7 - iVar10) {
      iVar8 = iVar7 - iVar10;
    }
    param_1->DataPtr = pwVar2 + iVar10;
    param_1->Size = iVar8;
    *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
    *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
    *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 9;
    break;
  case L'*':
    iVar10 = param_1->Size;
    if ((iVar10 < 2) || (pwVar2[1] != L'*')) {
      iVar9 = iVar10;
      if (1 < iVar10) {
        iVar9 = 1;
      }
      iVar8 = 1;
      if (iVar10 < 1) {
        iVar8 = iVar10;
      }
      iVar5 = 0;
      if (0 < iVar10 - iVar8) {
        iVar5 = iVar10 - iVar8;
      }
      iVar10 = (int)((longlong)pwVar2 - (longlong)pwVar1 >> 1);
      param_1->DataPtr = pwVar2 + iVar8;
      param_1->Size = iVar5;
      *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
      *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
      *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 3;
      if (0 < iVar9) {
        iVar7 = iVar9;
      }
    }
    else {
      iVar9 = iVar10;
      if (2 < iVar10) {
        iVar9 = 2;
      }
      iVar8 = 0;
      if (0 < iVar10 + -2) {
        iVar8 = iVar10 + -2;
      }
      iVar10 = (int)((longlong)pwVar2 - (longlong)pwVar1 >> 1);
      param_1->DataPtr = pwVar2 + 2;
      param_1->Size = iVar8;
      *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
      *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
      *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 6;
      if (0 < iVar9) {
        iVar7 = iVar9;
      }
    }
    goto LAB_14e1f9719;
  case L'+':
    iVar10 = param_1->Size;
    iVar9 = 1;
    if (iVar10 < 1) {
      iVar9 = iVar10;
    }
    iVar8 = iVar10;
    if (1 < iVar10) {
      iVar8 = 1;
    }
    iVar5 = 0;
    if (0 < iVar10 - iVar9) {
      iVar5 = iVar10 - iVar9;
    }
    param_1->DataPtr = pwVar2 + iVar9;
    param_1->Size = iVar5;
    *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
    *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
    *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 1;
    if (0 < iVar8) {
      iVar7 = iVar8;
    }
    (__return_storage_ptr__->Result).TypeIndex = '\x01';
    (__return_storage_ptr__->Location).Start = (int)((longlong)pwVar2 - (longlong)pwVar1 >> 1);
    (__return_storage_ptr__->Location).End =
         (int)(((longlong)iVar7 * 2 - (longlong)pwVar1) + (longlong)pwVar2 >> 1);
    return __return_storage_ptr__;
  case L',':
    iVar7 = param_1->Size;
    iVar9 = iVar7;
    if (1 < iVar7) {
      iVar9 = 1;
    }
    iVar10 = 1;
    if (iVar7 < 1) {
      iVar10 = iVar7;
    }
    iVar8 = 0;
    if (0 < iVar7 - iVar10) {
      iVar8 = iVar7 - iVar10;
    }
    param_1->DataPtr = pwVar2 + iVar10;
    param_1->Size = iVar8;
    *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
    *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
    *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 10;
    break;
  case L'-':
    iVar7 = param_1->Size;
    iVar9 = iVar7;
    if (1 < iVar7) {
      iVar9 = 1;
    }
    iVar10 = 1;
    if (iVar7 < 1) {
      iVar10 = iVar7;
    }
    iVar8 = 0;
    if (0 < iVar7 - iVar10) {
      iVar8 = iVar7 - iVar10;
    }
    param_1->DataPtr = pwVar2 + iVar10;
    param_1->Size = iVar8;
    *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
    *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
    *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 2;
    break;
  case L'/':
    iVar10 = param_1->Size;
    if ((iVar10 < 2) || (pwVar2[1] != L'/')) {
      iVar9 = iVar10;
      if (1 < iVar10) {
        iVar9 = 1;
      }
      iVar8 = 1;
      if (iVar10 < 1) {
        iVar8 = iVar10;
      }
      iVar5 = 0;
      if (0 < iVar10 - iVar8) {
        iVar5 = iVar10 - iVar8;
      }
      iVar10 = (int)((longlong)pwVar2 - (longlong)pwVar1 >> 1);
      param_1->DataPtr = pwVar2 + iVar8;
      param_1->Size = iVar5;
      *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
      *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
      *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 4;
      if (0 < iVar9) {
        iVar7 = iVar9;
      }
    }
    else {
      iVar9 = iVar10;
      if (2 < iVar10) {
        iVar9 = 2;
      }
      iVar8 = 0;
      if (0 < iVar10 + -2) {
        iVar8 = iVar10 + -2;
      }
      iVar10 = (int)((longlong)pwVar2 - (longlong)pwVar1 >> 1);
      param_1->DataPtr = pwVar2 + 2;
      param_1->Size = iVar8;
      *(undefined4 *)&param_1->field_0xc = local_48._12_4_;
      *(undefined1 *)&(__return_storage_ptr__->Result)._padding_ = 0;
      *(undefined4 *)&(__return_storage_ptr__->Result)._padding_ = 7;
      if (0 < iVar9) {
        iVar7 = iVar9;
      }
    }
    goto LAB_14e1f9719;
  }
  iVar10 = (int)((longlong)pwVar2 - (longlong)pwVar1 >> 1);
  iVar7 = 0;
  if (0 < iVar9) {
    iVar7 = iVar9;
  }
LAB_14e1f9719:
  (__return_storage_ptr__->Result).TypeIndex = '\x01';
  (__return_storage_ptr__->Location).Start = iVar10;
  (__return_storage_ptr__->Location).End =
       (int)(((longlong)iVar7 * 2 - (longlong)pwVar1) + (longlong)pwVar2 >> 1);
  return __return_storage_ptr__;
}

// TokenToString @ 14e2278d0

FString * __cdecl
Optimus::Expression::FEngine::TokenToString
          (FString *__return_storage_ptr__,
          TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float> *param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float> *pTVar4;
  FString *pFVar5;
  TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float> *pTVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar1 = param_1->TypeIndex;
  pTVar6 = (TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float> *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pTVar4 = param_1;
  if (uVar1 != '\0') {
    pTVar4 = pTVar6;
  }
  if (pTVar4 == (TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float> *)0x0) {
    pTVar4 = param_1;
    if (uVar1 != '\x01') {
      pTVar4 = pTVar6;
    }
    if (pTVar4 == (TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float> *)0x0) {
      if (uVar1 != '\x02') {
        param_1 = pTVar6;
      }
      if (param_1 != (TVariant<Optimus::Expression::FEngine::EOperatorToken,FName,float> *)0x0) {
        ::FString::PrintfImpl(&local_38,L"%g");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        local_48.Data.ArrayMax = local_38.Data.ArrayMax;
        local_48.Data.ArrayNum = local_38.Data.ArrayNum;
      }
    }
    else {
      pFVar5 = ::FName::ToString((FName *)pTVar4,&local_28);
      if (&local_48 != pFVar5) {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_48.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_48.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    switch(*(undefined4 *)pTVar4) {
    case 0:
      ::FString::operator=(&local_48,L"<->");
      break;
    case 1:
      ::FString::operator=(&local_48,L"+");
      break;
    case 2:
      ::FString::operator=(&local_48,L"-");
      break;
    case 3:
      ::FString::operator=(&local_48,L"*");
      break;
    case 4:
      ::FString::operator=(&local_48,L"/");
      break;
    case 5:
      ::FString::operator=(&local_48,L"%");
      break;
    case 6:
      ::FString::operator=(&local_48,L"**");
      break;
    case 7:
      ::FString::operator=(&local_48,L"//");
      break;
    case 8:
      ::FString::operator=(&local_48,L"(");
      break;
    case 9:
      ::FString::operator=(&local_48,L")");
      break;
    case 10:
      ::FString::operator=(&local_48,L",");
      break;
    case 0xb:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusExpressionEvaluator.cpp"
                         ,0x11c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s[%s]");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Verify @ 14e2307d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<Optimus::Expression::FParseError> * __thiscall
Optimus::Expression::FEngine::Verify
          (FEngine *this,TOptional<Optimus::Expression::FParseError> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,TFunction<TOptional<float>___cdecl(FName)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<Optimus::Expression::FParseError> *pTVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  TStringView<wchar_t> local_e8;
  TFunction<TOptional<float>___cdecl(FName)> local_d8;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8._0_8_ = *(undefined8 *)param_2;
  local_d8._40_8_ = 0;
  if (local_d8._0_8_ != 0) {
    puVar4 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&local_d8.field_0x10);
  }
  local_e8.DataPtr = param_1->DataPtr;
  local_e8.Size = param_1->Size;
  local_e8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  Parse(this,&local_a8,&local_e8,&local_d8);
  if (local_a8.TypeIndex == 1) {
    ::FString::FString((FString *)__return_storage_ptr__,(FString *)&local_a8);
    (__return_storage_ptr__->TypedValue).Location.Start = (undefined4)local_a8._padding_;
    (__return_storage_ptr__->TypedValue).Location.End = local_a8._padding_._4_4_;
    __return_storage_ptr__->bIsSet = true;
    if (1 < (ulonglong)local_a8.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOptional<Optimus::Expression::FParseError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_a8.TypeIndex])(&local_a8);
    if (*(longlong *)param_2 != 0) {
      plVar5 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  else {
    __return_storage_ptr__->bIsSet = false;
    if (1 < local_a8.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOptional<Optimus::Expression::FParseError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_a8.TypeIndex])(&local_a8);
    if (*(longlong *)param_2 != 0) {
      plVar5 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return __return_storage_ptr__;
}

