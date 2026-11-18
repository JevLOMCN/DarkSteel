// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 109

// StaticClass @ 147b2c800

UClass * __cdecl UEdGraphSchema::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdGraphSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EdGraphSchema",
               &Z_Registration_Info_UClass_UEdGraphSchema.InnerSingleton,
               StaticRegisterNativesUEdGraphSchema,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEdGraphSchema>,
               InternalVTableHelperCtorCaller<UEdGraphSchema>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdGraphSchema.InnerSingleton;
}

// UEdGraphSchema @ 147b3b2b0

UEdGraphSchema * __thiscall
UEdGraphSchema::UEdGraphSchema(UEdGraphSchema *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEdGraphSchema__6B_;
  return this;
}

// UEdGraphSchema @ 147b3b2e0

UEdGraphSchema * __thiscall
UEdGraphSchema::UEdGraphSchema(UEdGraphSchema *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEdGraphSchema__6B_;
  return this;
}

// ~UEdGraphSchema @ 147b3d870

void __thiscall UEdGraphSchema::~UEdGraphSchema(UEdGraphSchema *this)

{
  *(undefined ***)this = &___7UEdGraphSchema__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AllowsFunctionVariants @ 147b44f50

bool __thiscall UEdGraphSchema::AllowsFunctionVariants(UEdGraphSchema *this)

{
  return false;
}

// ArePinTypesEquivalent @ 147b46d60

bool __thiscall
UEdGraphSchema::ArePinTypesEquivalent
          (UEdGraphSchema *this,FEdGraphPinType *param_1,FEdGraphPinType *param_2)

{
  return true;
}

// ArePinsCompatible @ 147b46d70

bool __thiscall
UEdGraphSchema::ArePinsCompatible
          (UEdGraphSchema *this,UEdGraphPin *param_1,UEdGraphPin *param_2,UClass *param_3,
          bool param_4)

{
  return true;
}

// BackwardCompatibilityNodeConversion @ 147b482d0

void __thiscall
UEdGraphSchema::BackwardCompatibilityNodeConversion
          (UEdGraphSchema *this,UEdGraph *param_1,bool param_2)

{
  return;
}

// BeginGraphDragAction @ 147b486e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UEdGraphSchema::BeginGraphDragAction
          (UEdGraphSchema *this,FReply *__return_storage_ptr__,
          TSharedPtr<FEdGraphSchemaAction,1> *param_1)

{
  FReply::FReply(__return_storage_ptr__,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// BeginGraphDragAction @ 147b48720

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UEdGraphSchema::BeginGraphDragAction
          (UEdGraphSchema *this,FReply *__return_storage_ptr__,
          TSharedPtr<FEdGraphSchemaAction,1> *param_1,FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// BreakNodeLinks @ 147b489b0

void __thiscall UEdGraphSchema::BreakNodeLinks(UEdGraphSchema *this,UEdGraphNode *param_1)

{
  return;
}

// BreakPinLinks @ 147b489c0

void __thiscall
UEdGraphSchema::BreakPinLinks(UEdGraphSchema *this,UEdGraphPin *param_1,bool param_2)

{
  UEdGraphPin::BreakAllPinLinks(param_1,false,true);
  return;
}

// BreakSinglePinLink @ 147b489e0

void __thiscall
UEdGraphSchema::BreakSinglePinLink(UEdGraphSchema *this,UEdGraphPin *param_1,UEdGraphPin *param_2)

{
  UEdGraphPin::BreakLinkTo(param_1,param_2,true);
  return;
}

// CanCreateConnection @ 147b49f00

FPinConnectionResponse * __thiscall
UEdGraphSchema::CanCreateConnection
          (UEdGraphSchema *this,FPinConnectionResponse *__return_storage_ptr__,UEdGraphPin *param_1,
          UEdGraphPin *param_2)

{
  FText::FromString(&__return_storage_ptr__->Message,L"Not implemented by this schema");
  __return_storage_ptr__->bIsFatal = false;
  (__return_storage_ptr__->Response).Value = '\x01';
  return __return_storage_ptr__;
}

// CanCreateNewNodes @ 147b49f30

FPinConnectionResponse * __thiscall
UEdGraphSchema::CanCreateNewNodes
          (UEdGraphSchema *this,FPinConnectionResponse *__return_storage_ptr__,UEdGraphPin *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->Message).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->Message).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  (__return_storage_ptr__->Message).Flags = pFVar2->Flags;
  __return_storage_ptr__->bIsFatal = false;
  (__return_storage_ptr__->Response).Value = '\0';
  return __return_storage_ptr__;
}

// CanDuplicateGraph @ 147b4a3c0

bool __thiscall UEdGraphSchema::CanDuplicateGraph(UEdGraphSchema *this,UEdGraph *param_1)

{
  return true;
}

// CanEncapuslateNode @ 147b4a670

bool __thiscall UEdGraphSchema::CanEncapuslateNode(UEdGraphSchema *this,UEdGraphNode *param_1)

{
  return true;
}

// CanGraphBeDropped @ 147b4a680

bool __thiscall
UEdGraphSchema::CanGraphBeDropped(UEdGraphSchema *this,TSharedPtr<FEdGraphSchemaAction,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// CanMergeNodes @ 147b4a6a0

FPinConnectionResponse * __thiscall
UEdGraphSchema::CanMergeNodes
          (UEdGraphSchema *this,FPinConnectionResponse *__return_storage_ptr__,UEdGraphNode *param_1
          ,UEdGraphNode *param_2)

{
  FText::FromString(&__return_storage_ptr__->Message,L"Not implemented by this schema");
  __return_storage_ptr__->bIsFatal = false;
  (__return_storage_ptr__->Response).Value = '\x01';
  return __return_storage_ptr__;
}

// CanRelinkConnectionToPin @ 147b4ac20

FPinConnectionResponse * __thiscall
UEdGraphSchema::CanRelinkConnectionToPin
          (UEdGraphSchema *this,FPinConnectionResponse *__return_storage_ptr__,UEdGraphPin *param_1,
          UEdGraphPin *param_2)

{
  FText::FromString(&__return_storage_ptr__->Message,L"Not implemented by this schema");
  __return_storage_ptr__->bIsFatal = false;
  (__return_storage_ptr__->Response).Value = '\x01';
  return __return_storage_ptr__;
}

// CanShowDataTooltipForPin @ 147b4ae90

bool __thiscall UEdGraphSchema::CanShowDataTooltipForPin(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return false;
}

// CanVariableBeDropped @ 147b4aea0

bool __thiscall
UEdGraphSchema::CanVariableBeDropped(UEdGraphSchema *this,UEdGraph *param_1,FProperty *param_2)

{
  return false;
}

// ClearPinWatch @ 147b4b8e0

void __thiscall UEdGraphSchema::ClearPinWatch(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return;
}

// ConstructBasicPinTooltip @ 147b4cb30

void __thiscall
UEdGraphSchema::ConstructBasicPinTooltip
          (UEdGraphSchema *this,UEdGraphPin *param_1,FText *param_2,FString *param_3)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_2);
  ::FString::operator=(param_3,pFVar1);
  return;
}

// CopyPinLinks @ 147b4d480

FPinConnectionResponse * __thiscall
UEdGraphSchema::CopyPinLinks
          (UEdGraphSchema *this,FPinConnectionResponse *__return_storage_ptr__,UEdGraphPin *param_1,
          UEdGraphPin *param_2,bool param_3)

{
  int iVar1;
  ITextData *pIVar2;
  UEdGraphPin *pUVar3;
  UObject *pUVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FText *pFVar9;
  FPinConnectionResponse *pFVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FText local_68;
  TRefCountPtr<ITextData> local_58;
  uint local_50;
  uchar local_48;
  byte bStack_47;
  
  pFVar9 = FText::FText(&local_68);
  FText::FText(&__return_storage_ptr__->Message,pFVar9);
  (__return_storage_ptr__->Response).Value = '\0';
  __return_storage_ptr__->bIsFatal = false;
  pIVar2 = (pFVar9->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  uVar11 = 0;
  if (0 < (param_1->LinkedTo).ArrayNum) {
    lVar13 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (param_1->LinkedTo).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FPinConnectionResponse *)(*pcVar6)();
        return pFVar10;
      }
      pUVar3 = *(UEdGraphPin **)((param_1->LinkedTo).AllocatorInstance.Data + lVar13);
      (**(code **)(*(longlong *)this + 0x2c8))(this,&local_58,param_2,pUVar3);
      if ((local_48 == '\0') || (local_48 == '\x06')) {
        UEdGraphPin::MakeLinkTo(param_2,pUVar3,true);
      }
      else {
        pIVar2 = (__return_storage_ptr__->Message).TextData.Reference;
        if (pIVar2 != local_58.Reference) {
          (__return_storage_ptr__->Message).TextData.Reference = local_58.Reference;
          if (local_58.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.Reference + 8))(local_58.Reference,local_res10);
          }
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          }
        }
        (__return_storage_ptr__->Message).Flags = local_50;
        __return_storage_ptr__->bIsFatal = false;
        __return_storage_ptr__->field_0x11 = __return_storage_ptr__->field_0x11 | bStack_47 & 1;
        (__return_storage_ptr__->Response).Value = local_48;
      }
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar11 < (param_1->LinkedTo).ArrayNum);
  }
  iVar1 = (param_1->DefaultValue).Data.ArrayNum;
  iVar12 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar12 = 0;
  }
  ::FString::AssignRange
            (&param_2->DefaultValue,(wchar_t *)(param_1->DefaultValue).Data.AllocatorInstance.Data,
             iVar12);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->DefaultObject).field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  (param_2->DefaultObject).field0_0x0 = (param_1->DefaultObject).field0_0x0;
  pIVar2 = (param_1->DefaultTextValue).TextData.Reference;
  pIVar5 = (param_2->DefaultTextValue).TextData.Reference;
  if (pIVar5 != pIVar2) {
    (param_2->DefaultTextValue).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (param_2->DefaultTextValue).Flags = (param_1->DefaultTextValue).Flags;
  return __return_storage_ptr__;
}

