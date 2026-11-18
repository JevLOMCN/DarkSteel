// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ~TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError> @ 1417a6a20

void __thiscall
TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::
~TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
          (TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
           *this)

{
  byte bVar1;
  longlong *plVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar1 = (this->Variant).TypeIndex;
  if (2 < bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    plVar2 = (longlong *)(this->Variant)._padding_;
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    plVar2 = (longlong *)(this->Variant)._padding_;
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
    return;
  case 5:
    return;
  case 6:
    return;
  case 7:
    plVar2 = (longlong *)(this->Variant)._padding_;
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
    return;
  case 8:
    return;
  }
  DestructItems<TCompiledToken<wchar_t>,int>
            ((TCompiledToken<wchar_t> *)(this->Variant)._padding_,(int)(this->Variant)._padding_);
  pvVar3 = (void *)(this->Variant)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
    return;
  }
  return;
}

// ~TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError> @ 1417a6a80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x000150614106) */
/* WARNING: Removing unreachable block (ram,0x00015061410a) */
/* WARNING: Removing unreachable block (ram,0x00015061416b) */
/* WARNING: Removing unreachable block (ram,0x000150614256) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */

void __thiscall
TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::
~TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
          (TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
           *this)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  undefined2 uVar13;
  char *in_RDX;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar15;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar14;
  
  bVar3 = (this->Variant).TypeIndex;
  if (2 < (ulonglong)bVar3) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pbVar12 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3];
  cVar14 = (char)((ulonglong)in_RDX >> 8);
  uVar13 = SUB82(in_RDX,0);
  cVar10 = (char)((ulonglong)pbVar12 >> 8);
  bVar9 = (byte)pbVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  case 0:
    DestructItems<TExpressionToken<wchar_t>,int>
              ((TExpressionToken<wchar_t> *)(this->Variant)._padding_,(int)(this->Variant)._padding_
              );
    pvVar5 = (void *)(this->Variant)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 1:
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014175142b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
    return;
  case 2:
    return;
  case 3:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar13);
    pcVar1 = (char *)((longlong)pbVar12 * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar14;
    *(char *)&(this->Variant)._padding_ =
         (char)(this->Variant)._padding_ + (char)((ulonglong)this >> 8);
    out(unaff_RSI[1],uVar13);
    *unaff_RBP = *unaff_RBP + cVar10;
    *pbVar12 = *pbVar12 & bVar9;
    *pbVar12 = *pbVar12 + cVar10;
    *unaff_RBX = *unaff_RBX + cVar10;
    *unaff_RDI = *unaff_RDI + cVar10;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)pbVar12 * 2);
    *pcVar1 = *pcVar1 + cVar10;
    pcVar1 = (char *)((longlong)pbVar12 * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar10;
    *in_RDX = *in_RDX + cVar14;
    uVar11 = *(int *)pbVar12 * 0x67006e;
    *(byte *)(ulonglong)uVar11 = *(byte *)(ulonglong)uVar11 & (byte)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar13);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar13);
    cVar10 = in(uVar13);
    *unaff_RDI = cVar10;
    *pbVar12 = *pbVar12 + bVar9;
    *pbVar12 = *pbVar12 + bVar9;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar3) {
    cVar10 = in(uVar13);
    *unaff_RDI = cVar10;
    out(*unaff_RSI,uVar13);
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  puVar15 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,uVar13);
  lVar6 = (longlong)*(int *)(longlong)((int)puVar15 + 0x65) * 0x756f535c;
  if ((int)lVar6 != lVar6) {
    *in_RDX = *in_RDX + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)(*unaff_retaddr + -8) = in_RDX;
  if ((byte)unaff_RBX == bVar3) {
    pbVar12 = (byte *)0x0;
  }
  else {
    *pbVar12 = *pbVar12 + bVar9;
  }
  cVar10 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cVar10;
  *pbVar12 = *pbVar12 + cVar10;
  pcVar1 = unaff_RBX + 0x6f;
  *pcVar1 = *pcVar1 + cVar10;
  if (*pcVar1 == '\0') {
    cVar10 = in(uVar13);
    *unaff_RDI = cVar10;
    unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
    cVar10 = in(uVar13);
    unaff_RDI[1] = cVar10;
    cVar10 = in(uVar13);
    unaff_RDI[2] = cVar10;
    out(*puVar15,uVar13);
    puVar15 = (undefined4 *)(unaff_RSI + 9);
    out(*(undefined4 *)(unaff_RSI + 5),uVar13);
  }
  out(*(undefined1 *)puVar15,uVar13);
  *(char *)((longlong)puVar15 + 1) = *(char *)((longlong)puVar15 + 1) + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// ~TValueOrError<FExpressionNode,FExpressionError> @ 1417a6ae0

