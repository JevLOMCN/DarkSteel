// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 12

// FToolMenuVisibilityChoice @ 142c3a710

FToolMenuVisibilityChoice * __thiscall
FToolMenuVisibilityChoice::FToolMenuVisibilityChoice
          (FToolMenuVisibilityChoice *this,FToolMenuVisibilityChoice *param_1)

{
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
  ::
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
            (&this->Value,&param_1->Value);
  return this;
}

// FToolMenuVisibilityChoice @ 142c3a730

FToolMenuVisibilityChoice * __thiscall
FToolMenuVisibilityChoice::FToolMenuVisibilityChoice
          (FToolMenuVisibilityChoice *this,TAttribute<EVisibility> *param_1)

{
  void *pvVar1;
  
  *(undefined2 *)&(this->Value)._padding_ = 0x19;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value).TypeIndex = '\0';
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Value)._padding_);
  pvVar1 = (void *)(this->Value)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Value)._padding_);
  *(uchar *)&(this->Value)._padding_ = (param_1->Value).Value.Value;
  *(bool *)((longlong)&(this->Value)._padding_ + 1) = param_1->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(this->Value)._padding_,&param_1->Getter);
  (this->Value).TypeIndex = '\0';
  return this;
}

// FToolMenuVisibilityChoice @ 142c3a7c0

FToolMenuVisibilityChoice * __thiscall
FToolMenuVisibilityChoice::FToolMenuVisibilityChoice
          (FToolMenuVisibilityChoice *this,TAttribute<bool> *param_1)

{
  void *pvVar1;
  
  *(undefined2 *)&(this->Value)._padding_ = 0x19;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value).TypeIndex = '\0';
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Value)._padding_);
  pvVar1 = (void *)(this->Value)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Value)._padding_);
  *(bool *)&(this->Value)._padding_ = param_1->Value;
  *(bool *)((longlong)&(this->Value)._padding_ + 1) = param_1->bIsSet;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  *(undefined4 *)&(this->Value)._padding_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&(this->Value)._padding_,
             &param_1->Getter);
  (this->Value).TypeIndex = '\x01';
  return this;
}

// FToolMenuVisibilityChoice @ 142c3a860

FToolMenuVisibilityChoice * __thiscall
FToolMenuVisibilityChoice::FToolMenuVisibilityChoice
          (FToolMenuVisibilityChoice *this,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  void *pvVar1;
  
  *(undefined2 *)&(this->Value)._padding_ = 0x19;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value).TypeIndex = '\0';
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Value)._padding_);
  pvVar1 = (void *)(this->Value)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Value)._padding_);
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  *(undefined4 *)&(this->Value)._padding_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)this,param_1);
  (this->Value).TypeIndex = '\x02';
  return this;
}

// FToolMenuVisibilityChoice @ 142c3a8f0

FToolMenuVisibilityChoice * __thiscall
FToolMenuVisibilityChoice::FToolMenuVisibilityChoice(FToolMenuVisibilityChoice *this)

{
  *(undefined2 *)&(this->Value)._padding_ = 0x19;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value).TypeIndex = '\0';
  return this;
}

// ~FToolMenuVisibilityChoice @ 142c3c6c0

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
FToolMenuVisibilityChoice::~FToolMenuVisibilityChoice(FToolMenuVisibilityChoice *this)

