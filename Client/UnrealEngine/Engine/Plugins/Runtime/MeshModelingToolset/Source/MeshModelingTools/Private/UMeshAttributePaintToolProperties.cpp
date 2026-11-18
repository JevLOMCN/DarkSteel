// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cc955d0

UClass * __cdecl UMeshAttributePaintToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintToolProperties",
               &Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.InnerSingleton,
               StaticRegisterNativesUMeshAttributePaintToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintToolProperties>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.InnerSingleton;
}

// UMeshAttributePaintToolProperties @ 14ccbbf00

UMeshAttributePaintToolProperties * __thiscall
UMeshAttributePaintToolProperties::UMeshAttributePaintToolProperties
          (UMeshAttributePaintToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolProperties__6B_;
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attribute).Data.ArrayNum = 0;
  (this->Attribute).Data.ArrayMax = 0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  return this;
}

// UMeshAttributePaintToolProperties @ 14ccbbf50

UMeshAttributePaintToolProperties * __thiscall
UMeshAttributePaintToolProperties::UMeshAttributePaintToolProperties
          (UMeshAttributePaintToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolProperties__6B_;
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attribute).Data.ArrayNum = 0;
  (this->Attribute).Data.ArrayMax = 0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  return this;
}

// ~UMeshAttributePaintToolProperties @ 14ccc3a80

void __thiscall
UMeshAttributePaintToolProperties::~UMeshAttributePaintToolProperties
          (UMeshAttributePaintToolProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshAttributePaintToolProperties__6B_;
  DestructItems<FString,int>
            ((FString *)(this->Attributes).AllocatorInstance.Data,(this->Attributes).ArrayNum);
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attribute).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccffc00

UClass * __cdecl UMeshAttributePaintToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintToolProperties",
               &Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.InnerSingleton,
               StaticRegisterNativesUMeshAttributePaintToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintToolProperties>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.InnerSingleton;
}

// GetSelectedAttributeIndex @ 14cd023c0

int __thiscall
UMeshAttributePaintToolProperties::GetSelectedAttributeIndex
          (UMeshAttributePaintToolProperties *this)

{
  int iVar1;
  
  iVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    (&this->Attributes,&this->Attribute);
  return iVar1;
}

// Initialize @ 14cd04500

void __thiscall
UMeshAttributePaintToolProperties::Initialize
          (UMeshAttributePaintToolProperties *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  FString *pFVar1;
  FName *pFVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *this_01;
  uint local_res8 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_00 = &this->Attributes;
  local_res8[0] = 0;
  TArray<FString,TSizedDefaultAllocator<32>_>::Reset(this_00,param_1->ArrayNum);
  this_01 = (FName *)(param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = this_01 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_01 == pFVar2) break;
    pFVar8 = (FScriptContainerElement *)::FName::ToString(this_01,&local_58);
    pFVar10 = (this_00->AllocatorInstance).Data;
    if ((pFVar10 <= pFVar8) && (pFVar8 < pFVar10 + (longlong)(this->Attributes).ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->Attributes).ArrayNum;
    if (iVar7 == (this->Attributes).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this_00->AllocatorInstance,&(this->Attributes).ArrayMax);
      (this->Attributes).ArrayNum = iVar7;
    }
    (this->Attributes).ArrayNum = iVar7 + 1;
    pFVar10 = (this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar10 + 8) = *(int *)&pFVar8[8].field_0x0;
    *(int *)(pFVar10 + 0xc) = *(int *)&pFVar8[0xc].field_0x0;
    *(undefined8 *)&pFVar8[8].field_0x0 = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    this_01 = this_01 + 1;
  }
  if (param_2) {
    if ((this->Attributes).ArrayNum < 1) {
      pFVar9 = ::FString::FString(&local_48,L"");
      bVar5 = false;
      bVar6 = true;
    }
    else {
      pFVar10 = (this_00->AllocatorInstance).Data;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(pFVar10 + 8);
      _Src = *(void **)pFVar10;
      local_68.Data.ArrayNum = iVar3;
      if (iVar3 == 0) {
        local_68.Data.ArrayMax = 0;
        pFVar9 = &local_68;
        bVar5 = true;
        bVar6 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,0,(ForAnyElementType *)&local_68,iVar3,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
        pFVar9 = &local_68;
        bVar5 = true;
        bVar6 = false;
      }
    }
    pFVar1 = &this->Attribute;
    if (pFVar1 != pFVar9) {
      pFVar10 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Attribute).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this->Attribute).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (bVar6) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUMeshAttributePaintToolProperties @ 14cd2ef60

void __cdecl
UMeshAttributePaintToolProperties::StaticRegisterNativesUMeshAttributePaintToolProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateSelectedAttribute @ 14cd3d730

bool __thiscall
UMeshAttributePaintToolProperties::ValidateSelectedAttribute
          (UMeshAttributePaintToolProperties *this,bool param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  
  pFVar1 = &this->Attribute;
  iVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    (&this->Attributes,pFVar1);
  if (iVar4 == -1) {
    if (param_1) {
      bVar3 = (this->Attributes).ArrayNum < 1;
      if (bVar3) {
        pFVar5 = ::FString::FString(&local_38,L"");
      }
      else {
        pFVar5 = ::FString::FString(&local_28,(FString *)(this->Attributes).AllocatorInstance.Data);
      }
      if (pFVar1 != pFVar5) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->Attribute).Data.ArrayNum = (pFVar5->Data).ArrayNum;
        (this->Attribute).Data.ArrayMax = (pFVar5->Data).ArrayMax;
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

// execGetAttributeNames @ 14cd3fbf0

void __cdecl
UMeshAttributePaintToolProperties::execGetAttributeNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FString,TSizedDefaultAllocator<32>_> *)&param_1[4].field_0x20);
  return;
}