// CreateAutomaticConversionNodeAndConnections @ 147b4dc60

bool __thiscall
UEdGraphSchema::CreateAutomaticConversionNodeAndConnections
          (UEdGraphSchema *this,UEdGraphPin *param_1,UEdGraphPin *param_2)

{
  return false;
}

// CreateConnectionDrawingPolicy @ 147b4dde0

/* WARNING: Enum "Type": Some values do not have unique names */

FConnectionDrawingPolicy * __thiscall
UEdGraphSchema::CreateConnectionDrawingPolicy
          (UEdGraphSchema *this,int param_1,int param_2,float param_3,FSlateRect *param_4,
          FSlateWindowElementList *param_5,UEdGraph *param_6)

{
  return (FConnectionDrawingPolicy *)0x0;
}

// CreateDefaultNodesForGraph @ 147b4df80

void __thiscall UEdGraphSchema::CreateDefaultNodesForGraph(UEdGraphSchema *this,UEdGraph *param_1)

{
  return;
}

// CreatePromotedConnection @ 147b4f0f0

bool __thiscall
UEdGraphSchema::CreatePromotedConnection
          (UEdGraphSchema *this,UEdGraphPin *param_1,UEdGraphPin *param_2)

{
  return false;
}

// CreateSubstituteNode @ 147b4f3d0

