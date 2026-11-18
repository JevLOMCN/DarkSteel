// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 13

// StaticClass @ 14cc95190

UClass * __cdecl UMeshUVChannelProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshUVChannelProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshUVChannelProperties",
               &Z_Registration_Info_UClass_UMeshUVChannelProperties.InnerSingleton,
               StaticRegisterNativesUMeshUVChannelProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshUVChannelProperties>,
               InternalVTableHelperCtorCaller<UMeshUVChannelProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshUVChannelProperties.InnerSingleton;
}

// UMeshUVChannelProperties @ 14ccbdb60

UMeshUVChannelProperties * __thiscall
UMeshUVChannelProperties::UMeshUVChannelProperties
          (UMeshUVChannelProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshUVChannelProperties__6B_;
  (this->UVChannel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVChannel).Data.ArrayNum = 0;
  (this->UVChannel).Data.ArrayMax = 0;
  (this->UVChannelNamesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVChannelNamesList).ArrayNum = 0;
  (this->UVChannelNamesList).ArrayMax = 0;
  return this;
}

// UMeshUVChannelProperties @ 14ccbdbb0

UMeshUVChannelProperties * __thiscall
UMeshUVChannelProperties::UMeshUVChannelProperties
          (UMeshUVChannelProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshUVChannelProperties__6B_;
  (this->UVChannel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVChannel).Data.ArrayNum = 0;
  (this->UVChannel).Data.ArrayMax = 0;
  (this->UVChannelNamesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVChannelNamesList).ArrayNum = 0;
  (this->UVChannelNamesList).ArrayMax = 0;
  return this;
}

// ~UMeshUVChannelProperties @ 14ccc4240

void __thiscall UMeshUVChannelProperties::~UMeshUVChannelProperties(UMeshUVChannelProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshUVChannelProperties__6B_;
  DestructItems<FString,int>
            ((FString *)(this->UVChannelNamesList).AllocatorInstance.Data,
             (this->UVChannelNamesList).ArrayNum);
  pFVar1 = (this->UVChannelNamesList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVChannel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd00730

UClass * __cdecl UMeshUVChannelProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshUVChannelProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshUVChannelProperties",
               &Z_Registration_Info_UClass_UMeshUVChannelProperties.InnerSingleton,
               StaticRegisterNativesUMeshUVChannelProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshUVChannelProperties>,
               InternalVTableHelperCtorCaller<UMeshUVChannelProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshUVChannelProperties.InnerSingleton;
}

// GetSelectedChannelIndex @ 14cd023e0

int __thiscall
UMeshUVChannelProperties::GetSelectedChannelIndex(UMeshUVChannelProperties *this,bool param_1)

{
  int iVar1;
  
  iVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    (&this->UVChannelNamesList,&this->UVChannel);
  if (iVar1 == -1) {
    iVar1 = param_1 - 1;
  }
  return iVar1;
}

// GetUVChannelNamesFunc @ 14cd02e10

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UMeshUVChannelProperties::GetUVChannelNamesFunc(UMeshUVChannelProperties *this)

{
  return &this->UVChannelNamesList;
}

// Initialize @ 14cd04790

/* WARNING: Removing unreachable block (ram,0x00014cd048f8) */

void __thiscall
UMeshUVChannelProperties::Initialize(UMeshUVChannelProperties *this,int param_1,bool param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pTVar2 = &this->UVChannelNamesList;
  iVar12 = 0;
  piVar1 = &(this->UVChannelNamesList).ArrayMax;
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  iVar9 = (this->UVChannelNamesList).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar11,iVar9);
    (this->UVChannelNamesList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar11,iVar9);
    (this->UVChannelNamesList).ArrayNum = 0;
  }
  FVar6.Data = local_58.Data.AllocatorInstance.Data;
  uVar7 = local_58.Data._8_8_;
  if (0 < param_1) {
    do {
      local_58.Data._8_8_ = uVar7;
      local_58.Data.AllocatorInstance.Data = FVar6.Data;
      ::FString::PrintfImpl(&local_58,L"UV %d");
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar11 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->UVChannelNamesList).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->UVChannelNamesList).ArrayNum = iVar9 + 1;
      pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_58.Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
      *(int *)(pFVar11 + 8) = local_58.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      uVar7 = local_58.Data._8_8_;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_1);
  }
  if (param_2) {
    if (param_1 < 1) {
      pFVar10 = ::FString::FString(&local_38,L"");
      bVar5 = false;
      bVar8 = true;
    }
    else {
      if (((this->UVChannelNamesList).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = *(int *)(pFVar11 + 8);
      _Src = *(void **)pFVar11;
      local_48.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        local_48.Data.ArrayMax = 0;
        pFVar10 = &local_48;
        bVar5 = true;
        bVar8 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&local_48,iVar9,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        pFVar10 = &local_48;
        bVar5 = true;
        bVar8 = false;
      }
    }
    pFVar3 = &this->UVChannel;
    if (pFVar3 != pFVar10) {
      pFVar11 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->UVChannel).Data.ArrayNum = (pFVar10->Data).ArrayNum;
      (this->UVChannel).Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Initialize @ 14cd04a60

void __thiscall
UMeshUVChannelProperties::Initialize
          (UMeshUVChannelProperties *this,FMeshDescription *param_1,bool param_2)

{
  FMeshElementContainer *pFVar1;
  FAttributesSetEntry *pFVar2;
  FMeshAttributeArraySetBase *pFVar3;
  
  pFVar1 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar2 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar1->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar2 == (FAttributesSetEntry *)0x0) || (pFVar3 = (pFVar2->Ptr).Ptr, pFVar3->Type != 2)) ||
     (pFVar3->Extent != 1)) {
    pFVar3 = (FMeshAttributeArraySetBase *)0x0;
  }
  Initialize(this,pFVar3[2].Type,param_2);
  return;
}

// Initialize @ 14cd04ad0

void __thiscall
UMeshUVChannelProperties::Initialize
          (UMeshUVChannelProperties *this,FDynamicMesh3 *param_1,bool param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(pFVar1->_padding_ + 0xa8))();
  }
  Initialize(this,iVar2,param_2);
  return;
}

// StaticRegisterNativesUMeshUVChannelProperties @ 14cd2f110

void __cdecl UMeshUVChannelProperties::StaticRegisterNativesUMeshUVChannelProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMeshUVChannelProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateSelection @ 14cd3d830

bool __thiscall
UMeshUVChannelProperties::ValidateSelection(UMeshUVChannelProperties *this,bool param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  
  pFVar1 = &this->UVChannel;
  iVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    (&this->UVChannelNamesList,pFVar1);
  if (iVar4 == -1) {
    if (param_1) {
      bVar3 = (this->UVChannelNamesList).ArrayNum < 1;
      if (bVar3) {
        pFVar5 = ::FString::FString(&local_38,L"");
      }
      else {
        pFVar5 = ::FString::FString(&local_28,
                                    (FString *)(this->UVChannelNamesList).AllocatorInstance.Data);
      }
      if (pFVar1 != pFVar5) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->UVChannel).Data.ArrayNum = (pFVar5->Data).ArrayNum;
        (this->UVChannel).Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (bVar3) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if ((!bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// execGetUVChannelNamesFunc @ 14cd3fda0

void __cdecl
UMeshUVChannelProperties::execGetUVChannelNamesFunc(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FString,TSizedDefaultAllocator<32>_> *)&param_1[4].field_0x20);
  return;
}

