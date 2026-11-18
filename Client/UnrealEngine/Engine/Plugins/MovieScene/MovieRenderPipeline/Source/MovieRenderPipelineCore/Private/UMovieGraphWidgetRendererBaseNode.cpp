// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 14

// StaticClass @ 14dce62c0

UClass * __cdecl UMovieGraphWidgetRendererBaseNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphWidgetRendererBaseNode.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphWidgetRendererBaseNode",
               &Z_Registration_Info_UClass_UMovieGraphWidgetRendererBaseNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphWidgetRendererBaseNode,0x150,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphWidgetRendererBaseNode>,
               InternalVTableHelperCtorCaller<UMovieGraphWidgetRendererBaseNode>,aFStackX_8,
               UMovieGraphRenderPassNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphWidgetRendererBaseNode.InnerSingleton;
}

// UMovieGraphWidgetRendererBaseNode @ 14dd0bc60

UMovieGraphWidgetRendererBaseNode * __thiscall
UMovieGraphWidgetRendererBaseNode::UMovieGraphWidgetRendererBaseNode
          (UMovieGraphWidgetRendererBaseNode *this,FVTableHelper *param_1)

{
  UMovieGraphRenderPassNode::UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this,param_1);
  this->bCompositeOntoFinalImage = true;
  this->_padding_ = (longlong)&___7UMovieGraphWidgetRendererBaseNode__6B_;
  (this->WidgetRenderer).Object = (FWidgetRenderer *)0x0;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInstances).ArrayNum = 0;
  (this->CurrentInstances).ArrayMax = 0;
  *(undefined8 *)&this->SharedVirtualWindows = 0;
  *(undefined8 *)&(this->SharedVirtualWindows).field_0x8 = 0;
  *(undefined8 *)&(this->SharedVirtualWindows).field_0x20 = 0;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x28 = 0;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x2c = 0x80;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x34 = 0;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SharedVirtualWindows).field_0x40 = 0;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x48 = 0;
  return this;
}

// UMovieGraphWidgetRendererBaseNode @ 14dd0bcf0

UMovieGraphWidgetRendererBaseNode * __thiscall
UMovieGraphWidgetRendererBaseNode::UMovieGraphWidgetRendererBaseNode
          (UMovieGraphWidgetRendererBaseNode *this)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphRenderPassNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"UnnamedRenderPass");
  ::FString::operator=((FString *)&this->_padding_,L"beauty");
  this->_padding_ = (longlong)&___7UMovieGraphWidgetRendererBaseNode__6B_;
  (this->WidgetRenderer).Object = (FWidgetRenderer *)0x0;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInstances).ArrayNum = 0;
  (this->CurrentInstances).ArrayMax = 0;
  *(undefined8 *)&this->SharedVirtualWindows = 0;
  *(undefined8 *)&(this->SharedVirtualWindows).field_0x8 = 0;
  *(undefined8 *)&(this->SharedVirtualWindows).field_0x20 = 0;
  this->bCompositeOntoFinalImage = true;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x28 = 0;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x2c = 0x80;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x34 = 0;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SharedVirtualWindows).field_0x40 = 0;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x48 = 0;
  return this;
}

// ~UMovieGraphWidgetRendererBaseNode @ 14dd0e0a0

void __thiscall
UMovieGraphWidgetRendererBaseNode::~UMovieGraphWidgetRendererBaseNode
          (UMovieGraphWidgetRendererBaseNode *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphWidgetRendererBaseNode__6B_;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SharedVirtualWindows).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SharedVirtualWindows);
  DestructItems<TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>,int>
            ((TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
              *)(this->CurrentInstances).AllocatorInstance.Data,(this->CurrentInstances).ArrayNum);
  pFVar2 = (this->CurrentInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetRenderer).SharedReferenceCount.ReferenceController);
  UMovieGraphRenderPassNode::~UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this);
  return;
}

// GatherOutputPassesImpl @ 14dd20570

void __thiscall
UMovieGraphWidgetRendererBaseNode::GatherOutputPassesImpl
          (UMovieGraphWidgetRendererBaseNode *this,UMovieGraphEvaluatedConfig *param_1,
          TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->CurrentInstances).AllocatorInstance.Data;
  iVar2 = (this->CurrentInstances).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CurrentInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x28))(*(longlong **)pFVar3,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GeneratePass @ 14dd20690

TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
 __thiscall UMovieGraphWidgetRendererBaseNode::GeneratePass(UMovieGraphWidgetRendererBaseNode *this)

{
  FMovieGraphWidgetPass *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\Nodes\\MovieGraphWidgetRendererBaseNode.h"
             ,0x43,L"Pure virtual not implemented (%s)");
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
          )in_RDX;
}

