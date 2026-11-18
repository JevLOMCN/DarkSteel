// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticClass @ 14e11a9b0

UClass * __cdecl UOptimusNode_Comment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_Comment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_Comment",
               &Z_Registration_Info_UClass_UOptimusNode_Comment.InnerSingleton,
               StaticRegisterNativesUOptimusNode_Comment,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNode_Comment>,
               InternalVTableHelperCtorCaller<UOptimusNode_Comment>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_Comment.InnerSingleton;
}

// UOptimusNode_Comment @ 14e15b060

UOptimusNode_Comment * __thiscall
UOptimusNode_Comment::UOptimusNode_Comment(UOptimusNode_Comment *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusNode_Comment__6B_;
  FVar1 = FLinearColor::White;
  this->FontSize = 0x12;
  (this->CommentColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ::FString::FString(&this->Comment,L"Comment");
  this->bBubbleVisible = false;
  this->bColorBubble = false;
  this->Size = (FDeprecateSlateVector2D)0x42c8000043c80000;
  *(undefined8 *)&this->OnPropertyChangedDelegate = 0;
  *(undefined8 *)&(this->OnPropertyChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPropertyChangedDelegate).field_0x10 = 0;
  return this;
}

// UOptimusNode_Comment @ 14e15b0f0

UOptimusNode_Comment * __thiscall
UOptimusNode_Comment::UOptimusNode_Comment(UOptimusNode_Comment *this)

{
  FLinearColor FVar1;
  
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  this->_padding_ = (longlong)&___7UOptimusNode_Comment__6B_;
  FVar1 = FLinearColor::White;
  this->FontSize = 0x12;
  (this->CommentColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  ::FString::FString(&this->Comment,L"Comment");
  this->bBubbleVisible = false;
  this->bColorBubble = false;
  this->Size = (FDeprecateSlateVector2D)0x42c8000043c80000;
  *(undefined8 *)&this->OnPropertyChangedDelegate = 0;
  *(undefined8 *)&(this->OnPropertyChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPropertyChangedDelegate).field_0x10 = 0;
  return this;
}

// ~UOptimusNode_Comment @ 14e1632f0

void __thiscall UOptimusNode_Comment::~UOptimusNode_Comment(UOptimusNode_Comment *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusNode_Comment__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPropertyChangedDelegate);
  pFVar1 = (this->Comment).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// GetNodeCategory @ 14e1caca0

FName __thiscall UOptimusNode_Comment::GetNodeCategory(UOptimusNode_Comment *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPrivateStaticClass @ 14e1d72e0

UClass * __cdecl UOptimusNode_Comment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_Comment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_Comment",
               &Z_Registration_Info_UClass_UOptimusNode_Comment.InnerSingleton,
               StaticRegisterNativesUOptimusNode_Comment,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNode_Comment>,
               InternalVTableHelperCtorCaller<UOptimusNode_Comment>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_Comment.InnerSingleton;
}

// SetComment @ 14e21bf30

void __thiscall UOptimusNode_Comment::SetComment(UOptimusNode_Comment *this,FString *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FReadAccessScope local_28;
  
  iVar4 = (this->Comment).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar4 == iVar1) {
    if (iVar4 < 2) goto LAB_14e21bfce;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Comment).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar4 + iVar1 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->Comment,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPropertyChangedDelegate,&local_28);
    if ((*(int *)&(this->OnPropertyChangedDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnPropertyChangedDelegate).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return;
  }
LAB_14e21bfce:
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3245312868366680020>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode_Comment.cpp"
                     ,0x2c,"Comment != InNewComment");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// SetSize @ 14e222750

bool __thiscall
UOptimusNode_Comment::SetSize(UOptimusNode_Comment *this,FDeprecateVector2DParameter *param_1)

{
  bool bVar1;
  UOptimusActionStack *this_00;
  TSharedRef<FOptimusCommentNodeAction_ResizeNode,1> *pTVar2;
  UOptimusNode_Comment *local_res8;
  TSharedPtr<FOptimusAction,1> local_38;
  TVector2<double>_u_0 local_28;
  TSharedRef<FOptimusCommentNodeAction_ResizeNode,1> local_18;
  
  this_00 = UOptimusNode::GetActionStack((UOptimusNode *)this);
  local_28._s_0.X = (double)SUB84(*param_1,0);
  local_28._s_0.Y = (double)SUB84(*param_1,4);
  local_res8 = this;
  pTVar2 = MakeShared<FOptimusCommentNodeAction_ResizeNode,1,UOptimusNode_Comment_*,UE::Math::TVector2<double>_>
                     (&local_18,&local_res8,(TVector2<double> *)&local_28._s_0);
  local_38.Object = (FOptimusAction *)pTVar2->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = UOptimusActionStack::RunAction(this_00,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// SetSizeDirect @ 14e2227e0

bool __thiscall
UOptimusNode_Comment::SetSizeDirect(UOptimusNode_Comment *this,TVector2<float> *param_1)

{
  float fVar1;
  longlong *plVar2;
  int iVar3;
  FReadAccessScope local_28;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((fVar1 != *(float *)&this->Size) ||
       ((param_1->field0_0x0)._s_0.Y != *(float *)&(this->Size).field_0x4)) &&
      (iVar3 = _finite((double)fVar1), iVar3 != 0)) &&
     (iVar3 = _finite((double)(param_1->field0_0x0)._s_0.Y), iVar3 != 0)) {
    *(float *)&this->Size = (param_1->field0_0x0)._s_0.X;
    *(float *)&(this->Size).field_0x4 = (param_1->field0_0x0)._s_0.Y;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPropertyChangedDelegate,&local_28);
    if ((*(int *)&(this->OnPropertyChangedDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnPropertyChangedDelegate).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return true;
  }
  return false;
}

// StaticRegisterNativesUOptimusNode_Comment @ 14e225c30

void __cdecl UOptimusNode_Comment::StaticRegisterNativesUOptimusNode_Comment(void)

{
  return;
}

