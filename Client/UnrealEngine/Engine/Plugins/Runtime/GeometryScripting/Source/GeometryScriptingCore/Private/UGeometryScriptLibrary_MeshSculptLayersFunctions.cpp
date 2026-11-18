// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 29

// StaticClass @ 14ce1cc00

UClass * __cdecl UGeometryScriptLibrary_MeshSculptLayersFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSculptLayersFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSculptLayersFunctions
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSculptLayersFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSculptLayersFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshSculptLayersFunctions @ 14ce26b20

UGeometryScriptLibrary_MeshSculptLayersFunctions * __thiscall
UGeometryScriptLibrary_MeshSculptLayersFunctions::UGeometryScriptLibrary_MeshSculptLayersFunctions
          (UGeometryScriptLibrary_MeshSculptLayersFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSculptLayersFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshSculptLayersFunctions @ 14ce26b50

UGeometryScriptLibrary_MeshSculptLayersFunctions * __thiscall
UGeometryScriptLibrary_MeshSculptLayersFunctions::UGeometryScriptLibrary_MeshSculptLayersFunctions
          (UGeometryScriptLibrary_MeshSculptLayersFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSculptLayersFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshSculptLayersFunctions @ 14ce273f0

void __thiscall
UGeometryScriptLibrary_MeshSculptLayersFunctions::~UGeometryScriptLibrary_MeshSculptLayersFunctions
          (UGeometryScriptLibrary_MeshSculptLayersFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSculptLayersFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce3ae60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshSculptLayersFunctions::GetSculptLayerWeightsArray'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  
  pFVar4 = (param_1->AttributeSet).Ptr;
  if ((pFVar4 == (FDynamicMeshAttributeSet *)0x0) ||
     ((pFVar4->SculptLayers).Layers.Array.ArrayNum == 0)) {
    if (1 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return;
    }
  }
  else {
    _Src = (pFVar4->SculptLayers).LayerWeights.AllocatorInstance.Data;
    iVar2 = (pFVar4->SculptLayers).LayerWeights.ArrayNum;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = *(ForAnyElementType **)this;
    iVar3 = *(int *)((longlong)&pFVar5[1].Data + 4);
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    *(int *)&pFVar5[1].Data = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,iVar3,pFVar5,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy(pFVar5->Data,_Src,(longlong)iVar2 << 3);
        return;
      }
    }
  }
  return;
}

// operator() @ 14ce3d2f0

