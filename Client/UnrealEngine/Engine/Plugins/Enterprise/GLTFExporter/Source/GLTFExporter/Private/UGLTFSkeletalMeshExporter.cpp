// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// StaticClass @ 14e5b69c0

UClass * __cdecl UGLTFSkeletalMeshExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFSkeletalMeshExporter",
               &Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton,
               StaticRegisterNativesUGLTFSkeletalMeshExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGLTFSkeletalMeshExporter>,
               InternalVTableHelperCtorCaller<UGLTFSkeletalMeshExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton;
}

// UGLTFSkeletalMeshExporter @ 14e5d3940

UGLTFSkeletalMeshExporter * __thiscall
UGLTFSkeletalMeshExporter::UGLTFSkeletalMeshExporter
          (UGLTFSkeletalMeshExporter *this,FVTableHelper *param_1)

{
  UExporter::UExporter((UExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFSkeletalMeshExporter__6B_;
  return this;
}

// UGLTFSkeletalMeshExporter @ 14e5d3970

UGLTFSkeletalMeshExporter * __thiscall
UGLTFSkeletalMeshExporter::UGLTFSkeletalMeshExporter
          (UGLTFSkeletalMeshExporter *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UGLTFExporter::UGLTFExporter((UGLTFExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFSkeletalMeshExporter__6B_;
  pUVar1 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x28 = pUVar1;
  return this;
}

// ~UGLTFSkeletalMeshExporter @ 14e5d80c0

void __thiscall
UGLTFSkeletalMeshExporter::~UGLTFSkeletalMeshExporter(UGLTFSkeletalMeshExporter *this)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  return;
}

// AddObject @ 14e5df670

bool __thiscall
UGLTFSkeletalMeshExporter::AddObject
          (UGLTFSkeletalMeshExporter *this,FGLTFContainerBuilder *param_1,UObject *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  FGLTFJsonMesh *pFVar8;
  FGLTFJsonSkin *pFVar9;
  FGLTFJsonScene *pFVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  USkeletalMesh *local_res18;
  UObject *local_res20;
  FGLTFJsonNode *local_b8;
  FName local_b0;
  FName local_a8;
  FGLTFMaterialArray local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if (param_2 == (UObject *)0x0) {
    pFVar11 = GetTypeName<USkeletalMesh>(&local_50);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar7 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar6) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar7->_padding_)) {
    pFVar11 = GetTypeName<USkeletalMesh>(&local_40);
    pwVar12 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UObject_const_>(&local_30,param_2);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar13);
  }
  local_res20 = param_2;
  TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<USkeletalMesh_const_*_const_&>
            ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
              *)&param_1->field_0x4b8,&local_res18,(bool *)&local_res20);
  pFVar9 = (FGLTFJsonSkin *)0x0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  pFVar8 = TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
           ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
                        **)&param_1->field_0x880,(USkeletalMesh *)param_2,
                      (USkeletalMeshComponent *)0x0,&local_a0,-1);
  if (pFVar8 == (FGLTFJsonMesh *)0x0) {
    local_b0.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_b0.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_b0,&local_90);
    ::FString::PrintfImpl(&local_70,L"Failed to export skeletal mesh %s");
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_70);
    local_80.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
      local_80.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    }
LAB_14e5df80c:
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  else {
    local_b8 = FGLTFJsonBuilder::AddNode((FGLTFJsonBuilder *)param_1);
    local_b8->Mesh = pFVar8;
    if (*(char *)(*(longlong *)&param_1->field_0x18 + 0x9e) != '\0') {
      if (local_b8 != (FGLTFJsonNode *)0x0) {
        pFVar9 = TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::GetOrAdd
                           (*(TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>
                              **)&param_1->field_0x8c0,local_b8,(USkeletalMesh *)param_2);
      }
      local_b8->Skin = pFVar9;
      if (local_b8->Skin == (FGLTFJsonSkin *)0x0) {
        local_a8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_a8.Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(&local_a8,&local_80);
        ::FString::PrintfImpl(&local_60,L"Failed to export bones in skeletal mesh %s");
        FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_60);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        goto LAB_14e5df80c;
      }
    }
    pFVar10 = FGLTFJsonBuilder::AddScene((FGLTFJsonBuilder *)param_1);
    pFVar2 = (pFVar10->Nodes).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)(pFVar10->Nodes).ArrayMax * 8))
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
    iVar6 = (pFVar10->Nodes).ArrayNum;
    piVar1 = &(pFVar10->Nodes).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar10->Nodes).AllocatorInstance,piVar1);
    }
    (pFVar10->Nodes).ArrayNum = iVar6 + 1;
    *(FGLTFJsonNode **)((pFVar10->Nodes).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_b8;
    **(undefined8 **)&param_1->field_0x110 = pFVar10;
    bVar4 = true;
  }
  return bVar4;
}

// GetPrivateStaticClass @ 14e5fca90

UClass * __cdecl UGLTFSkeletalMeshExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFSkeletalMeshExporter",
               &Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton,
               StaticRegisterNativesUGLTFSkeletalMeshExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGLTFSkeletalMeshExporter>,
               InternalVTableHelperCtorCaller<UGLTFSkeletalMeshExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFSkeletalMeshExporter.InnerSingleton;
}

// StaticRegisterNativesUGLTFSkeletalMeshExporter @ 14e614d90

void __cdecl UGLTFSkeletalMeshExporter::StaticRegisterNativesUGLTFSkeletalMeshExporter(void)

{
  return;
}