void __thiscall
TValueOrError<FExpressionNode,FExpressionError>::~TValueOrError<FExpressionNode,FExpressionError>
          (TValueOrError<FExpressionNode,FExpressionError> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  bVar1 = (this->Variant).TypeIndex;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    if (*(longlong **)&this->Variant != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)&this->Variant + 0x10))();
      return;
    }
    return;
  case 2:
    return;
  }
  puVar4 = (undefined8 *)&(this->Variant).field_0x10;
  if (((*(int *)&(this->Variant).field_0xc == 0 && *(int *)&(this->Variant).field_0x8 == 0) &&
      *(int *)&(this->Variant).field_0x4 == 0) && *(int *)&this->Variant == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418beb42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,0);
    return;
  }
  return;
}

// TValueOrError<FExpressionNode,FExpressionError><FExpressionError_&> @ 1418a9710

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TValueOrError<FExpressionNode,FExpressionError>::
TValueOrError<FExpressionNode,FExpressionError><FExpressionError_&>
          (TValueOrError<FExpressionNode,FExpressionError> *this,
          TValueOrError_ErrorProxy<FExpressionError_&> *param_1)

{
  TTuple<FExpressionError_&> TVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  TVar1 = param_1->Args;
  *(undefined8 *)&this->Variant = 0;
  plVar2 = *(longlong **)TVar1;
  *(longlong **)&this->Variant = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res8);
  }
  *(undefined4 *)&(this->Variant).field_0x8 = *(undefined4 *)((longlong)TVar1 + 8);
  (this->Variant).TypeIndex = '\x01';
  return this;
}

// TValueOrError<FExpressionNode,FExpressionError> @ 1418ba480

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
TValueOrError<FExpressionNode,FExpressionError>::TValueOrError<FExpressionNode,FExpressionError>
          (TValueOrError<FExpressionNode,FExpressionError> *this,
          TValueOrError<FExpressionNode,FExpressionError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar4;
  
  bVar1 = (param_1->Variant).TypeIndex;
  (this->Variant).TypeIndex = bVar1;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// operator= @ 141d6d580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
* __thiscall
TValueOrError<`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestValue,`FTemplatesValueOrErrorTest::TestBody'::__l2::FTestError>
::operator=(void *this,
           TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
           *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
  *pTVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != this) {
    bVar1 = (param_1->Variant).TypeIndex;
    local_28._0_5_ = CONCAT14(bVar1,(undefined4)local_28);
    if (2 < (ulonglong)bVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
                  *)(*pcVar3)();
        return pTVar5;
      }
    }
    (*(code *)(&PTR_Construct_1507a3428)[bVar1])(&local_28,param_1);
    uVar2 = *(ulonglong *)this;
    uVar6 = uVar2 >> 0x20 & 0xff;
    *(ulonglong *)this = local_28;
    local_28 = uVar2;
    if (2 < uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TValueOrError<_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestValue,_protected:_void___cdecl_FTemplatesValueOrErrorTest::TestBody(FString_const_&)_::_2_::FTestError>
                  *)(*pcVar3)();
        return pTVar5;
      }
    }
    (*(code *)(&PTR_Destruct_1507a3040)[uVar6])(&local_28);
  }
  return this;
}