UEdGraphNode * __thiscall
UEdGraphSchema::CreateSubstituteNode
          (UEdGraphSchema *this,UEdGraphNode *param_1,UEdGraph *param_2,
          FObjectInstancingGraph *param_3,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_4)

{
  return (UEdGraphNode *)0x0;
}

// DoesDefaultValueMatch @ 147b51750

bool __thiscall
UEdGraphSchema::DoesDefaultValueMatch(UEdGraphSchema *this,UEdGraphPin *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  FString local_38;
  FString local_28;
  FText local_18;
  
  if ((param_2->Data).ArrayNum < 2) {
    if ((((param_1->DefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) &&
        (bVar1 = FText::IsEmpty(&param_1->DefaultTextValue), bVar1)) &&
       ((param_1->DefaultValue).Data.ArrayNum < 2)) {
      return true;
    }
    return false;
  }
  FText::FText(&local_18);
  bVar1 = FText::IsEmpty(&param_1->DefaultTextValue);
  if (!bVar1) {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pwVar3 = FTextStringHelper::ReadFromBuffer(pwVar3,&local_18,(wchar_t *)0x0,(wchar_t *)0x0,false)
    ;
    if (pwVar3 != (wchar_t *)0x0) {
      bVar1 = FTextProperty::Identical_Implementation(&local_18,&param_1->DefaultTextValue,0);
      goto LAB_147b5191d;
    }
  }
  if ((param_1->DefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    bVar1 = FText::IsEmpty(&param_1->DefaultTextValue);
    if (bVar1) {
      local_38.Data.ArrayNum = (param_1->DefaultValue).Data.ArrayNum;
      lVar4 = (longlong)local_38.Data.ArrayNum;
      _Src = (param_1->DefaultValue).Data.AllocatorInstance.Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_38.Data.ArrayNum == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                   local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
      }
    }
    else {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FTextStringHelper::WriteToBuffer(&local_28,&param_1->DefaultTextValue,false,false);
      local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      local_38.Data.ArrayNum = local_28.Data.ArrayNum;
      local_38.Data.ArrayMax = local_28.Data.ArrayMax;
    }
  }
  else {
    FObjectPtr::GetPathName((FObjectPtr *)&param_1->DefaultObject,&local_38);
  }
  iVar2 = (param_2->Data).ArrayNum;
  if (local_38.Data.ArrayNum == iVar2) {
    if (local_38.Data.ArrayNum < 2) {
      bVar1 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = local_38.Data.ArrayNum + iVar2 == 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_147b5191d:
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return bVar1;
}

// DoesDefaultValueMatchAutogenerated @ 147b51960

bool __thiscall
UEdGraphSchema::DoesDefaultValueMatchAutogenerated(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  bool bVar1;
  
  bVar1 = DoesDefaultValueMatch(this,param_1,&param_1->AutogeneratedDefaultValue);
  return bVar1;
}

// DoesSupportPinWatching @ 147b51980

bool __thiscall UEdGraphSchema::DoesSupportPinWatching(UEdGraphSchema *this)

{
  return false;
}

// DropPinOnNode @ 147b5df80

UEdGraphPin * __thiscall
UEdGraphSchema::DropPinOnNode
          (UEdGraphSchema *this,UEdGraphNode *param_1,FName *param_2,FEdGraphPinType *param_3,
          EEdGraphPinDirection param_4)

{
  return (UEdGraphPin *)0x0;
}

// DroppedAssetsOnGraph @ 147b5df90

void __thiscall
UEdGraphSchema::DroppedAssetsOnGraph
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<float> *param_2,UEdGraph *param_3)

{
  double local_18;
  double dStack_10;
  
  local_18 = (double)(param_2->field0_0x0)._s_0.X;
  dStack_10 = (double)(param_2->field0_0x0)._s_0.Y;
  (**(code **)(*(longlong *)this + 0x4a8))(local_18,param_1,&local_18);
  return;
}

// DroppedAssetsOnGraph @ 147b5dfc0

void __thiscall
UEdGraphSchema::DroppedAssetsOnGraph
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,UEdGraph *param_3)

{
  return;
}

// DroppedAssetsOnNode @ 147b5dfd0

void __thiscall
UEdGraphSchema::DroppedAssetsOnNode
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<float> *param_2,UEdGraphNode *param_3)