// GetFileNameFormatOverride @ 14dd25680

FString * __thiscall
UMovieGraphWidgetRendererBaseNode::GetFileNameFormatOverride
          (UMovieGraphWidgetRendererBaseNode *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLayerNameOverride @ 14dd280a0

FString * __thiscall
UMovieGraphWidgetRendererBaseNode::GetLayerNameOverride
          (UMovieGraphWidgetRendererBaseNode *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOrCreateVirtualWindow @ 14dd29db0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SVirtualWindow,1> * __thiscall
UMovieGraphWidgetRendererBaseNode::GetOrCreateVirtualWindow
          (UMovieGraphWidgetRendererBaseNode *this,
          TSharedPtr<SVirtualWindow,1> *__return_storage_ptr__,TIntPoint<int> *param_1)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  SVirtualWindow *pSVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TSharedPtr<SVirtualWindow,1> *pTVar10;
  FSlateApplication *this_00;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  T0RequiredArgs local_res8 [16];
  FLLMScope local_res18 [2];
  ELLMTagSet local_res20 [8];
  SVirtualWindow *local_298;
  TReferenceControllerBase<1> *local_290;
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> local_288;
  FName local_270;
  FMemScope local_268;
  TIntPoint<int> *local_260;
  SVirtualWindow **local_258;
  TSharedRef<SWindow,1> local_250;
  FArguments local_240;
  
  iVar19 = (param_1->field0_0x0)._s_0.X;
  uVar18 = (param_1->field0_0x0)._s_0.Y;
  uVar17 = iVar19 - uVar18 ^ uVar18 >> 0xd;
  uVar11 = (-0x61c88647 - uVar18) - uVar17 ^ uVar17 << 8;
  uVar15 = (uVar18 - uVar17) - uVar11 ^ uVar11 >> 0xd;
  uVar17 = (uVar17 - uVar15) - uVar11 ^ uVar15 >> 0xc;
  uVar11 = (uVar11 - uVar17) - uVar15 ^ uVar17 << 0x10;
  uVar15 = (uVar15 - uVar11) - uVar17 ^ uVar11 >> 5;
  uVar17 = (uVar17 - uVar15) - uVar11 ^ uVar15 >> 3;
  uVar11 = (uVar11 - uVar17) - uVar15 ^ uVar17 << 10;
  if (*(int *)&(this->SharedVirtualWindows).field_0x8 !=
      *(int *)&(this->SharedVirtualWindows).field_0x34) {
    puVar13 = *(undefined1 **)&(this->SharedVirtualWindows).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->SharedVirtualWindows).field_0x38;
    }
    iVar16 = *(int *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->SharedVirtualWindows).field_0x48 - 1U &
                     ((uVar15 - uVar11) - uVar17 ^ uVar11 >> 0xf)) * 4);
    if (iVar16 != -1) {
      do {
        puVar12 = (undefined8 *)((longlong)iVar16 * 0x20 + *(longlong *)&this->SharedVirtualWindows)
        ;
        if (((int)*puVar12 == iVar19) && ((uint)((ulonglong)*puVar12 >> 0x20) == uVar18)) {
          if (iVar16 != -1) {
            puVar14 = puVar12 + 1;
            if (puVar12 == (undefined8 *)0x0) {
              puVar14 = (undefined8 *)0x0;
            }
            if (puVar14 != (undefined8 *)0x0) {
              __return_storage_ptr__->Object = (SVirtualWindow *)*puVar14;
              pTVar2 = (TReferenceControllerBase<1> *)puVar14[1];
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
              if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
                return __return_storage_ptr__;
              }
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
              return __return_storage_ptr__;
            }
          }
          break;
        }
        iVar16 = *(int *)(puVar12 + 3);
      } while (iVar16 != -1);
    }
  }
  pFVar9 = SVirtualWindow::FArguments::FArguments(&local_240);
  iVar19 = (param_1->field0_0x0)._s_0.Y;
  (pFVar9->_Size).field0_0x0._s_0.X = (double)(param_1->field0_0x0)._s_0.X;
  (pFVar9->_Size).field0_0x0._s_0.Y = (double)iVar19;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_270 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_268,&local_270,true);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
            (&local_288,"SVirtualWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphWidgetRendererBaseNode.cpp"
             ,0x120,local_res8);
  FMemScope::~FMemScope(&local_268);
  FLLMScope::~FLLMScope(local_res18);
  pSVar4 = local_288._Widget.Object;
  if ((local_288._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedPtr<SVirtualWindow,1> *)(*pcVar3)();
    return pTVar10;
  }
  SWidget::SWidgetConstruct((SWidget *)local_288._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SVirtualWindow::Construct(local_288._Widget.Object,pFVar9);
  if ((local_288._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedPtr<SVirtualWindow,1> *)(*pcVar3)();
    return pTVar10;
  }
  if (((local_288._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_288._Widget.Object)->_padding_ + 0x228))(local_288._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14dd2a02e;
  }
  bVar8 = 0x20;
LAB_14dd2a02e:
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ | bVar8;
  if ((local_288._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedPtr<SVirtualWindow,1> *)(*pcVar3)();
    return pTVar10;
  }
  pbVar1 = (byte *)((longlong)&(local_288._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_288._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedPtr<SVirtualWindow,1> *)(*pcVar3)();
    return pTVar10;
  }
  FVar5.ReferenceController = local_288._Widget.SharedReferenceCount.ReferenceController;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.Object = (SVirtualWindow *)0x0;
  if ((pSVar4 == (SVirtualWindow *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedPtr<SVirtualWindow,1> *)(*pcVar3)();
    return pTVar10;
  }
  local_298 = pSVar4;
  local_290 = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
  local_258 = &local_298;
  local_260 = param_1;
  TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<SVirtualWindow,1>_const_&>_>
            ((TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
              *)&this->SharedVirtualWindows,
             (TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<SVirtualWindow,1>_const_&>
              *)&local_res18[2].TagSet,(bool *)&local_260);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    if ((local_298 == (SVirtualWindow *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVirtualWindow,1> *)(*pcVar3)();
      return pTVar10;
    }
    pTVar2 = local_290;
    pSVar4 = local_298;
    if (local_290 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_290->SharedReferenceCount = (atomic<int>)((int)local_290->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_298 == (SVirtualWindow *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVirtualWindow,1> *)(*pcVar3)();
      return pTVar10;
    }
    local_250.Object = (SWindow *)pSVar4;
    local_250.SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::RegisterVirtualWindow(this_00,&local_250);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  __return_storage_ptr__->Object = local_298;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_290;
  if (local_290 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_290->SharedReferenceCount = (atomic<int>)((int)local_290->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_290);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2d9c0

UClass * __cdecl UMovieGraphWidgetRendererBaseNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphWidgetRendererBaseNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphWidgetRendererBaseNode",
               &Z_Registration_Info_UClass_UMovieGraphWidgetRendererBaseNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphWidgetRendererBaseNode,0x150,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphWidgetRendererBaseNode>,
               InternalVTableHelperCtorCaller<UMovieGraphWidgetRendererBaseNode>,local_res8,
               UMovieGraphRenderPassNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphWidgetRendererBaseNode.InnerSingleton;
}

// RenderImpl @ 14dd3d2b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphWidgetRendererBaseNode::RenderImpl
          (UMovieGraphWidgetRendererBaseNode *this,FMovieGraphTraversalContext *param_1,
          FMovieGraphTimeStepData *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->CurrentInstances).AllocatorInstance.Data;
  iVar2 = (this->CurrentInstances).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CurrentInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x20))(*(longlong **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SetupImpl @ 14dd419d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMovieGraphWidgetRendererBaseNode::SetupImpl
          (UMovieGraphWidgetRendererBaseNode *this,FMovieGraphRenderPassSetupData *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FWidgetRenderer *pFVar12;
  FScriptContainerElement *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  longlong *local_48;
  FWidgetRenderer *local_40;
  FSharedReferencer<1> aFStack_38 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&MultiLayerExrNodeOutputName,L"MULTI_EXR");
      atexit(`UMovieGraphWidgetRendererBaseNode::SetupImpl'::__l2::
             _dynamic_atexit_destructor_for__MultiLayerExrNodeOutputName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar3 = (param_1->Layers).ArrayNum;
  bVar6 = false;
  pFVar13 = (param_1->Layers).AllocatorInstance.Data;
  pFVar11 = pFVar13 + (longlong)iVar3 * 0x40;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  do {
    if ((param_1->Layers).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieGraphRenderPassLayerData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar11) {
      pTVar10 = ::operator_new(0x50);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        local_40 = ___xmm_00000000000000000000000000000010;
        pFVar12 = (FWidgetRenderer *)&DAT_00000010;
        aFStack_38[0].ReferenceController = _UNK_150651568;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFWidgetRenderer___00_SharedPointerInternals__6B_;
        FWidgetRenderer::FWidgetRenderer((FWidgetRenderer *)(pTVar10 + 1),false,true);
        pFVar12 = (FWidgetRenderer *)(pTVar10 + 1);
        if (pFVar12 == (FWidgetRenderer *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        aFStack_38[0].ReferenceController = pTVar10;
        pTVar14 = pTVar10;
        local_40 = pFVar12;
      }
      if (&this->WidgetRenderer != (TSharedPtr<FWidgetRenderer,1> *)&local_40) {
        (this->WidgetRenderer).Object = pFVar12;
        local_40 = (FWidgetRenderer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->WidgetRenderer).SharedReferenceCount,aFStack_38);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (aFStack_38[0].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      return;
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar13 + 0x38));
    if (pUVar8 == (UObject *)0x0) {
LAB_14dd41ace:
      (**(code **)(this->_padding_ + 0x3c8))(this,&local_48);
      (**(code **)(*local_48 + 8))(local_48,(param_1->Renderer).WeakPtr,pFVar13);
      pTVar2 = &this->CurrentInstances;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar4 + (longlong)(this->CurrentInstances).ArrayMax * 8)) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (this->CurrentInstances).ArrayNum;
      piVar1 = &(this->CurrentInstances).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CurrentInstances).ArrayNum = iVar7 + 1;
      *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
      local_48 = (longlong *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UMovieGraphOutputBurnInNode_NoRegister();
      iVar7 = (int)pUVar9->_padding_;
      if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar9->_padding_)) goto LAB_14dd41ace;
      iVar7 = *(int *)&pUVar8[0xb].field_0x20;
      if (iVar7 == MultiLayerExrNodeOutputName.Data.ArrayNum) {
        if (1 < iVar7) {
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)&pUVar8[0xb].field_0x18,
                             (wchar_t *)MultiLayerExrNodeOutputName.Data.AllocatorInstance.Data);
          bVar15 = iVar7 == 0;
          goto LAB_14dd41abb;
        }
      }
      else {
        bVar15 = iVar7 + MultiLayerExrNodeOutputName.Data.ArrayNum == 1;
LAB_14dd41abb:
        if (!bVar15) goto LAB_14dd41ace;
      }
      if (!bVar6) {
        bVar6 = true;
        goto LAB_14dd41ace;
      }
    }
    pFVar13 = pFVar13 + 0x40;
  } while( true );
}

// StaticRegisterNativesUMovieGraphWidgetRendererBaseNode @ 14dd454c0

void __cdecl
UMovieGraphWidgetRendererBaseNode::StaticRegisterNativesUMovieGraphWidgetRendererBaseNode(void)

{
  return;
}

// TeardownImpl @ 14dd45b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphWidgetRendererBaseNode::TeardownImpl(UMovieGraphWidgetRendererBaseNode *this)

{
  int *piVar1;
  TMap<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>_>
  *pTVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  SWindow *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  FSlateApplication *this_00;
  TMap<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>_>
  *pTVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  TSharedRef<SWindow,1> local_b8;
  TMap<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pFVar15 = (this->CurrentInstances).AllocatorInstance.Data;
  iVar5 = (this->CurrentInstances).ArrayNum;
  pFVar9 = pFVar15 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->CurrentInstances).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar9) break;
    (**(code **)(**(longlong **)pFVar15 + 0x10))();
    pFVar15 = pFVar15 + 8;
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    iStack_a0 = 0;
    pTVar2 = &this->SharedVirtualWindows;
    puVar3 = &(this->SharedVirtualWindows).field_0x10;
    iVar5 = *(int *)&(this->SharedVirtualWindows).field_0x28;
    uStack_9c = 1;
    local_88 = 0;
    iStack_8c = iStack_a0;
    if (iVar5 != 0) {
      puVar19 = *(uint **)&(this->SharedVirtualWindows).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar3;
      }
      uVar17 = *puVar19;
      local_88 = 0;
      iStack_a0 = 0;
      while (uVar17 == 0) {
        lVar13 = (longlong)iStack_a0;
        local_88 = local_88 + 0x20;
        iStack_a0 = iStack_a0 + 1;
        iStack_8c = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14dd45c0d;
        uVar17 = puVar19[lVar13 + 1];
      }
      uStack_9c = -uVar17 & uVar17;
      uVar4 = (ulonglong)uStack_9c * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iStack_8c = local_88 + -1 + local_res18;
      if (iVar5 < iStack_8c) {
        iStack_8c = iVar5;
      }
    }
LAB_14dd45c0d:
    uVar17 = *(uint *)&(this->SharedVirtualWindows).field_0x28;
    uVar16 = uVar17 & 0xffffffe0;
    iStack_80 = *(int *)&(this->SharedVirtualWindows).field_0x8 -
                *(int *)&(this->SharedVirtualWindows).field_0x34;
    uStack_90 = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
    TStack_70.CurrentBitIndex = iStack_8c;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar17 >> 5;
    TStack_70._28_4_ = iStack_8c;
    TStack_70.BaseBitIndex = local_88;
    uStack_50 = CONCAT44(uStack_7c,iStack_80);
    local_a8 = pTVar2;
    local_98 = puVar3;
    iStack_84 = iStack_8c;
    local_78 = pTVar2;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar6 = *(uint *)&(this->SharedVirtualWindows).field_0x28;
    if (uVar17 != uVar6) {
      puVar18 = *(undefined1 **)&(this->SharedVirtualWindows).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar3;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
      while (uVar17 == 0) {
        lVar13 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar17 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14dd45d10;
        uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uVar17 = local_res20 + -1 + uVar16;
      if ((int)uVar6 < (int)uVar17) {
        uVar17 = uVar6;
      }
    }
LAB_14dd45d10:
    while( true ) {
      pTVar11 = local_78;
      if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_70.CurrentBitIndex == uVar17) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (pTVar11 == pTVar2)) break;
      lVar13 = *(longlong *)pTVar11 + (longlong)TStack_70.CurrentBitIndex * 0x20;
      if (*(longlong *)(lVar13 + 8) != 0) {
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentApplication.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                ,0x141,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        bVar12 = IsInGameThread();
        if ((((!bVar12) && (bVar12 = IsInSlateThread(), !bVar12)) &&
            (bVar12 = (*IsInAsyncLoadingThread)(), !bVar12)) &&
           ((bVar12 = IsInParallelLoadingThread(), !bVar12 &&
            (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                 ,0x142,L""), bVar12)))) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        this_00 = FSlateApplication::CurrentApplication.Object;
        if ((*(longlong *)(lVar13 + 8) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pSVar7 = *(SWindow **)(lVar13 + 8);
        pTVar8 = *(TReferenceControllerBase<1> **)(lVar13 + 0x10);
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pSVar7 == (SWindow *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8.Object = pSVar7;
        local_b8.SharedReferenceCount.ReferenceController = pTVar8;
        FSlateApplication::UnregisterVirtualWindow(this_00,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  pTVar2 = &this->SharedVirtualWindows;
  bVar12 = 1 < *(int *)&(this->SharedVirtualWindows).field_0x48;
  if (!bVar12) {
    TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar2,0,*(int *)&(this->SharedVirtualWindows).field_0x8);
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x8 = 0;
  if (*(int *)&(this->SharedVirtualWindows).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)pTVar2,0,(int *)&(this->SharedVirtualWindows).field_0xc
              );
  }
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x34 = 0;
  iVar5 = *(int *)&(this->SharedVirtualWindows).field_0x2c;
  *(undefined4 *)&(this->SharedVirtualWindows).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->SharedVirtualWindows).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SharedVirtualWindows).field_0x10,0);
  }
  if (bVar12) {
    *(undefined4 *)&(this->SharedVirtualWindows).field_0x48 = 1;
    TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>_const_,TSharedPtr<SVirtualWindow,1>,0>,FDefaultSetAllocator>
              *)pTVar2);
  }
  piVar1 = &(this->CurrentInstances).ArrayMax;
  pFVar9 = (this->CurrentInstances).AllocatorInstance.Data;
  iVar5 = (this->CurrentInstances).ArrayNum;
  if ((this->CurrentInstances).ArrayMax < 0) {
    DestructItems<TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>,int>
              ((TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
                *)pFVar9,iVar5);
    (this->CurrentInstances).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->CurrentInstances).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>,int>
              ((TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
                *)pFVar9,iVar5);
    (this->CurrentInstances).ArrayNum = 0;
  }
  local_c8 = 0;
  FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->WidgetRenderer != (TSharedPtr<FWidgetRenderer,1> *)&local_c8) {
    (this->WidgetRenderer).Object = (FWidgetRenderer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetRenderer).SharedReferenceCount,&FStack_c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c0.ReferenceController);
  return;
}