{
  longlong *plVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
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
  
  bVar4 = (this->Value).TypeIndex;
  if (2 < (ulonglong)bVar4) {
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
  pbVar12 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar4];
  cVar14 = (char)((ulonglong)in_RDX >> 8);
  uVar13 = SUB82(in_RDX,0);
  cVar10 = (char)((ulonglong)pbVar12 >> 8);
  bVar9 = (byte)pbVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 0:
    plVar1 = &(this->Value)._padding_;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)plVar1);
    pvVar5 = (void *)(this->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)plVar1);
    return;
  case 1:
    plVar1 = &(this->Value)._padding_;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)plVar1);
    pvVar5 = (void *)(this->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)plVar1);
    return;
  case 2:
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
    pvVar5 = (void *)(this->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    return;
  case 3:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar13);
    pcVar2 = (char *)((longlong)pbVar12 * 2 + 0x61);
    *pcVar2 = *pcVar2 + cVar14;
    *(char *)&(this->Value)._padding_ = (char)(this->Value)._padding_ + (char)((ulonglong)this >> 8)
    ;
    out(unaff_RSI[1],uVar13);
    *unaff_RBP = *unaff_RBP + cVar10;
    *pbVar12 = *pbVar12 & bVar9;
    *pbVar12 = *pbVar12 + cVar10;
    *unaff_RBX = *unaff_RBX + cVar10;
    *unaff_RDI = *unaff_RDI + cVar10;
    pcVar2 = (char *)((longlong)&FiberData + (longlong)pbVar12 * 2);
    *pcVar2 = *pcVar2 + cVar10;
    pcVar2 = (char *)((longlong)pbVar12 * 2 + 0x75);
    *pcVar2 = *pcVar2 + cVar10;
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
    pbVar3 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar13);
    cVar10 = in(uVar13);
    *unaff_RDI = cVar10;
    *pbVar12 = *pbVar12 + bVar9;
    *pbVar12 = *pbVar12 + bVar9;
    *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar4) {
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
  if ((byte)unaff_RBX == bVar4) {
    pbVar12 = (byte *)0x0;
  }
  else {
    *pbVar12 = *pbVar12 + bVar9;
  }
  cVar10 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cVar10;
  *pbVar12 = *pbVar12 + cVar10;
  pcVar2 = unaff_RBX + 0x6f;
  *pcVar2 = *pcVar2 + cVar10;
  if (*pcVar2 == '\0') {
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

// operator= @ 142c3e8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolMenuVisibilityChoice * __thiscall
FToolMenuVisibilityChoice::operator=
          (FToolMenuVisibilityChoice *this,FToolMenuVisibilityChoice *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  FToolMenuVisibilityChoice *pFVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_1 != this) {
    bVar2 = (param_1->Value).TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar2);
    if (2 < (ulonglong)bVar2) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FToolMenuVisibilityChoice *)(*pcVar3)();
        return pFVar9;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[bVar2])(&local_48,param_1);
    lVar4 = (this->Value)._padding_;
    lVar5 = (this->Value)._padding_;
    lVar6 = (this->Value)._padding_;
    lVar7 = (this->Value)._padding_;
    uVar1 = *(ulonglong *)&(this->Value).TypeIndex;
    (this->Value)._padding_ = local_48;
    (this->Value)._padding_ = lStack_40;
    (this->Value)._padding_ = local_38;
    (this->Value)._padding_ = lStack_30;
    *(ulonglong *)&(this->Value).TypeIndex = local_28;
    local_48 = lVar4;
    lStack_40 = lVar5;
    local_38 = lVar6;
    lStack_30 = lVar7;
    local_28 = uVar1;
    if (2 < (uVar1 & 0xff)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FToolMenuVisibilityChoice *)(*pcVar3)();
        return pFVar9;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar1 & 0xff])(&local_48);
  }
  return this;
}

// operator= @ 142c3ea20