{
  double local_18;
  double dStack_10;
  
  local_18 = (double)(param_2->field0_0x0)._s_0.X;
  dStack_10 = (double)(param_2->field0_0x0)._s_0.Y;
  (**(code **)(*(longlong *)this + 0x4b8))(local_18,param_1,&local_18);
  return;
}

// DroppedAssetsOnNode @ 147b5e000

void __thiscall
UEdGraphSchema::DroppedAssetsOnNode
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,UEdGraphNode *param_3)

{
  return;
}

// DroppedAssetsOnPin @ 147b5e010

void __thiscall
UEdGraphSchema::DroppedAssetsOnPin
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<float> *param_2,UEdGraphPin *param_3)

{
  double local_18;
  double dStack_10;
  
  local_18 = (double)(param_2->field0_0x0)._s_0.X;
  dStack_10 = (double)(param_2->field0_0x0)._s_0.Y;
  (**(code **)(*(longlong *)this + 0x4c8))(local_18,param_1,&local_18);
  return;
}

// DroppedAssetsOnPin @ 147b5e040

void __thiscall
UEdGraphSchema::DroppedAssetsOnPin
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,UEdGraphPin *param_3)

{
  return;
}

// DuplicateGraph @ 147b5e410

UEdGraph * __thiscall UEdGraphSchema::DuplicateGraph(UEdGraphSchema *this,UEdGraph *param_1)

{
  return (UEdGraph *)0x0;
}

// FadeNodeWhenDraggingOffPin @ 147b61270

bool __thiscall
UEdGraphSchema::FadeNodeWhenDraggingOffPin
          (UEdGraphSchema *this,UEdGraphNode *param_1,UEdGraphPin *param_2)

{
  return false;
}

// ForceVisualizationCacheClear @ 147b628b0

void __thiscall UEdGraphSchema::ForceVisualizationCacheClear(UEdGraphSchema *this)

{
  return;
}

// GetAssetsGraphHoverMessage @ 147b63bd0

void __thiscall
UEdGraphSchema::GetAssetsGraphHoverMessage
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          UEdGraph *param_2,FString *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  if (param_3 != &local_18) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  *param_4 = false;
  return;
}

// GetAssetsNodeHoverMessage @ 147b63c10

void __thiscall
UEdGraphSchema::GetAssetsNodeHoverMessage
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          UEdGraphNode *param_2,FString *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  if (param_3 != &local_18) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  *param_4 = false;
  return;
}

// GetAssetsPinHoverMessage @ 147b63c50

void __thiscall
UEdGraphSchema::GetAssetsPinHoverMessage
          (UEdGraphSchema *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          UEdGraphPin *param_2,FString *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  if (param_3 != &local_18) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  *param_4 = false;
  return;
}

// GetContextMenuActions @ 147b64760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UEdGraphSchema::GetContextMenuActions
          (UEdGraphSchema *this,UToolMenu *param_1,UGraphNodeContextMenuContext *param_2)

{
  return;
}

// GetContextMenuName @ 147b64770

