// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// UEdGraphNode @ 147b3aea0

UEdGraphNode * __thiscall UEdGraphNode::UEdGraphNode(UEdGraphNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEdGraphNode__6B_;
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  (this->DeprecatedPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeprecatedPins).ArrayNum = 0;
  (this->DeprecatedPins).ArrayMax = 0;
  (this->NodeComment).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeComment).Data.ArrayNum = 0;
  (this->NodeComment).Data.ArrayMax = 0;
  (this->ErrorMsg).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorMsg).Data.ArrayNum = 0;
  (this->ErrorMsg).Data.ArrayMax = 0;
  (this->NodeGuid).A = 0;
  (this->NodeGuid).B = 0;
  (this->NodeGuid).C = 0;
  (this->NodeGuid).D = 0;
  return this;
}

// UEdGraphNode @ 147b3af00

UEdGraphNode * __thiscall UEdGraphNode::UEdGraphNode(UEdGraphNode *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEdGraphNode__6B_;
  this->bUserSetEnabledState = '\0';
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  (this->DeprecatedPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeprecatedPins).ArrayNum = 0;
  (this->DeprecatedPins).ArrayMax = 0;
  this->AdvancedPinDisplay = '\0';
  this->EnabledState = Enabled;
  (this->NodeComment).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeComment).Data.ArrayNum = 0;
  (this->NodeComment).Data.ArrayMax = 0;
  (this->ErrorMsg).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorMsg).Data.ArrayNum = 0;
  (this->ErrorMsg).Data.ArrayMax = 0;
  (this->NodeGuid).A = 0;
  (this->NodeGuid).B = 0;
  (this->NodeGuid).C = 0;
  (this->NodeGuid).D = 0;
  return this;
}

// ~UEdGraphNode @ 147b3d660

void __thiscall UEdGraphNode::~UEdGraphNode(UEdGraphNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEdGraphNode__6B_;
  pFVar1 = (this->ErrorMsg).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NodeComment).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeprecatedPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetCanRenameNode @ 147b64360

bool __thiscall UEdGraphNode::GetCanRenameNode(UEdGraphNode *this)

{
  return false;
}

// GetPrivateStaticClass @ 147b6bd90

UClass * __cdecl UEdGraphNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdGraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EdGraphNode",
               &Z_Registration_Info_UClass_UEdGraphNode.InnerSingleton,
               StaticRegisterNativesUEdGraphNode,0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEdGraphNode>,InternalVTableHelperCtorCaller<UEdGraphNode>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdGraphNode.InnerSingleton;
}

// IsAutomaticallyPlacedGhostNode @ 147b77e80

bool __thiscall UEdGraphNode::IsAutomaticallyPlacedGhostNode(UEdGraphNode *this)

{
  if ((this->bUserSetEnabledState == '\0') && (this->EnabledState == Disabled)) {
    return true;
  }
  return false;
}

// IsInDevelopmentMode @ 147b78250

bool __thiscall UEdGraphNode::IsInDevelopmentMode(UEdGraphNode *this)

{
  return false;
}

// MakeAutomaticallyPlacedGhostNode @ 147b78bd0

void __thiscall UEdGraphNode::MakeAutomaticallyPlacedGhostNode(UEdGraphNode *this)

{
  FText *this_00;
  FString *pFVar1;
  FText local_18;
  
  this->EnabledState = Disabled;
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"EdGraph",L"DisabledNodeComment",
                       L"This node is disabled and will not be called.\nDrag off pins to build functionality."
                      );
  pFVar1 = FText::ToString(this_00);
  ::FString::operator=(&this->NodeComment,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  this->bUserSetEnabledState = '\0';
  return;
}

// Serialize @ 147b88ff0

void __thiscall UEdGraphNode::Serialize(UEdGraphNode *this,FArchive *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FString local_28;
  undefined8 local_18 [2];
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (((GEdGraphStripNodeComment != 0) && (*(longlong *)&param_1->field_0x68 != 0)) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    iVar4 = (this->NodeComment).Data.ArrayNum;
    pFVar1 = &this->NodeComment;
    iVar3 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange
              (&local_28,(wchar_t *)(this->NodeComment).Data.AllocatorInstance.Data,iVar3);
    if (pFVar1 != (FString *)local_18) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->NodeComment).Data.ArrayNum = 0;
      (this->NodeComment).Data.ArrayMax = 0;
    }
  }
  UObject::Serialize((UObject *)this,param_1);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    ::FString::AssignRange(&this->NodeComment,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4)
    ;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 147b890d0

void __thiscall UEdGraphNode::Serialize(UEdGraphNode *this,FStructuredArchiveRecord param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  int iVar5;
  FSlotBase local_res10;
  FString local_28;
  undefined8 local_18 [2];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (((GEdGraphStripNodeComment != 0) && (*(longlong *)&pFVar3->field_0x68 != 0)) &&
     (*(longlong *)(*(longlong *)&pFVar3->field_0x68 + 0x10) != 0)) {
    iVar5 = (this->NodeComment).Data.ArrayNum;
    pFVar1 = &this->NodeComment;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange
              (&local_28,(wchar_t *)(this->NodeComment).Data.AllocatorInstance.Data,iVar4);
    if (pFVar1 != (FString *)local_18) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->NodeComment).Data.ArrayNum = 0;
      (this->NodeComment).Data.ArrayMax = 0;
    }
  }
  UObject::Serialize((UObject *)this,pFVar3);
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    ::FString::AssignRange(&this->NodeComment,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5)
    ;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUEdGraphNode @ 147b8ebf0

void __cdecl UEdGraphNode::StaticRegisterNativesUEdGraphNode(void)

{
  return;
}

