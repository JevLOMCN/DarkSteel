// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// Get<Optimus::Expression::FExpressionObject> @ 14e136050

FExpressionObject * __thiscall
TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::
Get<Optimus::Expression::FExpressionObject>
          (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *this)

{
  code *pcVar1;
  bool bVar2;
  FExpressionObject *pFVar3;
  
  if (this->TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FExpressionObject *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FExpressionObject *)this;
}

// TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float> @ 14e14d530

TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
* __thiscall
TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
::
TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
          (void *this,
          TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
          *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  *(byte *)((longlong)this + 8) = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// ~TVariant<UOptimusKernelSource_*,FText> @ 14e160fb0

void __thiscall
TVariant<UOptimusKernelSource_*,FText>::~TVariant<UOptimusKernelSource_*,FText>
          (TVariant<UOptimusKernelSource_*,FText> *this)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
  *pTVar4;
  code *pcVar5;
  undefined3 uVar6;
  uchar uVar7;
  undefined3 uVar8;
  bool bVar9;
  FLowLevelMemTracker *this_00;
  void *pvVar10;
  char *in_RDX;
  
  bVar2 = this->TypeIndex;
  if (1 < bVar2) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  default:
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f7951b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
      return;
    }
    return;
  case 2:
    this[4]._padding_ = 0;
    pTVar4 = *(TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
               **)((longlong)in_RDX + 0x60);
    iVar3 = *(int *)&((TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                       *)((longlong)in_RDX + 0x60))->TypeIndex;
    *(int *)&this[4]._padding_ = iVar3;
    if (pTVar4 != (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                   *)0x0) {
      in_RDX = (char *)pTVar4;
    }
    piVar1 = (int *)((longlong)&this[4]._padding_ + 4);
    if (iVar3 == 0) {
      *piVar1 = 8;
      return;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
              (0xc,4,iVar3,0,
               (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                *)this,iVar3,piVar1);
    if ((TVariant<UOptimusKernelSource_*,FText> *)this[4]._padding_ !=
        (TVariant<UOptimusKernelSource_*,FText> *)0x0) {
      this = (TVariant<UOptimusKernelSource_*,FText> *)this[4]._padding_;
    }
    ConstructItems<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,int>
              (this,(TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                     *)in_RDX,iVar3);
    return;
  case 3:
    ::FString::FString((FString *)this,(FString *)in_RDX);
    uVar6 = *(undefined3 *)
             &((TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                *)((longlong)in_RDX + 0xc))->field_0x5;
    uVar7 = ((TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
              *)((longlong)in_RDX + 0xc))->TypeIndex;
    uVar8 = *(undefined3 *)
             &((TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                *)((longlong)in_RDX + 0xc))->field_0x9;
    this->TypeIndex =
         ((TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
           *)((longlong)in_RDX + 0xc))->field_0x4;
    *(undefined3 *)&this->field_0x11 = uVar6;
    this->field_0x14 = uVar7;
    *(undefined3 *)&this->field_0x15 = uVar8;
    return;
  case 4:
    pvVar10 = (void *)this[4]._padding_;
    if (pvVar10 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    pvVar10 = (void *)this->_padding_;
    if (pvVar10 == (void *)0x0) {
      return;
    }
    break;
  case 6:
    pvVar10 = (void *)this->_padding_;
    if (pvVar10 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    return;
  case 8:
    return;
  }
  if (pvVar10 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar10,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar10);
  }
  return;
}

// operator= @ 14e1653a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> * __thiscall
TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::operator=
          (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *this,
          TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *param_1
          )

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *pTVar19;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_1 != this) {
    bVar2 = param_1->TypeIndex;
    local_68 = CONCAT71(local_68._1_7_,bVar2);
    if (1 < (ulonglong)bVar2) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x105,L"");
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar3)();
        return pTVar19;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar2])(&local_d8,param_1);
    lVar4 = this->_padding_;
    lVar5 = this->_padding_;
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    lVar9 = this->_padding_;
    lVar10 = this->_padding_;
    lVar11 = this->_padding_;
    lVar12 = this->_padding_;
    lVar13 = this->_padding_;
    lVar14 = this->_padding_;
    lVar15 = this->_padding_;
    lVar16 = this->_padding_;
    lVar17 = this->_padding_;
    uVar1 = *(ulonglong *)&this->TypeIndex;
    this->_padding_ = local_d8;
    this->_padding_ = lStack_d0;
    this->_padding_ = local_c8;
    this->_padding_ = lStack_c0;
    this->_padding_ = local_b8;
    this->_padding_ = lStack_b0;
    this->_padding_ = local_a8;
    this->_padding_ = lStack_a0;
    this->_padding_ = local_98;
    this->_padding_ = lStack_90;
    this->_padding_ = local_88;
    this->_padding_ = lStack_80;
    this->_padding_ = local_78;
    this->_padding_ = lStack_70;
    *(ulonglong *)&this->TypeIndex = local_68;
    local_d8 = lVar4;
    lStack_d0 = lVar5;
    local_c8 = lVar6;
    lStack_c0 = lVar7;
    local_b8 = lVar8;
    lStack_b0 = lVar9;
    local_a8 = lVar10;
    lStack_a0 = lVar11;
    local_98 = lVar12;
    lStack_90 = lVar13;
    local_88 = lVar14;
    lStack_80 = lVar15;
    local_78 = lVar16;
    lStack_70 = lVar17;
    local_68 = uVar1;
    if (1 < (uVar1 & 0xff)) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                   *)(*pcVar3)();
        return pTVar19;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar1 & 0xff])(&local_d8);
  }
  return this;
}

