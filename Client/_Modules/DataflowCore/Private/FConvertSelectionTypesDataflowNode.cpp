// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 13

// StaticStruct @ 1443e3d00

UScriptStruct * __cdecl FConvertSelectionTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertSelectionTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton;
}

// GetType @ 1443e3d40

FName __thiscall
FConvertSelectionTypesDataflowNode::GetType(FConvertSelectionTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertSelectionTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e3d70

bool __thiscall
FConvertSelectionTypesDataflowNode::IsA(FConvertSelectionTypesDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FConvertSelectionTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e3dd8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e3dd8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e3df6;
      }
    }
  }
  bVar5 = true;
LAB_1443e3df6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e3e30

FStructOnScope * __thiscall
FConvertSelectionTypesDataflowNode::NewStructOnScope(FConvertSelectionTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertSelectionTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e3eb0

void __thiscall
FConvertSelectionTypesDataflowNode::SerializeInternal
          (FConvertSelectionTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertSelectionTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e3f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e3f40

FName __thiscall
FConvertSelectionTypesDataflowNode::GetDisplayName(FConvertSelectionTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertSelectionTypes");
  return in_RDX;
}

// GetCategory @ 1443e3f70

FName __thiscall
FConvertSelectionTypesDataflowNode::GetCategory(FConvertSelectionTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e3fa0

FString * __thiscall
FConvertSelectionTypesDataflowNode::GetTags
          (FConvertSelectionTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e3fd0

UScriptStruct * __thiscall
FConvertSelectionTypesDataflowNode::TypedScriptStruct(FConvertSelectionTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertSelectionTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 1443e4050

/* WARNING: Removing unreachable block (ram,0x0001443e4278) */
/* WARNING: Removing unreachable block (ram,0x0001443e4286) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FConvertSelectionTypesDataflowNode::GetRenderParametersImpl
          (FConvertSelectionTypesDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FString *pFVar5;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = ::FName::FName(&local_res20,"3DView");
  ::FName::FName(&local_res10,"Collection");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  ::FName::FName(&local_res18,"FGeometryCollection");
  pFVar5 = ::FString::FString(&local_78,"SurfaceRender");
  ::FString::FString(&local_68,pFVar5);
  _Src.Data = local_88.Data;
  local_58 = local_res18;
  lVar8 = (longlong)local_80;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_80);
  if (local_80 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_50,local_80,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar8 << 3);
  }
  local_40 = *pFVar4;
  pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x30;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar7 + 0x10) = local_58;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar7 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar7 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar7 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 1443e42c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConvertSelectionTypesDataflowNode::Evaluate
          (FConvertSelectionTypesDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowSelectionTypes *pFVar1;
  bool bVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  FManagedArrayCollection *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined1 auStack_358 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_338;
  FConnectionReference local_328;
  FCollectionTransformSelectionFacade local_308;
  FDataflowSelection local_98;
  FDataflowSelection local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_358;
  pFVar5 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  local_328.Reference = pFVar5;
  if ((FDataflowSelectionTypes *)puVar3 != &this->Out) {
    puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar3 != pFVar5) {
      return;
    }
    local_328.ContainerReference = (void *)0x0;
    local_328.Index = -1;
    FDataflowNode::SafeForwardInput<FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_328,pFVar5);
    return;
  }
  local_328.ContainerReference = (void *)0x0;
  local_328.Index = -1;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
  pFVar5 = FDataflowInput::GetValue<FManagedArrayCollection>(pFVar4,param_1,pFVar5);
  pFVar1 = &this->In;
  local_328.Index = -1;
  local_328.ContainerReference = (void *)0x0;
  local_328.Reference = pFVar1;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
  FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>
            (pFVar4,&local_70,param_1,&pFVar1->Value);
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_308,pFVar5);
  local_328.Index = -1;
  local_328.ContainerReference = (void *)0x0;
  local_328.Reference = pFVar1;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
  if (pFVar4 == (FDataflowInput *)0x0) goto LAB_1443e49bc;
  ::FName::FName((FName *)&local_338,L"FDataflowTransformSelection");
  if ((FScriptContainerElement *)pFVar4->_padding_ == local_338.AllocatorInstance.Data) {
    ::FName::FName((FName *)&local_338,L"FDataflowFaceSelection");
    if ((FScriptContainerElement *)param_2->_padding_ == local_338.AllocatorInstance.Data) {
      pTVar6 = FDataflowSelection::AsArray
                         (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      ConvertTransformSelectionToFaceSelection(&local_308,&local_338,pTVar6);
      goto LAB_1443e4420;
    }
    ::FName::FName((FName *)&local_338,L"FDataflowVertexSelection");
    if ((FScriptContainerElement *)param_2->_padding_ == local_338.AllocatorInstance.Data) {
      pTVar6 = FDataflowSelection::AsArray
                         (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      ConvertTransformSelectionToVertexSelection(&local_308,&local_338,pTVar6);
LAB_1443e447a:
      local_98.GroupName = FDataflowVertexSelection::VerticesGroupName;
      if (local_328.Reference != (FDataflowSelectionTypes *)0x0) {
        FMemory::Free(local_328.Reference);
        local_98.GroupName = FDataflowVertexSelection::VerticesGroupName;
      }
    }
    else {
      ::FName::FName((FName *)&local_338,L"FDataflowGeometrySelection");
      if ((FScriptContainerElement *)param_2->_padding_ == local_338.AllocatorInstance.Data) {
        pTVar6 = FDataflowSelection::AsArray
                           (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertTransformSelectionToGeometrySelection(&local_308,&local_338,pTVar6);
        goto LAB_1443e493f;
      }
      bVar2 = FDataflowConnection::IsType<FDataflowCurveSelection>((FDataflowConnection *)param_2);
      if (!bVar2) goto LAB_1443e49bc;
      pTVar6 = FDataflowSelection::AsArray
                         (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      ConvertTransformSelectionToCurveSelection(&local_308,&local_338,pTVar6);
LAB_1443e450c:
      local_98.GroupName = FDataflowCurveSelection::CurveGroupName;
      if (local_328.Reference != (FDataflowSelectionTypes *)0x0) {
        FMemory::Free(local_328.Reference);
        local_98.GroupName = FDataflowCurveSelection::CurveGroupName;
      }
    }
  }
  else {
    ::FName::FName((FName *)&local_338,L"FDataflowFaceSelection");
    if ((FScriptContainerElement *)pFVar4->_padding_ == local_338.AllocatorInstance.Data) {
      bVar2 = FDataflowConnection::IsType<FDataflowTransformSelection>
                        ((FDataflowConnection *)param_2);
      if (bVar2) {
        bVar2 = this->bAllElementsMustBeSelected;
        pTVar6 = FDataflowSelection::AsArray
                           (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertFaceSelectionToTransformSelection(&local_308,&local_338,pTVar6,bVar2);
LAB_1443e4575:
        local_98.GroupName = FDataflowTransformSelection::TransformGroupName;
        if (local_328.Reference != (FDataflowSelectionTypes *)0x0) {
          FMemory::Free(local_328.Reference);
          local_98.GroupName = FDataflowTransformSelection::TransformGroupName;
        }
      }
      else {
        bVar2 = FDataflowConnection::IsType<FDataflowVertexSelection>
                          ((FDataflowConnection *)param_2);
        if (bVar2) {
          pTVar6 = FDataflowSelection::AsArray
                             (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          ConvertFaceSelectionToVertexSelection(&local_308,&local_338,pTVar6);
          goto LAB_1443e447a;
        }
        bVar2 = FDataflowConnection::IsType<FDataflowGeometrySelection>
                          ((FDataflowConnection *)param_2);
        if (!bVar2) {
          bVar2 = FDataflowConnection::IsType<FDataflowCurveSelection>
                            ((FDataflowConnection *)param_2);
          if (!bVar2) goto LAB_1443e49bc;
          bVar2 = this->bAllElementsMustBeSelected;
          pTVar6 = FDataflowSelection::AsArray
                             (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          ConvertFaceSelectionToCurveSelection(&local_308,&local_338,pTVar6,bVar2);
          goto LAB_1443e450c;
        }
        bVar2 = this->bAllElementsMustBeSelected;
        pTVar6 = FDataflowSelection::AsArray
                           (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertFaceSelectionToGeometrySelection(&local_308,&local_338,pTVar6,bVar2);
LAB_1443e493f:
        local_98.GroupName = FDataflowGeometrySelection::GeometryGroupName;
        if (local_328.Reference != (FDataflowSelectionTypes *)0x0) {
          FMemory::Free(local_328.Reference);
          local_98.GroupName = FDataflowGeometrySelection::GeometryGroupName;
        }
      }
    }
    else {
      ::FName::FName((FName *)&local_338,L"FDataflowVertexSelection");
      if ((FScriptContainerElement *)pFVar4->_padding_ == local_338.AllocatorInstance.Data) {
        bVar2 = FDataflowConnection::IsType<FDataflowTransformSelection>
                          ((FDataflowConnection *)param_2);
        if (bVar2) {
          bVar2 = this->bAllElementsMustBeSelected;
          pTVar6 = FDataflowSelection::AsArray
                             (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          ConvertVertexSelectionToTransformSelection(&local_308,&local_338,pTVar6,bVar2);
          goto LAB_1443e4575;
        }
        bVar2 = FDataflowConnection::IsType<FDataflowFaceSelection>((FDataflowConnection *)param_2);
        if (!bVar2) {
          bVar2 = FDataflowConnection::IsType<FDataflowGeometrySelection>
                            ((FDataflowConnection *)param_2);
          if (!bVar2) {
            bVar2 = FDataflowConnection::IsType<FDataflowCurveSelection>
                              ((FDataflowConnection *)param_2);
            if (!bVar2) goto LAB_1443e49bc;
            bVar2 = this->bAllElementsMustBeSelected;
            pTVar6 = FDataflowSelection::AsArray
                               (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
            GeometryCollection::Facades::FCollectionTransformSelectionFacade::
            ConvertVertexSelectionToCurveSelection(&local_308,&local_338,pTVar6,bVar2);
            goto LAB_1443e450c;
          }
          bVar2 = this->bAllElementsMustBeSelected;
          pTVar6 = FDataflowSelection::AsArray
                             (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          ConvertVertexSelectionToGeometrySelection(&local_308,&local_338,pTVar6,bVar2);
          goto LAB_1443e493f;
        }
        bVar2 = this->bAllElementsMustBeSelected;
        pTVar6 = FDataflowSelection::AsArray
                           (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
        GeometryCollection::Facades::FCollectionTransformSelectionFacade::
        ConvertVertexSelectionToFaceSelection(&local_308,&local_338,pTVar6,bVar2);
      }
      else {
        bVar2 = FDataflowConnection::IsType<FDataflowGeometrySelection>
                          ((FDataflowConnection *)pFVar4);
        if (bVar2) {
          bVar2 = FDataflowConnection::IsType<FDataflowTransformSelection>
                            ((FDataflowConnection *)param_2);
          if (bVar2) {
            pTVar6 = FDataflowSelection::AsArray
                               (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
            GeometryCollection::Facades::FCollectionTransformSelectionFacade::
            ConvertGeometrySelectionToTransformSelection(&local_308,&local_338,pTVar6);
            goto LAB_1443e4575;
          }
          bVar2 = FDataflowConnection::IsType<FDataflowFaceSelection>
                            ((FDataflowConnection *)param_2);
          if (!bVar2) {
            bVar2 = FDataflowConnection::IsType<FDataflowVertexSelection>
                              ((FDataflowConnection *)param_2);
            if (!bVar2) {
              bVar2 = FDataflowConnection::IsType<FDataflowCurveSelection>
                                ((FDataflowConnection *)param_2);
              if (!bVar2) goto LAB_1443e49bc;
              pTVar6 = FDataflowSelection::AsArray
                                 (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
              GeometryCollection::Facades::FCollectionTransformSelectionFacade::
              ConvertGeometrySelectionToCurveSelection(&local_308,&local_338,pTVar6);
              goto LAB_1443e450c;
            }
            pTVar6 = FDataflowSelection::AsArray
                               (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
            GeometryCollection::Facades::FCollectionTransformSelectionFacade::
            ConvertGeometrySelectionToVertexSelection(&local_308,&local_338,pTVar6);
            goto LAB_1443e447a;
          }
          pTVar6 = FDataflowSelection::AsArray
                             (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          ConvertGeometrySelectionToFaceSelection(&local_308,&local_338,pTVar6);
        }
        else {
          bVar2 = FDataflowConnection::IsType<FDataflowCurveSelection>
                            ((FDataflowConnection *)pFVar4);
          if (!bVar2) goto LAB_1443e49bc;
          bVar2 = FDataflowConnection::IsType<FDataflowTransformSelection>
                            ((FDataflowConnection *)param_2);
          if (bVar2) {
            bVar2 = this->bAllElementsMustBeSelected;
            pTVar6 = FDataflowSelection::AsArray
                               (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
            GeometryCollection::Facades::FCollectionTransformSelectionFacade::
            ConvertCurveSelectionToTransformSelection(&local_308,&local_338,pTVar6,bVar2);
            goto LAB_1443e4575;
          }
          bVar2 = FDataflowConnection::IsType<FDataflowFaceSelection>
                            ((FDataflowConnection *)param_2);
          if (!bVar2) {
            bVar2 = FDataflowConnection::IsType<FDataflowVertexSelection>
                              ((FDataflowConnection *)param_2);
            if (!bVar2) {
              bVar2 = FDataflowConnection::IsType<FDataflowGeometrySelection>
                                ((FDataflowConnection *)param_2);
              if (!bVar2) goto LAB_1443e49bc;
              bVar2 = this->bAllElementsMustBeSelected;
              pTVar6 = FDataflowSelection::AsArray
                                 (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
              GeometryCollection::Facades::FCollectionTransformSelectionFacade::
              ConvertCurveSelectionToGeometrySelection(&local_308,&local_338,pTVar6,bVar2);
              goto LAB_1443e493f;
            }
            pTVar6 = FDataflowSelection::AsArray
                               (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
            GeometryCollection::Facades::FCollectionTransformSelectionFacade::
            ConvertCurveSelectionToVertexSelection(&local_308,&local_338,pTVar6);
            goto LAB_1443e447a;
          }
          pTVar6 = FDataflowSelection::AsArray
                             (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_328);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          ConvertCurveSelectionToFaceSelection(&local_308,&local_338,pTVar6);
        }
      }
LAB_1443e4420:
      local_98.GroupName = FDataflowFaceSelection::FacesGroupName;
      if (local_328.Reference != (FDataflowSelectionTypes *)0x0) {
        FMemory::Free(local_328.Reference);
        local_98.GroupName = FDataflowFaceSelection::FacesGroupName;
      }
    }
  }
  local_98.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.SelectionArray.NumBits = 0;
  local_98.SelectionArray.MaxBits = 0x80;
  FDataflowSelection::InitFromArray(&local_98,pFVar5,&local_338);
  FDataflowNode::SetValue<FDataflowSelectionTypes>
            ((FDataflowNode *)this,param_1,&local_98,&this->Out);
  if (local_98.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_98.SelectionArray.AllocatorInstance.SecondaryData);
  }
  if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.AllocatorInstance.Data);
  }
LAB_1443e49bc:
  if (local_70.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
  }
  return;
}

// FConvertSelectionTypesDataflowNode @ 14442aae0

FConvertSelectionTypesDataflowNode * __thiscall
FConvertSelectionTypesDataflowNode::FConvertSelectionTypesDataflowNode
          (FConvertSelectionTypesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowSelectionTypes *pFVar1;
  FDataflowSelectionTypes *pFVar2;
  code *pcVar3;
  bool bVar4;
  FDataflowInput *pFVar5;
  FConvertSelectionTypesDataflowNode *pFVar6;
  FDataflowOutput *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  FConnectionReference local_c8;
  FConnectionReference local_b0;
  FConnectionReference local_98;
  FConnectionReference local_80;
  FConnectionReference local_68;
  FGuid local_48;
  
  local_48.A = param_2->A;
  local_48.B = param_2->B;
  local_48.C = param_2->C;
  local_48.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_48);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FConvertSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->In;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (pFVar1->Value).GroupName.ComparisonIndex = 0;
  (pFVar1->Value).GroupName.Number = 0;
  pFVar2 = &this->Out;
  (this->In).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->In).Value.SelectionArray.NumBits = 0;
  (this->In).Value.SelectionArray.MaxBits = 0x80;
  this->bAllElementsMustBeSelected = false;
  (pFVar2->Value).GroupName.ComparisonIndex = 0;
  (pFVar2->Value).GroupName.Number = 0;
  (this->Out).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Out).Value.SelectionArray.NumBits = 0;
  (this->Out).Value.SelectionArray.MaxBits = 0x80;
  local_c8.Index = -1;
  local_c8.ContainerReference = (void *)0x0;
  local_c8.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_c8,&local_res8);
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_b0.Index = -1;
  local_b0.ContainerReference = (void *)0x0;
  local_b0.Reference = pFVar1;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_b0,&local_res18);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FConvertSelectionTypesDataflowNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_80.Index = -1;
  local_80.ContainerReference = (void *)0x0;
  local_98.Index = -1;
  local_98.ContainerReference = (void *)0x0;
  local_98.Reference = this_00;
  local_80.Reference = this_00;
  pFVar7 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_98,&local_res20);
  if (this_00 != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar7,&local_80);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d0 = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar2;
  pFVar7 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_e8);
  if (pFVar7->_padding_ == 0) {
    pFVar7->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FConvertSelectionTypesDataflowNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  return this;
}

// FConvertSelectionTypesDataflowNode @ 14442ace0

FConvertSelectionTypesDataflowNode * __thiscall
FConvertSelectionTypesDataflowNode::FConvertSelectionTypesDataflowNode
          (FConvertSelectionTypesDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FConvertSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->In).Value.GroupName.ComparisonIndex = 0;
  (this->In).Value.GroupName.Number = 0;
  (this->In).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->In).Value.SelectionArray.NumBits = 0;
  (this->In).Value.SelectionArray.MaxBits = 0x80;
  this->bAllElementsMustBeSelected = false;
  (this->Out).Value.GroupName.ComparisonIndex = 0;
  (this->Out).Value.GroupName.Number = 0;
  (this->Out).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Out).Value.SelectionArray.NumBits = 0;
  (this->Out).Value.SelectionArray.MaxBits = 0x80;
  return this;
}

