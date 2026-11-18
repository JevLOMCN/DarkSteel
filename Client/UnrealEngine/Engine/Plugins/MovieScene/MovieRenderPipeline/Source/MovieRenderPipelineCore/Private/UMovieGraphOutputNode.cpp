// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 12

// StaticClass @ 14dcf63b0

UClass * __cdecl UMovieGraphOutputNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphOutputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphOutputNode,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphOutputNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutputNode.InnerSingleton;
}

// UMovieGraphOutputNode @ 14dd0af20

UMovieGraphOutputNode * __thiscall
UMovieGraphOutputNode::UMovieGraphOutputNode(UMovieGraphOutputNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphOutputNode__6B_;
  return this;
}

// UMovieGraphOutputNode @ 14dd0af50

UMovieGraphOutputNode * __thiscall
UMovieGraphOutputNode::UMovieGraphOutputNode(UMovieGraphOutputNode *this)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphConfig *this_00;
  int iVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> local_18;
  
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this);
  *(undefined ***)this = &___7UMovieGraphOutputNode__6B_;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    this_00 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
    if (this_00 != (UMovieGraphConfig *)0x0) {
      UMovieGraphConfig::GetOutputs(this_00,&local_18);
      iVar2 = local_18.ArrayNum;
      pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
      uVar3 = local_18._8_8_;
      FVar4.Data = local_18.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar3 != iVar2) {
          `TCheckedPointerIterator<UMovieGraphOutput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
          uVar3 = local_18._8_8_;
        }
        if (FVar4.Data == pFVar1) break;
        FVar4.Data = FVar4.Data + 8;
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return this;
}

// ~UMovieGraphOutputNode @ 14dd0dcd0

void __thiscall UMovieGraphOutputNode::~UMovieGraphOutputNode(UMovieGraphOutputNode *this)

{
  *(undefined ***)this = &___7UMovieGraphOutputNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// CanBeAddedByUser @ 14dd188b0

bool __thiscall UMovieGraphOutputNode::CanBeAddedByUser(UMovieGraphOutputNode *this)

{
  return false;
}

// CanBeDisabled @ 14dd188d0

bool __thiscall UMovieGraphOutputNode::CanBeDisabled(UMovieGraphOutputNode *this)

{
  return false;
}

// GetInputPinProperties @ 14dd26580

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphOutputNode::GetInputPinProperties
          (UMovieGraphOutputNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  UMovieGraphValueContainer *this_00;
  void *_Src;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  EMovieGraphValueType EVar4;
  bool bVar5;
  UMovieGraphConfig *this_01;
  FName FVar6;
  FName *pFVar7;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FName local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> local_70;
  FName local_60;
  EMovieGraphValueType local_58;
  FName local_50;
  undefined4 local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_01 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
  if (this_01 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetOutputs(this_01,&local_70);
    local_res18 = local_70.ArrayNum;
    uVar10 = (ulonglong)(int)local_res18;
    local_res20 = local_70.AllocatorInstance.Data + uVar10 * 8;
    FVar12.Data = local_70.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_res20;
      if (local_70.ArrayNum != (int)uVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UMovieGraphOutput_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar12.Data == pFVar3) break;
      this_00 = *(UMovieGraphValueContainer **)FVar12.Data;
      FVar6 = (FName)UMovieGraphValueContainer::GetValueTypeObject(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      EVar4 = UMovieGraphValueContainer::GetValueType(this_00);
      _Src = (void *)this_00[1]._padding_;
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78 = (int)this_00[1]._padding_;
      lVar11 = (longlong)local_78;
      if (local_78 == 0) {
        local_74 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78,0,&local_80,local_78,&local_74);
        memcpy(local_80.Data,_Src,lVar11 * 2);
      }
      iVar9 = local_78 + -1;
      if (local_78 == 0) {
        iVar9 = 0;
      }
      pFVar7 = ::FName::FName(&local_88,iVar9,(wchar_t *)local_80.Data,FNAME_Add);
      local_60 = *pFVar7;
      local_58 = EVar4;
      local_50 = FVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      local_48 = 0x1000000;
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      piVar1 = &__return_storage_ptr__->ArrayMax;
      pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      local_48._0_2_ =
           CONCAT11(*(undefined1 *)&this_00[1].Value.Value.StructMemory,(undefined1)local_48);
      if ((pFVar7 <= &local_60) && (&local_60 < pFVar7 + (longlong)*piVar1 * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x20);
      *pFVar7 = local_60;
      *(EMovieGraphValueType *)&pFVar7[1].ComparisonIndex.Value = local_58;
      pFVar7[2] = local_50;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_50);
      }
      FVar12.Data = FVar12.Data + 8;
      uVar10 = (ulonglong)local_res18;
      *(undefined1 *)&pFVar7[3].ComparisonIndex.Value = (undefined1)local_48;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 1) = local_48._1_1_;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 2) = local_48._2_1_;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 3) = local_48._3_1_;
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2cd30

UClass * __cdecl UMovieGraphOutputNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphOutputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphOutputNode,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphOutputNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutputNode.InnerSingleton;
}

// RegisterDelegates @ 14dd3b5f0

void __thiscall UMovieGraphOutputNode::RegisterDelegates(UMovieGraphOutputNode *this)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphConfig *this_00;
  int iVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
  if (this_00 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetOutputs(this_00,&local_18);
    iVar2 = local_18.ArrayNum;
    pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
    uVar3 = local_18._8_8_;
    FVar4.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar3 != iVar2) {
        `TCheckedPointerIterator<UMovieGraphOutput_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        uVar3 = local_18._8_8_;
      }
      if (FVar4.Data == pFVar1) break;
      FVar4.Data = FVar4.Data + 8;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// RegisterOutputDelegates @ 14dd3b6a0