FToolMenuVisibilityChoice * __thiscall
FToolMenuVisibilityChoice::operator=
          (FToolMenuVisibilityChoice *this,TFunction<EVisibility___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  FToolMenuVisibilityChoice *pFVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  undefined2 local_40;
  undefined1 local_38 [24];
  FDestructionSentinel local_20;
  
  pTVar3 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateLambda<TFunction<EVisibility___cdecl(void)>_&>
                     ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,
                      param_1);
  local_40 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_20);
  if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  uVar6 = (ulonglong)(this->Value).TypeIndex;
  if (2 < uVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FToolMenuVisibilityChoice *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar6])(this);
  *(undefined1 *)&(this->Value)._padding_ = (undefined1)local_40;
  *(undefined1 *)((longlong)&(this->Value)._padding_ + 1) = local_40._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Value)._padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  (this->Value).TypeIndex = '\0';
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  if ((void *)local_38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// operator= @ 142c3eb90

FToolMenuVisibilityChoice * __thiscall
FToolMenuVisibilityChoice::operator=
          (FToolMenuVisibilityChoice *this,TFunction<bool___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  FToolMenuVisibilityChoice *pFVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  undefined2 local_40;
  undefined1 local_38 [24];
  FDestructionSentinel local_20;
  
  pTVar3 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateLambda<TFunction<bool___cdecl(void)>_&>
                     ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,param_1);
  local_40 = 0x100;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_20);
  if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  uVar6 = (ulonglong)(this->Value).TypeIndex;
  if (2 < uVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FToolMenuVisibilityChoice *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar6])(this);
  *(undefined1 *)&(this->Value)._padding_ = (undefined1)local_40;
  *(undefined1 *)((longlong)&(this->Value)._padding_ + 1) = local_40._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Value)._padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  (this->Value).TypeIndex = '\x01';
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  if ((void *)local_38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// Get @ 142c5d320

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall FToolMenuVisibilityChoice::Get(FToolMenuVisibilityChoice *this)

{
  uchar uVar1;
  EVisibility EVar2;
  bool bVar3;
  EVisibility *pEVar4;
  bool *pbVar5;
  TAttribute<EVisibility> *pTVar6;
  EVisibility EVar7;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  TAttribute<EVisibility> *pTVar8;
  
  uVar1 = (this->Value).TypeIndex;
  pTVar8 = (TAttribute<EVisibility> *)0x0;
  pTVar6 = (TAttribute<EVisibility> *)this;
  if (uVar1 != '\0') {
    pTVar6 = pTVar8;
  }
  EVar2.Value.Value = SUB81(in_RDX,0);
  if (pTVar6 != (TAttribute<EVisibility> *)0x0) {
    pEVar4 = TAttribute<EVisibility>::Get(pTVar6);
    in_RDX->Value = (pEVar4->Value).Value;
    return (EVisibility)EVar2.Value.Value;
  }
  pTVar6 = (TAttribute<EVisibility> *)this;
  if (uVar1 != '\x01') {
    pTVar6 = pTVar8;
  }
  if ((pTVar6 != (TAttribute<EVisibility> *)0x0) && (pTVar6->bIsSet != false)) {
    pbVar5 = TAttribute<bool>::Get((TAttribute<bool> *)pTVar6);
    EVar7 = EVisibility::Collapsed;
    if (*pbVar5 != false) {
      EVar7 = EVisibility::Visible;
    }
    in_RDX->Value = (uchar)EVar7.Value.Value;
    return (EVisibility)EVar2.Value.Value;
  }
  if (uVar1 != '\x02') {
    this = (FToolMenuVisibilityChoice *)pTVar8;
  }
  if ((TAttribute<EVisibility> *)this != (TAttribute<EVisibility> *)0x0) {
    bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
    if (bVar3) {
      bVar3 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                        ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)this);
      EVar7 = EVisibility::Collapsed;
      if (bVar3) {
        EVar7 = EVisibility::Visible;
      }
      in_RDX->Value = (uchar)EVar7.Value.Value;
      return (EVisibility)EVar2.Value.Value;
    }
  }
  in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
  return (EVisibility)EVar2.Value.Value;
}

// IsSet @ 142c63ba0

bool __thiscall FToolMenuVisibilityChoice::IsSet(FToolMenuVisibilityChoice *this)