FName __thiscall UEdGraphSchema::GetContextMenuName(UEdGraphSchema *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetContextMenuName @ 147b64780

FName __cdecl UEdGraphSchema::GetContextMenuName(UClass *param_1)

{
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// GetCreateCommentAction @ 147b64890

TSharedPtr<FEdGraphSchemaAction,1> * __thiscall
UEdGraphSchema::GetCreateCommentAction
          (UEdGraphSchema *this,TSharedPtr<FEdGraphSchemaAction,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FEdGraphSchemaAction *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCurrentVisualizationCacheID @ 147b648b0

int __thiscall UEdGraphSchema::GetCurrentVisualizationCacheID(UEdGraphSchema *this)

{
  return 0;
}

// GetFindReferenceSearchTerm @ 147b658c0

FString * __thiscall
UEdGraphSchema::GetFindReferenceSearchTerm
          (UEdGraphSchema *this,FString *__return_storage_ptr__,FEdGraphSchemaAction *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGraphCategory @ 147b65a40

FText * __thiscall
UEdGraphSchema::GetGraphCategory
          (UEdGraphSchema *this,FText *__return_storage_ptr__,UEdGraph *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGraphContextActions @ 147b65a60

void __thiscall
UEdGraphSchema::GetGraphContextActions(UEdGraphSchema *this,FGraphContextMenuBuilder *param_1)

{
  return;
}

// GetGraphDisplayInformation @ 147b65a70

void __thiscall
UEdGraphSchema::GetGraphDisplayInformation
          (UEdGraphSchema *this,UEdGraph *param_1,FGraphDisplayInfo *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  FName local_res10 [3];
  FString local_28;
  FText local_18;
  
  local_res10[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res10,&local_28);
  pFVar3 = FText::FromString(&local_18,&local_28);
  FText::operator=(&param_2->PlainName,pFVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pIVar1 = (param_2->PlainName).TextData.Reference;
  pIVar2 = (param_2->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (param_2->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_2->DisplayName).Flags = (param_2->PlainName).Flags;
  return;
}

// GetGraphType @ 147b65b20

EGraphType __thiscall UEdGraphSchema::GetGraphType(UEdGraphSchema *this,UEdGraph *param_1)

{
  return GT_Function;
}

// GetLocalVariables @ 147b67fa0

bool __thiscall
UEdGraphSchema::GetLocalVariables
          (UEdGraphSchema *this,UEdGraph *param_1,
          TArray<FBPVariableDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// GetNodeSelectionCount @ 147b693a0

int __thiscall UEdGraphSchema::GetNodeSelectionCount(UEdGraphSchema *this,UEdGraph *param_1)

{
  return 0;
}

// GetParentContextMenuName @ 147b6a730

FName __thiscall UEdGraphSchema::GetParentContextMenuName(UEdGraphSchema *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPinColor @ 147b6a830

FLinearColor * __thiscall
UEdGraphSchema::GetPinColor
          (UEdGraphSchema *this,FLinearColor *__return_storage_ptr__,UEdGraphPin *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 != (UEdGraphPin *)0x0) {
    puVar2 = (undefined8 *)
             (**(code **)(*(longlong *)this + 0x380))(this,&local_18,&param_1->PinType);
    uVar1 = puVar2[1];
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar2;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  local_18 = FLinearColor::Black.field0_0x0._0_8_;
  uStack_10 = FLinearColor::Black.field0_0x0._8_8_;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
  return __return_storage_ptr__;
}

// GetPinTypeColor @ 147b6a890

FLinearColor * __thiscall
UEdGraphSchema::GetPinTypeColor
          (UEdGraphSchema *this,FLinearColor *__return_storage_ptr__,FEdGraphPinType *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147b6bfb0

UClass * __cdecl UEdGraphSchema::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdGraphSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EdGraphSchema",
               &Z_Registration_Info_UClass_UEdGraphSchema.InnerSingleton,
               StaticRegisterNativesUEdGraphSchema,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEdGraphSchema>,
               InternalVTableHelperCtorCaller<UEdGraphSchema>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdGraphSchema.InnerSingleton;
}

// GetSecondaryPinTypeColor @ 147b6ea60

FLinearColor * __thiscall
UEdGraphSchema::GetSecondaryPinTypeColor
          (UEdGraphSchema *this,FLinearColor *__return_storage_ptr__,FEdGraphPinType *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// HandleGraphBeingDeleted @ 147b73180

void __thiscall UEdGraphSchema::HandleGraphBeingDeleted(UEdGraphSchema *this,UEdGraph *param_1)

{
  return;
}

// InsertAdditionalActions @ 147b778e0

void __thiscall
UEdGraphSchema::InsertAdditionalActions
          (UEdGraphSchema *this,TArray<UBlueprint_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UEdGraph_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_3,
          FGraphActionListBuilderBase *param_4)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_3->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// IsCacheVisualizationOutOfDate @ 147b77ea0

bool __thiscall UEdGraphSchema::IsCacheVisualizationOutOfDate(UEdGraphSchema *this,int param_1)

{
  return false;
}

// IsConnectionRelinkingAllowed @ 147b77eb0

bool __thiscall
UEdGraphSchema::IsConnectionRelinkingAllowed(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return false;
}

// IsCurrentPinDefaultValid @ 147b77f20

FString * __thiscall
UEdGraphSchema::IsCurrentPinDefaultValid
          (UEdGraphSchema *this,FString *__return_storage_ptr__,UEdGraphPin *param_1)

{
  code *pcVar1;
  TObjectPtr<UObject>_u_0 local_res8;
  
  local_res8 = (TObjectPtr<UObject>_u_0)(param_1->DefaultObject).field0_0x0.DebugPtr;
  pcVar1 = *(code **)(*(longlong *)this + 0x308);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
  }
  (*pcVar1)(this,__return_storage_ptr__,param_1,&param_1->DefaultValue,&local_res8,
            &param_1->DefaultTextValue);
  return __return_storage_ptr__;
}

// IsDelegateCategory @ 147b78000

bool __thiscall UEdGraphSchema::IsDelegateCategory(UEdGraphSchema *this,FName param_1)

{
  return false;
}

// IsPinBeingWatched @ 147b78260

bool __thiscall UEdGraphSchema::IsPinBeingWatched(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return false;
}

// IsPinDefaultValid @ 147b78270

FString * __thiscall
UEdGraphSchema::IsPinDefaultValid
          (UEdGraphSchema *this,FString *__return_storage_ptr__,UEdGraphPin *param_1,
          FString *param_2,TObjectPtr<UObject> param_3,FText *param_4)

{
  ::FString::FString(__return_storage_ptr__,L"Not implemented by this schema");
  return __return_storage_ptr__;
}

// IsSelfPin @ 147b782d0

bool __thiscall UEdGraphSchema::IsSelfPin(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return false;
}

// IsTitleBarPin @ 147b78640

bool __thiscall UEdGraphSchema::IsTitleBarPin(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return false;
}

// MakeActionFromVariableDescription @ 147b78bb0

TSharedPtr<FEdGraphSchemaAction,1> * __thiscall
UEdGraphSchema::MakeActionFromVariableDescription
          (UEdGraphSchema *this,TSharedPtr<FEdGraphSchemaAction,1> *__return_storage_ptr__,
          UEdGraph *param_1,FBPVariableDescription *param_2)

{
  __return_storage_ptr__->Object = (FEdGraphSchemaAction *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MarkBlueprintDirtyFromNewNode @ 147b78f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UEdGraphSchema::MarkBlueprintDirtyFromNewNode
          (UEdGraphSchema *this,UBlueprint *param_1,UEdGraphNode *param_2)

{
  return false;
}

// MovePinLinks @ 147b79330

FPinConnectionResponse * __thiscall
UEdGraphSchema::MovePinLinks
          (UEdGraphSchema *this,FPinConnectionResponse *__return_storage_ptr__,UEdGraphPin *param_1,
          UEdGraphPin *param_2,bool param_3,bool param_4)

{
  int iVar1;
  ITextData *pIVar2;
  FScriptContainerElement *_Src;
  UEdGraphPin *pUVar3;
  UObject *pUVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FText *pFVar9;
  FPinConnectionResponse *pFVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  UEdGraphPin *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FText local_68;
  TRefCountPtr<ITextData> local_58;
  uint local_50;
  byte local_48;
  byte bStack_47;
  
  local_res18 = param_1;
  pFVar9 = FText::FText(&local_68);
  FText::FText(&__return_storage_ptr__->Message,pFVar9);
  (__return_storage_ptr__->Response).Value = '\0';
  __return_storage_ptr__->bIsFatal = false;
  pIVar2 = (pFVar9->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  local_70 = (param_1->LinkedTo).ArrayNum;
  lVar11 = (longlong)local_70;
  uVar13 = 0;
  _Src = (param_1->LinkedTo).AllocatorInstance.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,_Src,lVar11 << 3);
  }
  UEdGraphPin::BreakAllPinLinks(param_1,false,true);
  uVar15 = uVar13;
  if (0 < local_70) {
    do {
      uVar12 = (uint)uVar13;
      uVar8 = 0;
      if ((int)uVar12 < local_70) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FPinConnectionResponse *)(*pcVar6)();
        return pFVar10;
      }
      pUVar3 = *(UEdGraphPin **)(local_78.Data + uVar15);
      (**(code **)(*(longlong *)this + 0x2c8))(this,&local_58,param_2,pUVar3);
      if (((byte)(local_48 - 1) < 4) || (6 < local_48)) {
        pIVar2 = (__return_storage_ptr__->Message).TextData.Reference;
        if (pIVar2 != local_58.Reference) {
          (__return_storage_ptr__->Message).TextData.Reference = local_58.Reference;
          if (local_58.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.Reference + 8))(local_58.Reference,local_res10);
          }
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          }
        }
        (__return_storage_ptr__->Message).Flags = local_50;
        __return_storage_ptr__->bIsFatal = false;
        __return_storage_ptr__->field_0x11 = __return_storage_ptr__->field_0x11 | bStack_47 & 1;
        (__return_storage_ptr__->Response).Value = local_48;
      }
      else if (local_48 == 5) {
        (**(code **)(*(longlong *)this + 0x2f8))(this,param_2,pUVar3);
      }
      else {
        UEdGraphPin::MakeLinkTo(param_2,pUVar3,true);
      }
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      param_1 = local_res18;
      uVar15 = uVar15 + 8;
    } while ((int)(uVar12 + 1) < local_70);
  }
  iVar1 = (param_1->DefaultValue).Data.ArrayNum;
  iVar14 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar14 = 0;
  }
  ::FString::AssignRange
            (&param_2->DefaultValue,(wchar_t *)(param_1->DefaultValue).Data.AllocatorInstance.Data,
             iVar14);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->DefaultObject).field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  (param_2->DefaultObject).field0_0x0 = (param_1->DefaultObject).field0_0x0;
  pIVar2 = (param_1->DefaultTextValue).TextData.Reference;
  pIVar5 = (param_2->DefaultTextValue).TextData.Reference;
  if (pIVar5 != pIVar2) {
    (param_2->DefaultTextValue).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res20);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (param_2->DefaultTextValue).Flags = (param_1->DefaultTextValue).Flags;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return __return_storage_ptr__;
}

// OnPinConnectionDoubleCicked @ 147b7c0d0

void __thiscall
UEdGraphSchema::OnPinConnectionDoubleCicked
          (UEdGraphSchema *this,UEdGraphPin *param_1,UEdGraphPin *param_2,TVector2<float> *param_3)

{
  (**(code **)(*(longlong *)this + 0x3e0))();
  return;
}

// OnPinConnectionDoubleCicked @ 147b7c100

void __thiscall
UEdGraphSchema::OnPinConnectionDoubleCicked
          (UEdGraphSchema *this,UEdGraphPin *param_1,UEdGraphPin *param_2,TVector2<double> *param_3)

{
  return;
}

// RecombinePin @ 147b800a0

void __thiscall UEdGraphSchema::RecombinePin(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return;
}

// ReconstructNode @ 147b800b0

void __thiscall
UEdGraphSchema::ReconstructNode(UEdGraphSchema *this,UEdGraphNode *param_1,bool param_2)

{
  return;
}

// RequestVariableDropOnNode @ 147b84ee0

bool __thiscall
UEdGraphSchema::RequestVariableDropOnNode
          (UEdGraphSchema *this,UEdGraph *param_1,FProperty *param_2,UEdGraphNode *param_3,
          TVector2<float> *param_4,TVector2<float> *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)this + 0x580))();
  return (bool)uVar1;
}