void __thiscall
`UGeometryScriptLibrary_MeshSculptLayersFunctions::MergeSculptLayers'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  int iVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FText *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FText local_18;
  
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) {
    pwVar7 = L"MergeSculptLayers: TargetMesh does not have attributes enabled";
    pwVar6 = L"MergeSculptLayers_NoAttribs";
  }
  else {
    if (&pFVar3->SculptLayers == (FDynamicMeshSculptLayers *)0x0) {
      return;
    }
    iVar1 = *(int *)this;
    if ((-1 < iVar1) && (iVar2 = (pFVar3->SculptLayers).Layers.Array.ArrayNum, iVar1 < iVar2)) {
      iVar2 = iVar2 + -1;
      iVar5 = *(int *)((longlong)this + 4) + iVar1;
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      if (iVar5 <= iVar1) {
        return;
      }
      UE::Geometry::FDynamicMeshSculptLayers::MergeSculptLayers
                (&pFVar3->SculptLayers,iVar1,iVar5,*(bool *)((longlong)this + 0x10));
      return;
    }
    pwVar7 = L"MergeSculptLayers: Requested merge start layer not found on TargetMesh.";
    pwVar6 = L"MergeSculptLayers_LayerNotFound";
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",pwVar6,pwVar7);
  UE::Geometry::AppendError(*(UGeometryScriptDebug **)((longlong)this + 0x18),InvalidInputs,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce40dd0

void __thiscall
`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetActiveSculptLayer'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FText *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FText local_18;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 == (FDynamicMeshAttributeSet *)0x0) {
    pwVar5 = L"SetActiveSculptLayer: TargetMesh does not have attributes enabled";
    pwVar4 = L"SetActiveSculptLayer_NoAttribs";
  }
  else {
    iVar1 = *(int *)this;
    if ((-1 < iVar1) && (iVar1 < (pFVar2->SculptLayers).Layers.Array.ArrayNum)) {
      UE::Geometry::FDynamicMeshSculptLayers::SetActiveLayer(&pFVar2->SculptLayers,iVar1);
      return;
    }
    pwVar5 = 
    L"SetActiveSculptLayer: Requested sculpt layer was not enabled on TargetMesh. Use EnableSculptLayers first."
    ;
    pwVar4 = L"SetActiveSculptLayer_LayerNotFound";
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",pwVar4,pwVar5);
  UE::Geometry::AppendError(*(UGeometryScriptDebug **)((longlong)this + 8),InvalidInputs,pFVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce41ce0

void __thiscall
`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeight'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FText local_48;
  TArrayView<double_const_,int> local_38;
  FText local_28 [2];
  
  pFVar4 = (param_1->AttributeSet).Ptr;
  if (pFVar4 == (FDynamicMeshAttributeSet *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetSculptLayerWeight_NoAttribs",
                        L"SetSculptLayerWeight: TargetMesh does not have attributes enabled");
    UE::Geometry::AppendError
              (*(UGeometryScriptDebug **)((longlong)this + 0x18),InvalidInputs,pFVar8);
  }
  else {
    if ((-1 < *(int *)this) && (*(int *)this < (pFVar4->SculptLayers).Layers.Array.ArrayNum)) {
      _Src = (pFVar4->SculptLayers).LayerWeights.AllocatorInstance.Data;
      iVar2 = (pFVar4->SculptLayers).LayerWeights.ArrayNum;
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = iVar2;
      if (iVar2 == 0) {
        local_5c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,&local_68,iVar2,&local_5c);
        memcpy(local_68.Data,_Src,(longlong)iVar2 << 3);
      }
      uVar3 = *(uint *)this;
      uVar1 = *(undefined8 *)((longlong)this + 8);
      uVar7 = 0;
      if ((int)uVar3 < local_60) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = local_60;
      *(undefined8 *)(local_68.Data + (longlong)(int)uVar3 * 8) = uVar1;
      pFVar4 = (param_1->AttributeSet).Ptr;
      pFVar9 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar9 = pFVar4;
      }
      local_58 = local_68.Data;
      if ((local_60 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_50 = iVar2;
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = iVar2;
      local_38.DataPtr = (double *)local_58;
      UE::Geometry::FDynamicMeshSculptLayers::UpdateLayerWeights(&pFVar9->SculptLayers,&local_38);
      if (**(char **)((longlong)this + 0x10) != '\0') {
        UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals(param_1,false,true,true,true);
      }
      if (local_68.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_68.Data);
      return;
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (local_28,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetSculptLayerWeight_LayerNotFound",
                        L"SetSculptLayerWeight: Requested sculpt layer was not enabled on TargetMesh. Use EnableSculptLayers first."
                       );
    UE::Geometry::AppendError
              (*(UGeometryScriptDebug **)((longlong)this + 0x18),InvalidInputs,pFVar8);
    local_48.TextData.Reference = local_28[0].TextData.Reference;
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce41f80

void __thiscall
`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeightsArray'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *_Src;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FText *pFVar6;
  int iVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  FDynamicMeshAttributeSet *pFVar11;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FText local_68;
  TArrayView<double_const_,int> local_58;
  FText local_48 [2];
  
  pFVar10 = (param_1->AttributeSet).Ptr;
  if (pFVar10 == (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetSculptLayerWeight_NoAttribs",
                        L"SetSculptLayerWeight: TargetMesh does not have attributes enabled");
    UE::Geometry::AppendError
              (*(UGeometryScriptDebug **)((longlong)this + 0x10),InvalidInputs,pFVar6);
  }
  else {
    if ((0 < *(int *)(*(longlong *)this + 8)) && (0 < (pFVar10->SculptLayers).Layers.Array.ArrayNum)
       ) {
      _Src = (pFVar10->SculptLayers).LayerWeights.AllocatorInstance.Data;
      iVar7 = (pFVar10->SculptLayers).LayerWeights.ArrayNum;
      if ((iVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (FDynamicMeshAttributeSet *)0x0;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = iVar7;
      if (iVar7 == 0) {
        local_7c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar7,0,&local_88,iVar7,&local_7c);
        memcpy(local_88.Data,_Src,(longlong)iVar7 << 3);
      }
      iVar7 = *(int *)(*(longlong *)this + 8);
      if (local_80 < *(int *)(*(longlong *)this + 8)) {
        iVar7 = local_80;
      }
      pFVar9 = pFVar10;
      pFVar11 = pFVar10;
      if (0 < iVar7) {
        do {
          plVar2 = *(longlong **)this;
          uVar8 = (uint)pFVar9;
          uVar5 = 0;
          if ((int)uVar8 < (int)plVar2[1]) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
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
          uVar1 = *(undefined8 *)(*plVar2 + (longlong)pFVar11 * 8);
          uVar5 = 0;
          if ((int)uVar8 < local_80) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
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
          *(undefined8 *)(local_88.Data + (longlong)pFVar11 * 8) = uVar1;
          pFVar11 = (FDynamicMeshAttributeSet *)((longlong)&pFVar11->_padding_ + 1);
          pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar8 + 1);
        } while ((longlong)pFVar11 < (longlong)iVar7);
      }
      iVar7 = local_80;
      pFVar9 = (param_1->AttributeSet).Ptr;
      if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar10 = pFVar9;
      }
      local_78 = local_88.Data;
      if ((local_80 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_70 = iVar7;
      local_58._12_4_ = uStack_6c;
      local_58.ArrayNum = iVar7;
      local_58.DataPtr = (double *)local_78;
      UE::Geometry::FDynamicMeshSculptLayers::UpdateLayerWeights(&pFVar10->SculptLayers,&local_58);
      if (**(char **)((longlong)this + 8) != '\0') {
        UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals(param_1,false,true,true,true);
      }
      if (local_88.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_88.Data);
      return;
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (local_48,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetActiveSculptLayer_LayerNotFound",
                        L"SetActiveSculptLayer: Requested sculpt layer was not enabled on TargetMesh. Use EnableSculptLayers first."
                       );
    UE::Geometry::AppendError
              (*(UGeometryScriptDebug **)((longlong)this + 0x10),InvalidInputs,pFVar6);
    local_68.TextData.Reference = local_48[0].TextData.Reference;
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return;
}

// DiscardSculptLayers @ 14ce68650

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::DiscardSculptLayers
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"DiscardSculptLayers_InvalidInput",
                        L"DiscardSculptLayers: TargetMesh is Null");
    UE::Geometry::AppendError(param_2,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::DiscardSculptLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// EnableSculptLayers @ 14ce68960

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::EnableSculptLayers
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  int local_res8 [2];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"EnableSculptLayers_InvalidInput",L"EnableSculptLayers: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::EnableSculptLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_res8[0] = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// GetActiveSculptLayer @ 14ce6a370

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::GetActiveSculptLayer(UDynamicMesh *param_1)

{
  int local_res8 [2];
  int *local_res10 [3];
  code *local_18;
  undefined4 **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (1 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return -1;
  }
  local_res10[0] = local_res8;
  local_res8[0] = -1;
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::GetActiveSculptLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return local_res8[0];
}

// GetNumSculptLayers @ 14ce6c6f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::GetNumSculptLayers(UDynamicMesh *param_1)

{
  int local_res8 [2];
  int *local_res10 [3];
  code *local_18;
  undefined4 **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (1 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return -1;
  }
  local_res10[0] = local_res8;
  local_res8[0] = -1;
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::GetNumSculptLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return local_res8[0];
}

// GetPrivateStaticClass @ 14ce6d2f0

UClass * __cdecl UGeometryScriptLibrary_MeshSculptLayersFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSculptLayersFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSculptLayersFunctions
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSculptLayersFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSculptLayersFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions.InnerSingleton;
}

// GetSculptLayerWeightsArray @ 14ce6d9b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<double,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::GetSculptLayerWeightsArray
          (TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UDynamicMesh *param_1)

{
  TArray<double,TSizedDefaultAllocator<32>_> *local_res8 [4];
  code *local_18;
  TArray<double,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (1 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return __return_storage_ptr__;
    }
  }
  else {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::GetSculptLayerWeightsArray'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res8[0] = __return_storage_ptr__;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
  }
  return __return_storage_ptr__;
}

// MergeSculptLayers @ 14ce6f550

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::MergeSculptLayers
          (UDynamicMesh *param_1,int *param_2,int param_3,int param_4,bool param_5,
          UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  int local_28;
  int local_24;
  int *local_20;
  bool local_18;
  UGeometryScriptDebug *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"MergeSculptLayers_InvalidInput",L"MergeSculptLayers: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18 = param_5;
  local_10 = param_6;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::MergeSculptLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_3;
  local_24 = param_4;
  local_20 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SetActiveSculptLayer @ 14ce73b60

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::SetActiveSculptLayer
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  int local_28 [2];
  UGeometryScriptDebug *local_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetActiveSculptLayer_InvalidInput",
                        L"SetActiveSculptLayer: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetActiveSculptLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28[0] = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SetSculptLayerWeight @ 14ce74920

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeight
          (UDynamicMesh *param_1,int param_2,double param_3,
          FGeometryScriptSculptLayerUpdateOptions param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  int local_28 [2];
  double local_20;
  undefined1 *local_18;
  UGeometryScriptDebug *local_10;
  
  local_res20[0] = param_4.bRecomputeNormals;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetSculptLayerWeight_InvalidInput",
                        L"SetSculptLayerWeight: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18 = local_res20;
  local_10 = param_5;
  local_38._8_8_ = local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeight'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28[0] = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SetSculptLayerWeightsArray @ 14ce749e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeightsArray
          (UDynamicMesh *param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          FGeometryScriptSculptLayerUpdateOptions param_3,UGeometryScriptDebug *param_4)

{
  FScriptContainerElement *pFVar1;
  FText *pFVar2;
  undefined1 local_res18 [16];
  undefined1 local_38 [16];
  TArray<double,TSizedDefaultAllocator<32>_> *local_28;
  undefined1 *local_20;
  UGeometryScriptDebug *local_18;
  
  local_res18[0] = param_3.bRecomputeNormals;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetSculptLayerWeight_InvalidInput",
                        L"SetSculptLayerWeight: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar2);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return (UDynamicMesh *)0x0;
  }
  local_20 = local_res18;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeightsArray'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_18 = param_4;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshSculptLayersFunctions @ 14ce750c0

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshSculptLayersFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr =
       Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDiscardSculptLayers @ 14ce8e5f0

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execDiscardSculptLayers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined1 local_28 [16];
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"DiscardSculptLayers_InvalidInput",
                        L"DiscardSculptLayers: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_28._8_8_ = local_res10;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::DiscardSculptLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execEnableSculptLayers @ 14ce8e9e0

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execEnableSculptLayers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_38;
  undefined1 local_30 [24];
  
  local_38 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_38;
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"EnableSculptLayers_InvalidInput",L"EnableSculptLayers: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_res18[0] = local_res10[0];
  local_30._8_8_ = local_res18;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::EnableSculptLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_38,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetActiveSculptLayer @ 14ce8fe40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execGetActiveSculptLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  UDynamicMesh *local_res18;
  undefined4 *local_res20;
  code *local_28;
  undefined4 **local_20;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UDynamicMesh *)0x0) {
    if (1 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  local_res20 = local_res10;
  local_res10[0] = 0xffffffff;
  local_20 = &local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::GetActiveSculptLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UDynamicMesh::ProcessMesh
            (local_res18,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetNumSculptLayers @ 14ce94cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execGetNumSculptLayers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  UDynamicMesh *local_res18;
  undefined4 *local_res20;
  code *local_28;
  undefined4 **local_20;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UDynamicMesh *)0x0) {
    if (1 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  local_res20 = local_res10;
  local_res10[0] = 0xffffffff;
  local_20 = &local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::GetNumSculptLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UDynamicMesh::ProcessMesh
            (local_res18,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetSculptLayerWeightsArray @ 14ce95b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execGetSculptLayerWeightsArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *local_res10;
  void **local_res18;
  void *local_28;
  undefined8 local_20;
  code *local_18;
  void ***local_10;
  
  local_res10 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = (void *)0x0;
  if (local_res10 == (UDynamicMesh *)0x0) {
    if (1 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_res18 = &local_28;
    local_10 = &local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::GetSculptLayerWeightsArray'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res10,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_28;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    local_28 = (void *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execMergeSculptLayers @ 14ce98f70

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execMergeSculptLayers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  uchar *puVar5;
  bool bVar6;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_88 [2];
  UGeometryScriptDebug *local_80;
  UDynamicMesh *local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  uchar *local_58;
  undefined1 local_50;
  UGeometryScriptDebug *local_48;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_88[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar6 = local_res18[0] != 0;
  local_80 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pUVar3 = local_78;
  pUVar2 = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_70,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"MergeSculptLayers_InvalidInput",L"MergeSculptLayers: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_60 = local_res20[0];
    local_5c = local_88[0];
    local_70._8_8_ = &local_60;
    local_70._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::MergeSculptLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_48 = local_80;
    local_58 = puVar5;
    local_50 = bVar6;
    UDynamicMesh::EditMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_70,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execSetActiveSculptLayer @ 14ce9e020

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execSetActiveSculptLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10 [2];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined4 local_38 [2];
  UGeometryScriptDebug *local_30;
  undefined1 local_28 [16];
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetActiveSculptLayer_InvalidInput",
                        L"SetActiveSculptLayer: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_38[0] = local_res10[0];
  local_28._8_8_ = local_38;
  local_30 = local_res18;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetActiveSculptLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execSetSculptLayerWeight @ 14cea0390

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execSetSculptLayerWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  UGeometryScriptDebug *local_78;
  UDynamicMesh *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined1 *local_40;
  UGeometryScriptDebug *local_38;
  
  local_70 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_68 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar3 = local_70;
  pUVar2 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  if (local_70 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_60,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetSculptLayerWeight_InvalidInput",
                        L"SetSculptLayerWeight: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_50[0] = local_res20[0];
  local_40 = local_res18;
  local_48 = local_68;
  local_60._8_8_ = local_50;
  local_38 = local_78;
  local_60._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeight'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_70,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_60,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execSetSculptLayerWeightsArray @ 14cea05b0

void __cdecl
UGeometryScriptLibrary_MeshSculptLayersFunctions::execSetSculptLayerWeightsArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  UGeometryScriptDebug *pUVar3;
  void *_Src;
  FText *pFVar4;
  longlong lVar5;
  UDynamicMesh *pUVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  void *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  ForAnyElementType *local_50;
  undefined1 *local_48;
  UGeometryScriptDebug *local_40;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  _Src = local_70;
  pUVar3 = local_res20;
  uVar2 = local_res10[0];
  lVar5 = (longlong)(int)local_68;
  local_80.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = (int)local_68;
  if ((int)local_68 == 0) {
    local_74 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_68,0,&local_80,(int)local_68,&local_74);
    memcpy(local_80.Data,_Src,lVar5 << 3);
  }
  pUVar6 = local_88;
  local_res18[0] = uVar2;
  if (local_88 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_60,L"UGeometryScriptLibrary_MeshSculptLayerFunctions",
                        L"SetSculptLayerWeight_InvalidInput",
                        L"SetSculptLayerWeight: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar4);
    if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
    }
    pUVar6 = (UDynamicMesh *)0x0;
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  else {
    local_50 = &local_80;
    local_40 = pUVar3;
    local_48 = local_res18;
    local_60._8_8_ = &local_50;
    local_60._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeightsArray'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_88,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_60,
               GeneralEdit,Unknown,false);
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  *(UDynamicMesh **)param_3 = pUVar6;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