{
  uchar uVar1;
  longlong *plVar2;
  char cVar3;
  FToolMenuVisibilityChoice *pFVar4;
  FToolMenuVisibilityChoice *pFVar5;
  FReadAccessScope FStack_28;
  
  uVar1 = (this->Value).TypeIndex;
  pFVar5 = (FToolMenuVisibilityChoice *)0x0;
  pFVar4 = this;
  if (uVar1 != '\0') {
    pFVar4 = pFVar5;
  }
  if (pFVar4 == (FToolMenuVisibilityChoice *)0x0) {
    pFVar4 = this;
    if (uVar1 != '\x01') {
      pFVar4 = pFVar5;
    }
    if (pFVar4 == (FToolMenuVisibilityChoice *)0x0) {
      if (uVar1 != '\x02') {
        this = pFVar5;
      }
      if (this == (FToolMenuVisibilityChoice *)0x0) {
        return false;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&FStack_28);
      if (((int)(this->Value)._padding_ != 0) &&
         (plVar2 = (longlong *)(this->Value)._padding_, plVar2 != (longlong *)0x0)) {
        cVar3 = (**(code **)(*plVar2 + 0x38))();
        if (cVar3 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&FStack_28);
          return true;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      return false;
    }
  }
  return (bool)*(undefined1 *)((longlong)&(pFVar4->Value)._padding_ + 1);
}

// ToVisibilityAttribute @ 142c72170

TAttribute<EVisibility> * __thiscall
FToolMenuVisibilityChoice::ToVisibilityAttribute
          (FToolMenuVisibilityChoice *this,TAttribute<EVisibility> *__return_storage_ptr__)

{
  uchar uVar1;
  void *pvVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar6;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  undefined1 local_30 [16];
  ForAnyElementType FStack_20;
  FDelegateAllocation *local_18;
  
  uVar1 = (this->Value).TypeIndex;
  pTVar7 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
  pTVar6 = (TDelegateBase<FNotThreadSafeDelegateMode> *)this;
  if (uVar1 != '\0') {
    pTVar6 = pTVar7;
  }
  if (pTVar6 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    pTVar6 = (TDelegateBase<FNotThreadSafeDelegateMode> *)this;
    if (uVar1 != '\x01') {
      pTVar6 = pTVar7;
    }
    if (pTVar6 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      if (uVar1 != '\x02') {
        this = (FToolMenuVisibilityChoice *)pTVar7;
      }
      if (((TDelegateBase<FNotThreadSafeDelegateMode> *)this !=
           (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this), bVar3)) {
        local_50.AccessType = Reader;
        local_50._4_4_ = 0;
        local_50.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
        local_50._16_4_ = 0;
        TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_50,
                   (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)this);
        local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_60.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_68,(FWriteAccessScope *)local_30);
        local_18 = &local_60;
        puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`FToolMenuVisibilityChoice::ToVisibilityAttribute'::`14'::<lambda_2>_>
                     ::_vftable_;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 3),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50);
        }
        if (FStack_20.Data._0_1_ == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_30._8_8_,(FDestructionSentinel *)local_30
                    );
        }
        __return_storage_ptr__->Value = (TEnumAsByte<EVisibility::Private>)0x19;
        __return_storage_ptr__->bIsSet = true;
        *(undefined8 *)&__return_storage_ptr__->Getter = 0;
        *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
        *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_68,(FWriteAccessScope *)local_30);
        pvVar2 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)&(__return_storage_ptr__->Getter).field_0x8 =
             local_60.DelegateAllocator;
        *(int *)&(__return_storage_ptr__->Getter).field_0x10 = local_60.DelegateSize;
        local_60.DelegateSize = 0;
        local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        if (FStack_20.Data._0_1_ == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_30._8_8_,(FDestructionSentinel *)local_30
                    );
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_68,(FWriteAccessScope *)local_30);
        if ((local_60.DelegateSize != 0) &&
           (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_60,0,0,0x10);
          local_60.DelegateSize = 0;
        }
        if (FStack_20.Data._0_1_ == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_30._8_8_,(FDestructionSentinel *)local_30
                    );
        }
        if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_60.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_50,
                   (FWriteAccessScope *)local_30);
        if ((local_50._16_4_ != 0) && (local_50.Accessor != (FMRSWRecursiveAccessDetector *)0x0)) {
          (**(code **)(local_50.Accessor)->State)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_50.Accessor,0,0,0x10);
          local_50._16_4_ = 0;
        }
        if (FStack_20.Data._0_1_ == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_30._8_8_,(FDestructionSentinel *)local_30
                    );
        }
        if (local_50.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
          FMemory::Free(local_50.Accessor);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&local_50);
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->Value = (TEnumAsByte<EVisibility::Private>)0x19;
      __return_storage_ptr__->bIsSet = false;
      *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->Getter = 0;
      *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
    }
    else {
      local_30[0] = *(undefined1 *)pTVar6;
      local_30[1] = pTVar6->field_0x1;
      local_30._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      local_18 = (FDelegateAllocation *)((ulonglong)local_18 & 0xffffffff00000000);
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(local_30 + 8),
                 (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar6->field_0x8);
      local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`FToolMenuVisibilityChoice::ToVisibilityAttribute'::`8'::<lambda_1>_>
                   ::_vftable_;
        *(undefined1 *)(puVar4 + 3) = local_30[0];
        *(undefined1 *)((longlong)puVar4 + 0x19) = local_30[1];
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 4),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_30 + 8));
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      __return_storage_ptr__->Value = (TEnumAsByte<EVisibility::Private>)0x19;
      __return_storage_ptr__->bIsSet = true;
      *(undefined8 *)&__return_storage_ptr__->Getter = 0;
      *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      pvVar2 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      *(ForElementType<TAlignedBytes<16,16>_> *)&(__return_storage_ptr__->Getter).field_0x8 =
           local_60.DelegateAllocator;
      *(int *)&(__return_storage_ptr__->Getter).field_0x10 = local_60.DelegateSize;
      local_60.DelegateSize = 0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_30 + 8),
                 (FWriteAccessScope *)&local_50);
      if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        local_18 = (FDelegateAllocation *)((ulonglong)local_18 & 0xffffffff00000000);
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(local_30 + 8));
    }
  }
  else {
    (__return_storage_ptr__->Value).Value.Value = *(uchar *)pTVar6;
    __return_storage_ptr__->bIsSet = (bool)pTVar6->field_0x1;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
              (&__return_storage_ptr__->Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar6->field_0x8
              );
  }
  return __return_storage_ptr__;
}