// RequestVariableDropOnNode @ 147b84f30

bool __thiscall
UEdGraphSchema::RequestVariableDropOnNode
          (UEdGraphSchema *this,UEdGraph *param_1,FProperty *param_2,UEdGraphNode *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5)

{
  return false;
}

// RequestVariableDropOnPanel @ 147b84f40

bool __thiscall
UEdGraphSchema::RequestVariableDropOnPanel
          (UEdGraphSchema *this,UEdGraph *param_1,FProperty *param_2,TVector2<float> *param_3,
          TVector2<float> *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)this + 0x570))();
  return (bool)uVar1;
}

// RequestVariableDropOnPanel @ 147b84f80

bool __thiscall
UEdGraphSchema::RequestVariableDropOnPanel
          (UEdGraphSchema *this,UEdGraph *param_1,FProperty *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  return false;
}

// RequestVariableDropOnPin @ 147b84f90

bool __thiscall
UEdGraphSchema::RequestVariableDropOnPin
          (UEdGraphSchema *this,UEdGraph *param_1,FProperty *param_2,UEdGraphPin *param_3,
          TVector2<float> *param_4,TVector2<float> *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)this + 0x590))();
  return (bool)uVar1;
}

// RequestVariableDropOnPin @ 147b84fe0

bool __thiscall
UEdGraphSchema::RequestVariableDropOnPin
          (UEdGraphSchema *this,UEdGraph *param_1,FProperty *param_2,UEdGraphPin *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5)