void __thiscall
UMovieGraphOutputNode::RegisterOutputDelegates
          (UMovieGraphOutputNode *this,UMovieGraphOutput *param_1)

{
  return;
}

// StaticRegisterNativesUMovieGraphOutputNode @ 14dd452f0

void __cdecl UMovieGraphOutputNode::StaticRegisterNativesUMovieGraphOutputNode(void)

{
  return;
}

// UpdateExistingPins @ 14dd48320

void __thiscall
UMovieGraphOutputNode::UpdateExistingPins(UMovieGraphOutputNode *this,UMovieGraphMember *param_1)

{
  undefined1 uVar1;
  void *_Src;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  EMovieGraphValueType EVar5;
  uint uVar6;
  uint uVar7;
  UMovieGraphConfig *this_00;
  FName *pFVar8;
  UObject *pUVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  FName local_res18;
  TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> local_48;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  this_00 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
  if (this_00 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetOutputs(this_00,&local_48);
    if (local_48.ArrayNum == *(int *)&this->field_0x60) {
      uVar13 = 0;
      uVar15 = 0;
      uVar14 = uVar13;
      uVar16 = uVar13;
      if (0 < local_48.ArrayNum) {
        do {
          uVar12 = (uint)uVar13;
          uVar11 = ~uVar12 >> 0x1f;
          uVar6 = uVar15;
          if ((int)uVar12 < local_48.ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_38.Data = (FScriptContainerElement *)0x0;
          local_30 = *(int *)(*(longlong *)(local_48.AllocatorInstance.Data + uVar14) + 0x58);
          lVar10 = (longlong)local_30;
          _Src = *(void **)(*(longlong *)(local_48.AllocatorInstance.Data + uVar14) + 0x50);
          if (local_30 == 0) {
            local_2c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_30,0,&local_38,local_30,&local_2c);
            memcpy(local_38.Data,_Src,lVar10 * 2);
          }
          uVar7 = 0;
          uVar6 = local_30 - 1;
          if (local_30 == 0) {
            uVar6 = uVar7;
          }
          pFVar8 = ::FName::FName(&local_res18,uVar6,(wchar_t *)local_38.Data,FNAME_Add);
          FVar2 = *pFVar8;
          uVar6 = uVar7;
          if ((int)uVar12 < *(int *)&this->field_0x60) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(FName *)(*(longlong *)(*(longlong *)&this->field_0x58 + uVar16 * 8) + 0x30) = FVar2;
          if (local_38.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data);
          }
          uVar6 = uVar15;
          if ((int)uVar12 < local_48.ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          EVar5 = UMovieGraphValueContainer::GetValueType
                            (*(UMovieGraphValueContainer **)
                              (local_48.AllocatorInstance.Data + uVar16 * 8));
          uVar6 = uVar15;
          if ((int)uVar12 < *(int *)&this->field_0x60) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(EMovieGraphValueType *)
           (*(longlong *)(*(longlong *)&this->field_0x58 + uVar16 * 8) + 0x38) = EVar5;
          uVar6 = uVar7;
          if ((int)uVar12 < local_48.ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar9 = UMovieGraphValueContainer::GetValueTypeObject
                             (*(UMovieGraphValueContainer **)
                               (local_48.AllocatorInstance.Data + uVar16 * 8));
          uVar6 = uVar7;
          if ((int)uVar12 < *(int *)&this->field_0x60) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar10 = *(longlong *)(*(longlong *)&this->field_0x58 + uVar16 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          *(UObject **)(lVar10 + 0x40) = pUVar9;
          uVar6 = uVar7;
          if ((int)uVar12 < local_48.ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar1 = *(undefined1 *)
                   (*(longlong *)(local_48.AllocatorInstance.Data + uVar16 * 8) + 0x78);
          if ((int)uVar12 < *(int *)&this->field_0x60) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar13 = (ulonglong)(uVar12 + 1);
          *(undefined1 *)(*(longlong *)(*(longlong *)&this->field_0x58 + uVar16 * 8) + 0x49) = uVar1
          ;
          uVar14 = uVar14 + 8;
          uVar16 = uVar16 + 1;
        } while ((int)(uVar12 + 1) < local_48.ArrayNum);
      }
    }
    TMulticastDelegate<void___cdecl(UMovieGraphNode_const_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UMovieGraphNode_const_*),FDefaultDelegateUserPolicy>
                *)&this->field_0x28,(UMovieGraphNode *)this);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

