// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// StaticClass @ 14e5b5600

UClass * __cdecl UGLTFAnimSequenceExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFAnimSequenceExporter",
               &Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton,
               StaticRegisterNativesUGLTFAnimSequenceExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGLTFAnimSequenceExporter>,
               InternalVTableHelperCtorCaller<UGLTFAnimSequenceExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton;
}

// UGLTFAnimSequenceExporter @ 14e5d2f10

UGLTFAnimSequenceExporter * __thiscall
UGLTFAnimSequenceExporter::UGLTFAnimSequenceExporter
          (UGLTFAnimSequenceExporter *this,FVTableHelper *param_1)

{
  UExporter::UExporter((UExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFAnimSequenceExporter__6B_;
  return this;
}

// UGLTFAnimSequenceExporter @ 14e5d2f40

UGLTFAnimSequenceExporter * __thiscall
UGLTFAnimSequenceExporter::UGLTFAnimSequenceExporter
          (UGLTFAnimSequenceExporter *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UGLTFExporter::UGLTFExporter((UGLTFExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFAnimSequenceExporter__6B_;
  pUVar1 = Z_Construct_UClass_UAnimSequence_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x28 = pUVar1;
  return this;
}

// ~UGLTFAnimSequenceExporter @ 14e5d7ee0

void __thiscall
UGLTFAnimSequenceExporter::~UGLTFAnimSequenceExporter(UGLTFAnimSequenceExporter *this)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  return;
}

// AddObject @ 14e5de230

bool __thiscall
UGLTFAnimSequenceExporter::AddObject
          (UGLTFAnimSequenceExporter *this,FGLTFContainerBuilder *param_1,UObject *param_2)

{
  int *piVar1;
  USkeleton *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FGLTFJsonNode *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  USkeletalMesh *pUVar10;
  FGLTFJsonMesh *pFVar11;
  FGLTFJsonSkin *pFVar12;
  FGLTFJsonAnimation *pFVar13;
  FGLTFJsonScene *pFVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  USkeletalMesh *local_res18;
  UAnimSequence *local_res20;
  FGLTFJsonNode *local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  USkeletalMesh *local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  UObject *local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FGLTFMaterialArray local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if (param_2 == (UObject *)0x0) {
    pFVar15 = GetTypeName<UAnimSequence>(&local_50);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar17);
  }
  pUVar9 = Z_Construct_UClass_UAnimSequence_NoRegister();
  iVar8 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar8) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
      &pUVar9->_padding_)) {
    pFVar15 = GetTypeName<UAnimSequence>(&local_40);
    pwVar17 = L"";
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    pFVar15 = GetFullNameForCastLogError<UObject_const_>(&local_30,param_2);
    if ((pFVar15->Data).ArrayNum != 0) {
      pwVar17 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar17,pwVar16);
  }
  if (*(char *)(*(longlong *)&param_1->field_0x18 + 0xa3) == '\0') {
    local_190.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_190.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_190,&local_140);
    ::FString::PrintfImpl
              (&local_b0,
               L"Failed to export animation sequence %s because animation sequences are disabled by export options"
              );
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_b0);
    local_f0.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      local_f0.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
    }
    goto LAB_14e5de651;
  }
  if (*(char *)(*(longlong *)&param_1->field_0x18 + 0x9e) == '\0') {
    local_188.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_188.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_188,&local_130);
    ::FString::PrintfImpl
              (&local_a0,
               L"Failed to export animation sequence %s because vertex skin weights are disabled by export options"
              );
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_a0);
    local_f0.Data.AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      local_f0.Data.AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
    }
    goto LAB_14e5de651;
  }
  pUVar10 = (USkeletalMesh *)
            (**(code **)(*(longlong *)&param_2[1].field_0x8 + 0x20))(&param_2[1].field_0x8);
  if (pUVar10 == (USkeletalMesh *)0x0) {
    pUVar2 = *(USkeleton **)&param_2[1].field_0x10;
    if (pUVar2 != (USkeleton *)0x0) {
      pUVar10 = (USkeletalMesh *)(**(code **)(pUVar2->_padding_ + 0x20))(&pUVar2->_padding_);
      if (pUVar10 == (USkeletalMesh *)0x0) {
        pUVar10 = FGLTFExporterUtilities::FindCompatibleMesh(pUVar2);
      }
      goto LAB_14e5de38d;
    }
  }
  else {
LAB_14e5de38d:
    if (pUVar10 != (USkeletalMesh *)0x0) {
      local_198 = FGLTFJsonBuilder::AddNode((FGLTFJsonBuilder *)param_1);
      pFVar12 = (FGLTFJsonSkin *)0x0;
      if (*(char *)(*(longlong *)&param_1->field_0x18 + 0x2c) != '\0') {
        local_178 = pUVar10;
        TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
        Emplace<USkeletalMesh_const_*_const_&>
                  ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
                    *)&param_1->field_0x4b8,&local_res18,(bool *)&local_178);
        local_110._0_8_ = 0;
        local_110._8_8_ = 0;
        pFVar11 = TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
                  ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
                               **)&param_1->field_0x880,pUVar10,(USkeletalMeshComponent *)0x0,
                             &local_110,-1);
        local_198->Mesh = pFVar11;
        if (local_198->Mesh == (FGLTFJsonMesh *)0x0) {
          local_170.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
          local_170.Number = *(uint *)&param_2->field_0x1c;
          ::FName::ToString(&local_170,&local_f0);
          local_168 = (FName)pUVar10->_padding_;
          ::FName::ToString(&local_168,&local_100);
          ::FString::PrintfImpl
                    (&local_80,L"Failed to export skeletal mesh %s for animation sequence %s");
          FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_80);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          goto LAB_14e5de651;
        }
      }
      if (local_198 != (FGLTFJsonNode *)0x0) {
        pFVar12 = TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::GetOrAdd
                            (*(TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>
                               **)&param_1->field_0x8c0,local_198,pUVar10);
      }
      pFVar5 = local_198;
      local_198->Skin = pFVar12;
      if (local_198->Skin == (FGLTFJsonSkin *)0x0) {
        local_160.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_160.Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(&local_160,&local_d0);
        local_158 = (FName)pUVar10->_padding_;
        ::FName::ToString(&local_158,&local_e0);
        ::FString::PrintfImpl
                  (&local_70,L"Failed to export bones in skeletal mesh %s for animation sequence %s"
                  );
        FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_70);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        local_f0.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          local_f0.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
        }
      }
      else {
        local_150 = param_2;
        TSet<UAnimSequence_const_*,DefaultKeyFuncs<UAnimSequence_const_*,0>,FDefaultSetAllocator>::
        Emplace<UAnimSequence_const_*_const_&>
                  ((TSet<UAnimSequence_const_*,DefaultKeyFuncs<UAnimSequence_const_*,0>,FDefaultSetAllocator>
                    *)&param_1->field_0x5f8,&local_res20,(bool *)&local_150);
        pFVar13 = TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
                  ::GetOrAdd(*(TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
                               **)&param_1->field_0x8c8,pFVar5,pUVar10,(UAnimSequence *)param_2);
        if (pFVar13 != (FGLTFJsonAnimation *)0x0) {
          pFVar14 = FGLTFJsonBuilder::AddScene((FGLTFJsonBuilder *)param_1);
          pFVar3 = (pFVar14->Nodes).AllocatorInstance.Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_198) &&
              ((FScriptContainerElement *)&local_198 <
               pFVar3 + (longlong)(pFVar14->Nodes).ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar8 = (pFVar14->Nodes).ArrayNum;
          piVar1 = &(pFVar14->Nodes).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(pFVar14->Nodes).AllocatorInstance,piVar1);
          }
          (pFVar14->Nodes).ArrayNum = iVar8 + 1;
          *(FGLTFJsonNode **)((pFVar14->Nodes).AllocatorInstance.Data + (longlong)iVar8 * 8) =
               local_198;
          **(undefined8 **)&param_1->field_0x110 = pFVar14;
          return true;
        }
        local_148.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_148.Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(&local_148,&local_c0);
        ::FString::PrintfImpl(&local_60,L"Failed to export animation sequence %s");
        FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_60);
        local_f0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
          local_f0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e5de651;
    }
  }
  local_180.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
  local_180.Number = *(uint *)&param_2->field_0x1c;
  ::FName::ToString(&local_180,&local_120);
  ::FString::PrintfImpl
            (&local_90,L"Failed to export animation sequence %s because of missing preview mesh");
  FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_90);
  local_f0.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
    local_f0.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
  }
LAB_14e5de651:
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetPrivateStaticClass @ 14e5fc3f0

UClass * __cdecl UGLTFAnimSequenceExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFAnimSequenceExporter",
               &Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton,
               StaticRegisterNativesUGLTFAnimSequenceExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGLTFAnimSequenceExporter>,
               InternalVTableHelperCtorCaller<UGLTFAnimSequenceExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.InnerSingleton;
}

// StaticRegisterNativesUGLTFAnimSequenceExporter @ 14e614c70

void __cdecl UGLTFAnimSequenceExporter::StaticRegisterNativesUGLTFAnimSequenceExporter(void)

{
  return;
}

