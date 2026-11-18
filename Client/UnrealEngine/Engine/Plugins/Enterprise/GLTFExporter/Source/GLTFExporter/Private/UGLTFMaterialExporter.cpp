// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// StaticClass @ 14e5b68c0

UClass * __cdecl UGLTFMaterialExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFMaterialExporter",
               &Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton,
               StaticRegisterNativesUGLTFMaterialExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGLTFMaterialExporter>,
               InternalVTableHelperCtorCaller<UGLTFMaterialExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton;
}

// UGLTFMaterialExporter @ 14e5d37b0

UGLTFMaterialExporter * __thiscall
UGLTFMaterialExporter::UGLTFMaterialExporter(UGLTFMaterialExporter *this,FVTableHelper *param_1)

{
  UExporter::UExporter((UExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFMaterialExporter__6B_;
  return this;
}

// UGLTFMaterialExporter @ 14e5d37e0

UGLTFMaterialExporter * __thiscall
UGLTFMaterialExporter::UGLTFMaterialExporter
          (UGLTFMaterialExporter *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UGLTFExporter::UGLTFExporter((UGLTFExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFMaterialExporter__6B_;
  pUVar1 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x28 = pUVar1;
  return this;
}

// ~UGLTFMaterialExporter @ 14e5d8040

void __thiscall UGLTFMaterialExporter::~UGLTFMaterialExporter(UGLTFMaterialExporter *this)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  return;
}

// AddObject @ 14e5df0b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UGLTFMaterialExporter::AddObject
          (UGLTFMaterialExporter *this,FGLTFContainerBuilder *param_1,UObject *param_2)

{
  int *piVar1;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  FGLTFJsonMesh *pFVar8;
  FGLTFJsonScene *pFVar9;
  FString *pFVar10;
  UStaticMesh *pUVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  UStaticMesh *local_res18;
  UMaterialInterface *local_res20;
  FGLTFJsonNode *local_1e8;
  ForAnyElementType local_1e0;
  int local_1d8;
  int local_1d4;
  FGLTFMaterialArray local_1d0;
  UObject *local_1c0;
  UStaticMesh *local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  UObject *local_198 [2];
  wchar_t *local_188;
  undefined8 uStack_180;
  wchar_t *local_178;
  undefined8 uStack_170;
  wchar_t *local_168;
  undefined8 uStack_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FMeshAttributesArray<int> local_128;
  wchar_t *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_2 == (UObject *)0x0) {
    pFVar10 = GetTypeName<UMaterialInterface>(&local_68);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar7 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((iVar6 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
      &pUVar7->_padding_)) {
    if (*(char *)(*(longlong *)&param_1->field_0x18 + 0x2c) == '\0') {
      local_198[0] = param_2;
      TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UMaterialInterface_const_*_const_&>
                ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                  *)&param_1->field_0x648,&local_res20,(bool *)local_198);
      local_128._0_8_ = 0;
      local_128._8_8_ = 0;
      TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
      ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
                   **)&param_1->field_0x888,(UMaterialInterface *)param_2,(FGLTFMeshData *)0x0,
                 &local_128);
      bVar4 = true;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        uStack_180._0_4_ = 0;
        uStack_180._4_4_ = 0;
        local_118 = L"/Engine/EditorMeshes/EditorSphere.EditorSphere";
        local_188 = (wchar_t *)0x0;
        iStack_110 = 0x2e;
        pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
        local_b8._12_4_ = uStack_10c;
        local_b8.Size = iStack_110;
        local_c8.DataPtr = local_188;
        local_c8.Size = (int)uStack_180;
        local_c8._12_4_ = uStack_180._4_4_;
        local_b8.DataPtr = local_118;
        pUVar11 = (UStaticMesh *)
                  StaticLoadObject(pUVar7,(UObject *)0x0,&local_b8,&local_c8,0,(UPackageMap *)0x0,
                                   true,(FLinkerInstancingContext *)0x0);
        if (pUVar11 == (UStaticMesh *)0x0) {
          uStack_170._0_4_ = 0;
          uStack_170._4_4_ = 0;
          local_108 = L"/Engine/BasicShapes/Sphere.Sphere";
          local_178 = (wchar_t *)0x0;
          iStack_100 = 0x21;
          pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
          local_98._12_4_ = uStack_fc;
          local_98.Size = iStack_100;
          local_a8.DataPtr = local_178;
          local_a8.Size = (int)uStack_170;
          local_a8._12_4_ = uStack_170._4_4_;
          local_98.DataPtr = local_108;
          pUVar11 = (UStaticMesh *)
                    StaticLoadObject(pUVar7,(UObject *)0x0,&local_98,&local_a8,0,(UPackageMap *)0x0,
                                     true,(FLinkerInstancingContext *)0x0);
          if (pUVar11 == (UStaticMesh *)0x0) {
            uStack_160._0_4_ = 0;
            uStack_160._4_4_ = 0;
            local_f8 = L"/Engine/EngineMeshes/Sphere.Sphere";
            local_168 = (wchar_t *)0x0;
            iStack_f0 = 0x22;
            pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
            local_78._12_4_ = uStack_ec;
            local_78.Size = iStack_f0;
            local_88.DataPtr = local_168;
            local_88.Size = (int)uStack_160;
            local_88._12_4_ = uStack_160._4_4_;
            local_78.DataPtr = local_f8;
            pUVar11 = (UStaticMesh *)
                      StaticLoadObject(pUVar7,(UObject *)0x0,&local_78,&local_88,0,
                                       (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
          }
        }
        DefaultPreviewMesh = pUVar11;
        _Init_thread_footer(&::_TSS0);
      }
      pUVar11 = DefaultPreviewMesh;
      if (DefaultPreviewMesh == (UStaticMesh *)0x0) {
        local_1a0.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_1a0.Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(&local_1a0,&local_138);
        ::FString::PrintfImpl
                  (&local_d8,L"Failed to export material %s because of missing preview mesh");
        FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_d8);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_1e0.Data = (FScriptContainerElement *)0x0;
        local_1d8 = 1;
        local_1c0 = param_2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,1,0,&local_1e0,1,&local_1d4);
        local_1b8 = pUVar11;
        *(UObject **)local_1e0.Data = local_1c0;
        TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
        Emplace<UStaticMesh_const_*_const_&>
                  ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                    *)&param_1->field_0x468,&local_res18,(bool *)&local_1b8);
        _Src.Data = local_1e0.Data;
        lVar14 = (longlong)local_1d8;
        this_00 = *(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                    **)&param_1->field_0x878;
        local_1d0._0_8_ = (FScriptContainerElement *)0x0;
        local_1d0._8_4_ = local_1d8;
        if (local_1d8 == 0) {
          local_1d0._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_1d8,0,(ForAnyElementType *)&local_1d0,local_1d8,
                     (int *)((longlong)&local_1d0 + 0xc));
          memcpy((void *)local_1d0._0_8_,_Src.Data,lVar14 << 3);
        }
        pFVar8 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                 ::GetOrAdd(this_00,pUVar11,(UStaticMeshComponent *)0x0,&local_1d0,-1);
        if (local_1e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data);
        }
        if (pFVar8 != (FGLTFJsonMesh *)0x0) {
          local_1e8 = FGLTFJsonBuilder::AddNode((FGLTFJsonBuilder *)param_1);
          local_1e8->Mesh = pFVar8;
          pFVar9 = FGLTFJsonBuilder::AddScene((FGLTFJsonBuilder *)param_1);
          pFVar2 = (pFVar9->Nodes).AllocatorInstance.Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_1e8) &&
              ((FScriptContainerElement *)&local_1e8 <
               pFVar2 + (longlong)(pFVar9->Nodes).ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
          *(FGLTFJsonNode **)((pFVar9->Nodes).AllocatorInstance.Data + (longlong)iVar6 * 8) =
               local_1e8;
          **(undefined8 **)&param_1->field_0x110 = pFVar9;
          return true;
        }
        local_1b0 = (FName)pUVar11->_padding_;
        ::FName::ToString(&local_1b0,&local_148);
        local_1a8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_1a8.Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(&local_1a8,&local_158);
        ::FString::PrintfImpl(&local_e8,L"Failed to export preview mesh %s for material %s");
        FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_e8);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        local_138.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
          local_138.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
        }
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      bVar4 = false;
    }
    return bVar4;
  }
  pFVar10 = GetTypeName<UMaterialInterface>(&local_58);
  pwVar13 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UObject_const_>(&local_48,param_2);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar13,pwVar12);
}

// GetPrivateStaticClass @ 14e5fc920

UClass * __cdecl UGLTFMaterialExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFMaterialExporter",
               &Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton,
               StaticRegisterNativesUGLTFMaterialExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGLTFMaterialExporter>,
               InternalVTableHelperCtorCaller<UGLTFMaterialExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFMaterialExporter.InnerSingleton;
}

// StaticRegisterNativesUGLTFMaterialExporter @ 14e614d40

void __cdecl UGLTFMaterialExporter::StaticRegisterNativesUGLTFMaterialExporter(void)

{
  return;
}