{
  return false;
}

// ResetPinToAutogeneratedDefaultValue @ 147b85a40

void __thiscall
UEdGraphSchema::ResetPinToAutogeneratedDefaultValue
          (UEdGraphSchema *this,UEdGraphPin *param_1,bool param_2)

{
  return;
}

// SafeDeleteNodeFromGraph @ 147b86890

bool __thiscall
UEdGraphSchema::SafeDeleteNodeFromGraph
          (UEdGraphSchema *this,UEdGraph *param_1,UEdGraphNode *param_2)

{
  return false;
}

// SetNodeMetaData @ 147b8c050

bool __cdecl UEdGraphSchema::SetNodeMetaData(UEdGraphNode *param_1,FName *param_2)

{
  return false;
}

// SetNodePosition @ 147b8c060

void __thiscall
UEdGraphSchema::SetNodePosition(UEdGraphSchema *this,UEdGraphNode *param_1,TVector2<float> *param_2)

{
  double local_18;
  double dStack_10;
  
  local_18 = (double)(param_2->field0_0x0)._s_0.X;
  dStack_10 = (double)(param_2->field0_0x0)._s_0.Y;
  (**(code **)(*(longlong *)this + 0x428))(local_18,param_1,&local_18);
  return;
}

// SetNodePosition @ 147b8c090

void __thiscall
UEdGraphSchema::SetNodePosition
          (UEdGraphSchema *this,UEdGraphNode *param_1,TVector2<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UEdGraphNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphSchema.cpp"
                       ,0x490,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->NodePosX = (int)(param_2->field0_0x0)._s_0.X;
  param_1->NodePosY = (int)(param_2->field0_0x0)._s_0.Y;
  return;
}

// SetPinBeingDroppedOnNode @ 147b8c9f0

void __thiscall UEdGraphSchema::SetPinBeingDroppedOnNode(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return;
}

// ShouldAlwaysPurgeOnModification @ 147b8e270

bool __thiscall UEdGraphSchema::ShouldAlwaysPurgeOnModification(UEdGraphSchema *this)

{
  return true;
}

// ShouldHidePinDefaultValue @ 147b8e280

bool __thiscall UEdGraphSchema::ShouldHidePinDefaultValue(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return false;
}

// ShouldShowAssetPickerForPin @ 147b8e2a0

bool __thiscall
UEdGraphSchema::ShouldShowAssetPickerForPin(UEdGraphSchema *this,UEdGraphPin *param_1)

{
  return true;
}

// SplitPin @ 147b8ea90

