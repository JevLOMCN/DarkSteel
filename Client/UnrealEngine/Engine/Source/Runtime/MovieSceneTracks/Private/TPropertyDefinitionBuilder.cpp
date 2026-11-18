// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// AddSoleChannel @ 14663ad80

TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_> *
__thiscall
UE::MovieScene::
TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::
AddSoleChannel(TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
               *this,TComponentTypeID<double> param_1)

{
  int *piVar1;
  FPropertyDefinition *pFVar2;
  FPropertyRegistry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_> *pTVar8;
  FPropertyDefinition *pFVar9;
  uint local_28 [2];
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar7 = (this->Registry->Properties).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar2 = this->Definition;
  local_20.ArrayNum = iVar7;
  pFVar9 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar2 != pFVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  if (this->Definition->CompositeSize != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition->CompositeSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a7,L"Property already has a composite.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = this->Registry;
  local_28[0] = (uint)(ushort)param_1;
  pFVar4 = (pFVar3->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar4 + (longlong)(pFVar3->CompositeDefinitions).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (pFVar3->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar3->CompositeDefinitions).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar3->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar3->CompositeDefinitions).ArrayNum = iVar7 + 1;
  *(uint *)((pFVar3->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_28[0];
  this->Definition->CompositeSize = 1;
  this->Definition->DoubleCompositeMask = 1;
  return this;
}

// AddSoleChannel @ 14663af20

TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_> *
__thiscall
UE::MovieScene::
TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
AddSoleChannel(TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
               *this,TComponentTypeID<unsigned_char> param_1)

{
  int *piVar1;
  FPropertyDefinition *pFVar2;
  FPropertyRegistry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
  *pTVar8;
  FPropertyDefinition *pFVar9;
  uint local_28 [2];
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar7 = (this->Registry->Properties).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar2 = this->Definition;
  local_20.ArrayNum = iVar7;
  pFVar9 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar2 != pFVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  if (this->Definition->CompositeSize != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition->CompositeSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a7,L"Property already has a composite.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = this->Registry;
  local_28[0] = (uint)(ushort)param_1;
  pFVar4 = (pFVar3->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar4 + (longlong)(pFVar3->CompositeDefinitions).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (pFVar3->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar3->CompositeDefinitions).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar3->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar3->CompositeDefinitions).ArrayNum = iVar7 + 1;
  *(uint *)((pFVar3->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_28[0];
  this->Definition->CompositeSize = 1;
  return this;
}

// AddSoleChannel @ 14663b0b0

TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> * __thiscall
UE::MovieScene::TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_>::
AddSoleChannel(TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *this,
              TComponentTypeID<double> param_1)

{
  int *piVar1;
  FPropertyDefinition *pFVar2;
  FPropertyRegistry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *pTVar8;
  FPropertyDefinition *pFVar9;
  uint local_28 [2];
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar7 = (this->Registry->Properties).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  pFVar2 = this->Definition;
  local_20.ArrayNum = iVar7;
  pFVar9 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar2 != pFVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  if (this->Definition->CompositeSize != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition->CompositeSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a7,L"Property already has a composite.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = this->Registry;
  local_28[0] = (uint)(ushort)param_1;
  pFVar4 = (pFVar3->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar4 + (longlong)(pFVar3->CompositeDefinitions).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (pFVar3->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar3->CompositeDefinitions).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar3->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar3->CompositeDefinitions).ArrayNum = iVar7 + 1;
  *(uint *)((pFVar3->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_28[0];
  this->Definition->CompositeSize = 1;
  this->Definition->DoubleCompositeMask = 1;
  return this;
}

// AddSoleChannel @ 14663b250

TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> * __thiscall
UE::MovieScene::TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::
AddSoleChannel(TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *this,
              TComponentTypeID<FText> param_1)

{
  int *piVar1;
  FPropertyDefinition *pFVar2;
  FPropertyRegistry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *pTVar8;
  FPropertyDefinition *pFVar9;
  uint local_28 [2];
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar7 = (this->Registry->Properties).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  pFVar2 = this->Definition;
  local_20.ArrayNum = iVar7;
  pFVar9 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar2 != pFVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  if (this->Definition->CompositeSize != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition->CompositeSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a7,L"Property already has a composite.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = this->Registry;
  local_28[0] = (uint)(ushort)param_1;
  pFVar4 = (pFVar3->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar4 + (longlong)(pFVar3->CompositeDefinitions).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (pFVar3->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar3->CompositeDefinitions).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar3->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar3->CompositeDefinitions).ArrayNum = iVar7 + 1;
  *(uint *)((pFVar3->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_28[0];
  this->Definition->CompositeSize = 1;
  return this;
}

// AddSoleChannel @ 14663b3e0

TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> * __thiscall
UE::MovieScene::TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits>::AddSoleChannel
          (TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> *this,
          TComponentTypeID<double> param_1)

{
  int *piVar1;
  FPropertyDefinition *pFVar2;
  FPropertyRegistry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> *pTVar8;
  FPropertyDefinition *pFVar9;
  uint local_28 [2];
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar7 = (this->Registry->Properties).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar2 = this->Definition;
  local_20.ArrayNum = iVar7;
  pFVar9 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar2 != pFVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> *)(*pcVar5)();
      return pTVar8;
    }
  }
  if (this->Definition->CompositeSize != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition->CompositeSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a7,L"Property already has a composite.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = this->Registry;
  local_28[0] = (uint)(ushort)param_1;
  pFVar4 = (pFVar3->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar4 + (longlong)(pFVar3->CompositeDefinitions).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (pFVar3->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar3->CompositeDefinitions).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar3->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar3->CompositeDefinitions).ArrayNum = iVar7 + 1;
  *(uint *)((pFVar3->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_28[0];
  this->Definition->CompositeSize = 1;
  this->Definition->DoubleCompositeMask = 1;
  return this;
}

// AddSoleChannel @ 14663b580

TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> * __thiscall
UE::MovieScene::TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits>::AddSoleChannel
          (TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> *this,
          TComponentTypeID<UE::MovieScene::FObjectComponent> param_1)

{
  int *piVar1;
  FPropertyDefinition *pFVar2;
  FPropertyRegistry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> *pTVar8;
  FPropertyDefinition *pFVar9;
  uint local_28 [2];
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar7 = (this->Registry->Properties).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar2 = this->Definition;
  local_20.ArrayNum = iVar7;
  pFVar9 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar2 != pFVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> *)(*pcVar5)();
      return pTVar8;
    }
  }
  if (this->Definition->CompositeSize != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition->CompositeSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x2a7,L"Property already has a composite.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar3 = this->Registry;
  local_28[0] = (uint)(ushort)param_1;
  pFVar4 = (pFVar3->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar4 + (longlong)(pFVar3->CompositeDefinitions).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (pFVar3->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar3->CompositeDefinitions).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar3->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar3->CompositeDefinitions).ArrayNum = iVar7 + 1;
  *(uint *)((pFVar3->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_28[0];
  this->Definition->CompositeSize = 1;
  return this;
}

// Commit @ 146651000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::Commit
          (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
           *this)

{
  FPropertyDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar5;
  undefined1 auStack_78 [32];
  uchar local_58 [8];
  undefined **local_50;
  uchar local_48 [4];
  undefined4 local_44;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_40;
  uchar local_38 [24];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_44 = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_20 = local_20 | 3;
  pFVar1 = this->Definition;
  local_38[0] = local_58[0];
  local_38[1] = local_58[1];
  local_38[2] = local_58[2];
  local_38[3] = local_58[3];
  local_40 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_EE_00_MovieScene_UE__E_MovieScene_UE__6B_
  ;
  local_48[0] = local_58[0];
  local_48[1] = local_58[1];
  local_48[2] = local_58[2];
  local_48[3] = local_58[3];
  local_50 = &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_EE_00_MovieScene_UE__E_MovieScene_UE__6B_
  ;
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar5 = local_40;
  }
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar4 = local_40;
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar1->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_40;
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_40);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(this->Definition);
  return;
}

