// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// StaticClass @ 14e5b6ac0

UClass * __cdecl UGLTFStaticMeshExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFStaticMeshExporter",
               &Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton,
               StaticRegisterNativesUGLTFStaticMeshExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGLTFStaticMeshExporter>,
               InternalVTableHelperCtorCaller<UGLTFStaticMeshExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton;
}

// UGLTFStaticMeshExporter @ 14e5d39d0

UGLTFStaticMeshExporter * __thiscall
UGLTFStaticMeshExporter::UGLTFStaticMeshExporter
          (UGLTFStaticMeshExporter *this,FVTableHelper *param_1)

{
  UExporter::UExporter((UExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFStaticMeshExporter__6B_;
  return this;
}

// UGLTFStaticMeshExporter @ 14e5d3a00

UGLTFStaticMeshExporter * __thiscall
UGLTFStaticMeshExporter::UGLTFStaticMeshExporter
          (UGLTFStaticMeshExporter *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UGLTFExporter::UGLTFExporter((UGLTFExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFStaticMeshExporter__6B_;
  pUVar1 = Z_Construct_UClass_UStaticMesh_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x28 = pUVar1;
  return this;
}

// ~UGLTFStaticMeshExporter @ 14e5d80e0

void __thiscall UGLTFStaticMeshExporter::~UGLTFStaticMeshExporter(UGLTFStaticMeshExporter *this)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  return;
}

// AddObject @ 14e5df960

bool __thiscall
UGLTFStaticMeshExporter::AddObject
          (UGLTFStaticMeshExporter *this,FGLTFContainerBuilder *param_1,UObject *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  FGLTFJsonMesh *pFVar8;
  FGLTFJsonScene *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  UStaticMesh *local_res18;
  UObject *local_res20;
  FGLTFJsonNode *local_88;
  FName local_80;
  FGLTFMaterialArray local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_2 == (UObject *)0x0) {
    pFVar10 = GetTypeName<UStaticMesh>(&local_48);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((iVar6 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
      &pUVar7->_padding_)) {
    local_res20 = param_2;
    TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<UStaticMesh_const_*_const_&>
              ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                *)&param_1->field_0x468,&local_res18,(bool *)&local_res20);
    local_78._0_8_ = 0;
    local_78._8_8_ = 0;
    pFVar8 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
             ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                          **)&param_1->field_0x878,(UStaticMesh *)param_2,
                        (UStaticMeshComponent *)0x0,&local_78,-1);
    if (pFVar8 == (FGLTFJsonMesh *)0x0) {
      local_80.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_80.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_80,&local_68);
      ::FString::PrintfImpl(&local_58,L"Failed to export static mesh %s");
      FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      bVar4 = false;
    }
    else {
      local_88 = FGLTFJsonBuilder::AddNode((FGLTFJsonBuilder *)param_1);
      local_88->Mesh = pFVar8;
      pFVar9 = FGLTFJsonBuilder::AddScene((FGLTFJsonBuilder *)param_1);
      pFVar2 = (pFVar9->Nodes).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(pFVar9->Nodes).ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = (pFVar9->Nodes).ArrayNum;
      piVar1 = &(pFVar9->Nodes).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pFVar9->Nodes).AllocatorInstance,piVar1);
      }
      (pFVar9->Nodes).ArrayNum = iVar6 + 1;
      *(FGLTFJsonNode **)((pFVar9->Nodes).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_88;
      **(undefined8 **)&param_1->field_0x110 = pFVar9;
      bVar4 = true;
    }
    return bVar4;
  }
  pFVar10 = GetTypeName<UStaticMesh>(&local_38);
  pwVar11 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UObject_const_>(&local_28,param_2);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar11,pwVar12);
}

// GetPrivateStaticClass @ 14e5fcb50

UClass * __cdecl UGLTFStaticMeshExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFStaticMeshExporter",
               &Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton,
               StaticRegisterNativesUGLTFStaticMeshExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGLTFStaticMeshExporter>,
               InternalVTableHelperCtorCaller<UGLTFStaticMeshExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFStaticMeshExporter.InnerSingleton;
}

// StaticRegisterNativesUGLTFStaticMeshExporter @ 14e614da0

void __cdecl UGLTFStaticMeshExporter::StaticRegisterNativesUGLTFStaticMeshExporter(void)

{
  return;
}