void __thiscall UEdGraphSchema::SplitPin(UEdGraphSchema *this,UEdGraphPin *param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesUEdGraphSchema @ 147b8ec20

void __cdecl UEdGraphSchema::StaticRegisterNativesUEdGraphSchema(void)

{
  return;
}

// SupportsDropPinOnNode @ 147b8efc0

bool __thiscall
UEdGraphSchema::SupportsDropPinOnNode
          (UEdGraphSchema *this,UEdGraphNode *param_1,FEdGraphPinType *param_2,
          EEdGraphPinDirection param_3,FText *param_4)

{
  return false;
}

// SupportsPinType @ 147b8efd0

bool __thiscall
UEdGraphSchema::SupportsPinType
          (UEdGraphSchema *this,TWeakPtr<FEdGraphSchemaAction_const_,1> *param_1,
          FEdGraphPinType *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return true;
}

// SupportsPinTypeContainer @ 147b8f010

bool __thiscall
UEdGraphSchema::SupportsPinTypeContainer
          (UEdGraphSchema *this,TWeakPtr<FEdGraphSchemaAction_const_,1> *param_1,
          FEdGraphPinType *param_2,EPinContainerType *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return true;
}

// TryCreateConnection @ 147b8f4c0

bool __thiscall
UEdGraphSchema::TryCreateConnection(UEdGraphSchema *this,UEdGraphPin *param_1,UEdGraphPin *param_2)

{
  undefined1 uVar1;
  longlong *local_28 [2];
  undefined1 local_18;
  
  (**(code **)(*(longlong *)this + 0x2c8))(this,local_28,param_1,param_2);
  uVar1 = 0;
  switch(local_18) {
  case 0:
    break;
  default:
    goto switchD_147b8f50f_caseD_1;
  case 2:
    UEdGraphPin::BreakAllPinLinks(param_1,true,true);
    break;
  case 3:
    goto switchD_147b8f50f_caseD_3;
  case 4:
    UEdGraphPin::BreakAllPinLinks(param_1,true,true);
switchD_147b8f50f_caseD_3:
    UEdGraphPin::BreakAllPinLinks(param_2,true,true);
    break;
  case 5:
    uVar1 = (**(code **)(*(longlong *)this + 0x2f8))(this,param_1,param_2);
    goto switchD_147b8f50f_caseD_1;
  case 6:
    uVar1 = (**(code **)(*(longlong *)this + 0x300))(this,param_1,param_2);
    goto switchD_147b8f50f_caseD_1;
  }
  UEdGraphPin::MakeLinkTo(param_1,param_2,true);
  uVar1 = 1;
switchD_147b8f50f_caseD_1:
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  return (bool)uVar1;
}

// TryDeleteGraph @ 147b8f5d0

bool __thiscall UEdGraphSchema::TryDeleteGraph(UEdGraphSchema *this,UEdGraph *param_1)

{
  return false;
}

// TryRelinkConnectionTarget @ 147b8f760

bool __thiscall
UEdGraphSchema::TryRelinkConnectionTarget
          (UEdGraphSchema *this,UEdGraphPin *param_1,UEdGraphPin *param_2,UEdGraphPin *param_3,
          TArray<UEdGraphNode_*,TSizedDefaultAllocator<32>_> *param_4)

{
  return false;
}

// TryRenameGraph @ 147b8f770

bool __thiscall
UEdGraphSchema::TryRenameGraph(UEdGraphSchema *this,UEdGraph *param_1,FName *param_2)

{
  return false;
}

// TrySetDefaultObject @ 147b8f960

void __thiscall
UEdGraphSchema::TrySetDefaultObject
          (UEdGraphSchema *this,UEdGraphPin *param_1,UObject *param_2,bool param_3)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
    (param_1->DefaultObject).field0_0x0.DebugPtr = param_2;
    return;
  }
  (param_1->DefaultObject).field0_0x0.DebugPtr = param_2;
  return;
}

// TrySetDefaultText @ 147b8f9b0

void __thiscall
UEdGraphSchema::TrySetDefaultText
          (UEdGraphSchema *this,UEdGraphPin *param_1,FText *param_2,bool param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  pIVar1 = (param_2->TextData).Reference;
  pIVar2 = (param_1->DefaultTextValue).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (param_1->DefaultTextValue).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (param_1->DefaultTextValue).Flags = param_2->Flags;
    return;
  }
  (param_1->DefaultTextValue).Flags = param_2->Flags;
  return;
}

// TrySetDefaultValue @ 147b8fa40

void __thiscall
UEdGraphSchema::TrySetDefaultValue
          (UEdGraphSchema *this,UEdGraphPin *param_1,FString *param_2,bool param_3)

{
  ::FString::operator=(&param_1->DefaultValue,param_2);
  return;
}

// TrySetGraphCategory @ 147b8fa60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UEdGraphSchema::TrySetGraphCategory
          (UEdGraphSchema *this,FReply *__return_storage_ptr__,UEdGraph *param_1,FText *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// TryToGetChildEvents @ 147b8fa90

bool __thiscall
UEdGraphSchema::TryToGetChildEvents
          (UEdGraphSchema *this,UEdGraph *param_1,int param_2,
          TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_> *param_3,
          FText *param_4)

{
  return false;
}

