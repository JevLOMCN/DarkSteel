// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// StaticClass @ 14ca411e0

UClass * __cdecl UVolumetricBrushStampIndicator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVolumetricBrushStampIndicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"VolumetricBrushStampIndicator",
               &Z_Registration_Info_UClass_UVolumetricBrushStampIndicator.InnerSingleton,
               StaticRegisterNativesUVolumetricBrushStampIndicator,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVolumetricBrushStampIndicator>,
               InternalVTableHelperCtorCaller<UVolumetricBrushStampIndicator>,local_res8,
               UBrushStampIndicator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVolumetricBrushStampIndicator.InnerSingleton;
}

// UVolumetricBrushStampIndicator @ 14ca691a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UVolumetricBrushStampIndicator * __thiscall
UVolumetricBrushStampIndicator::UVolumetricBrushStampIndicator
          (UVolumetricBrushStampIndicator *this,FVTableHelper *param_1)

{
  UBrushStampIndicator::UBrushStampIndicator((UBrushStampIndicator *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->SphereMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  return this;
}

// UVolumetricBrushStampIndicator @ 14ca691e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UVolumetricBrushStampIndicator * __thiscall
UVolumetricBrushStampIndicator::UVolumetricBrushStampIndicator(UVolumetricBrushStampIndicator *this)

{
  UBrushStampIndicator::UBrushStampIndicator((UBrushStampIndicator *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->SphereMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  return this;
}

// ~UVolumetricBrushStampIndicator @ 14ca6bc90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UVolumetricBrushStampIndicator::~UVolumetricBrushStampIndicator
          (UVolumetricBrushStampIndicator *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  UBrushStampIndicator::~UBrushStampIndicator((UBrushStampIndicator *)this);
  return;
}

// GetPreviewMesh @ 14ca90b30

UPreviewMesh * __thiscall
UVolumetricBrushStampIndicator::GetPreviewMesh(UVolumetricBrushStampIndicator *this)

{
  return (this->SphereMesh).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14ca924b0

UClass * __cdecl UVolumetricBrushStampIndicator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVolumetricBrushStampIndicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"VolumetricBrushStampIndicator",
               &Z_Registration_Info_UClass_UVolumetricBrushStampIndicator.InnerSingleton,
               StaticRegisterNativesUVolumetricBrushStampIndicator,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVolumetricBrushStampIndicator>,
               InternalVTableHelperCtorCaller<UVolumetricBrushStampIndicator>,local_res8,
               UBrushStampIndicator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVolumetricBrushStampIndicator.InnerSingleton;
}

// IsVolumetricBrushVisible @ 14ca979e0

bool __thiscall
UVolumetricBrushStampIndicator::IsVolumetricBrushVisible(UVolumetricBrushStampIndicator *this)

{
  UPreviewMesh *pUVar1;
  UDynamicMeshComponent *pUVar2;
  undefined1 uVar3;
  
  pUVar1 = (this->SphereMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (UPreviewMesh *)0x0) {
    return false;
  }
  pUVar2 = (pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDynamicMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cb2331c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(pUVar2->_padding_ + 0x560))();
    return (bool)uVar3;
  }
  return false;
}

// MakeBrushIndicatorMesh @ 14ca97bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UVolumetricBrushStampIndicator::MakeBrushIndicatorMesh
          (UVolumetricBrushStampIndicator *this,UInteractiveTool *param_1,UWorld *param_2)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UClass *pUVar6;
  UPreviewMesh *this_00;
  UInteractiveToolManager *pUVar7;
  UMaterialInstanceDynamic *pUVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3b8 [160];
  double local_318;
  int local_310;
  int local_30c;
  bool local_308;
  FDynamicMesh3 local_2f8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  if (param_1 == (UInteractiveTool *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5731798946464923625>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseGizmos\\VolumetricBrushStampIndicator.cpp"
                       ,0x17,"ParentTool");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UPreviewMesh_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar6);
    local_c8._8_8_ = param_1;
    this_00 = (UPreviewMesh *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPreviewMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->SphereMesh).field0_0x0.DebugPtr = this_00;
    if (this_00 != (UPreviewMesh *)0x0) {
      UPreviewMesh::CreateInWorld(this_00,param_2,&UE::Math::TTransform<double>::Identity);
      local_3b8._0_8_ = &___7FSphereGenerator_Geometry_UE__6B_;
      local_318 = __real_3ff0000000000000;
      local_3b8._8_8_ = (FScriptContainerElement *)0x0;
      local_3b8._16_8_ = 0;
      local_3b8._24_8_ = (FScriptContainerElement *)0x0;
      local_3b8._32_8_ = 0;
      local_3b8._40_8_ = (FScriptContainerElement *)0x0;
      local_3b8._48_8_ = 0;
      local_3b8._56_8_ = (FScriptContainerElement *)0x0;
      local_3b8._64_8_ = 0;
      local_3b8._72_8_ = (FScriptContainerElement *)0x0;
      local_3b8._80_8_ = 0;
      local_3b8._88_8_ = (FScriptContainerElement *)0x0;
      local_3b8._96_8_ = 0;
      local_3b8._104_8_ = (FScriptContainerElement *)0x0;
      local_3b8._112_8_ = 0;
      local_3b8._120_8_ = (FScriptContainerElement *)0x0;
      local_3b8._128_8_ = 0;
      local_3b8._136_8_ = (FScriptContainerElement *)0x0;
      local_3b8._144_8_ = 0;
      local_3b8[0x98] = false;
      local_308 = false;
      local_310 = 0x20;
      local_30c = 0x20;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0x3c2,(ForAnyElementType *)(local_3b8 + 8),(int *)(local_3b8 + 0x10),
                 (int *)(local_3b8 + 0x14));
      if ((int)local_3b8._96_4_ < 0x780) {
        iVar10 = 0x780 - local_3b8._96_4_;
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,iVar10,(ForAnyElementType *)(local_3b8 + 0x58),
                           (int *)(local_3b8 + 0x60),(int *)(local_3b8 + 100));
        DefaultConstructItems<UE::Geometry::FIndex3i,int>
                  ((FScriptContainerElement *)(local_3b8._88_8_ + (longlong)iVar4 * 0xc),iVar10);
      }
      else if (0x780 < (int)local_3b8._96_4_) {
        iVar4 = local_3b8._96_4_ + -0x780;
        if (iVar4 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iVar4 != 0) {
          iVar5 = (local_3b8._96_4_ - iVar4) + -0x780;
          iVar10 = local_3b8._96_4_;
          if (iVar5 != 0) {
            memmove((FScriptContainerElement *)(local_3b8._88_8_ + 0x5a00),
                    (FScriptContainerElement *)(local_3b8._88_8_ + 0x5a00) + (longlong)iVar4 * 0xc,
                    (longlong)iVar5 * 0xc);
            iVar10 = local_3b8._96_4_;
          }
          local_3b8._96_4_ = iVar10 - iVar4;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,(ForAnyElementType *)(local_3b8 + 0x58),iVar10 - iVar4,
                     (int *)(local_3b8 + 100));
        }
      }
      if ((int)local_3b8._112_4_ < 0x780) {
        iVar10 = 0x780 - local_3b8._112_4_;
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,iVar10,(ForAnyElementType *)(local_3b8 + 0x68),
                           (int *)(local_3b8 + 0x70),(int *)(local_3b8 + 0x74));
        DefaultConstructItems<UE::Geometry::FIndex3i,int>
                  ((FScriptContainerElement *)(local_3b8._104_8_ + (longlong)iVar4 * 0xc),iVar10);
      }
      else if (0x780 < (int)local_3b8._112_4_) {
        iVar4 = local_3b8._112_4_ + -0x780;
        if (iVar4 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iVar4 != 0) {
          iVar5 = (local_3b8._112_4_ - iVar4) + -0x780;
          iVar10 = local_3b8._112_4_;
          if (iVar5 != 0) {
            memmove((FScriptContainerElement *)(local_3b8._104_8_ + 0x5a00),
                    (FScriptContainerElement *)(local_3b8._104_8_ + 0x5a00) + (longlong)iVar4 * 0xc,
                    (longlong)iVar5 * 0xc);
            iVar10 = local_3b8._112_4_;
          }
          local_3b8._112_4_ = iVar10 - iVar4;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,(ForAnyElementType *)(local_3b8 + 0x68),iVar10 - iVar4,
                     (int *)(local_3b8 + 0x74));
        }
      }
      if ((int)local_3b8._128_4_ < 0x780) {
        iVar10 = 0x780 - local_3b8._128_4_;
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,iVar10,(ForAnyElementType *)(local_3b8 + 0x78),
                           (int *)(local_3b8 + 0x80),(int *)(local_3b8 + 0x84));
        DefaultConstructItems<UE::Geometry::FIndex3i,int>
                  ((FScriptContainerElement *)(local_3b8._120_8_ + (longlong)iVar4 * 0xc),iVar10);
      }
      else if (0x780 < (int)local_3b8._128_4_) {
        iVar4 = local_3b8._128_4_ + -0x780;
        if (iVar4 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iVar4 != 0) {
          iVar5 = (local_3b8._128_4_ - iVar4) + -0x780;
          iVar10 = local_3b8._128_4_;
          if (iVar5 != 0) {
            memmove((FScriptContainerElement *)(local_3b8._120_8_ + 0x5a00),
                    (FScriptContainerElement *)(local_3b8._120_8_ + 0x5a00) + (longlong)iVar4 * 0xc,
                    (longlong)iVar5 * 0xc);
            iVar10 = local_3b8._128_4_;
          }
          local_3b8._128_4_ = iVar10 - iVar4;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,(ForAnyElementType *)(local_3b8 + 0x78),iVar10 - iVar4,
                     (int *)(local_3b8 + 0x84));
        }
      }
      if ((int)local_3b8._144_4_ < 0x780) {
        iVar10 = 0x780 - local_3b8._144_4_;
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar10,(ForAnyElementType *)(local_3b8 + 0x88),
                           (int *)(local_3b8 + 0x90),(int *)(local_3b8 + 0x94));
        memset((FScriptContainerElement *)(local_3b8._136_8_ + (longlong)iVar4 * 4),0,
               (longlong)iVar10 << 2);
      }
      else if (0x780 < (int)local_3b8._144_4_) {
        iVar4 = local_3b8._144_4_ + -0x780;
        if (iVar4 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iVar4 != 0) {
          iVar5 = (local_3b8._144_4_ - iVar4) + -0x780;
          iVar10 = local_3b8._144_4_;
          if (iVar5 != 0) {
            memmove((FScriptContainerElement *)(local_3b8._136_8_ + 0x1e00),
                    (FScriptContainerElement *)(local_3b8._136_8_ + 0x1e00) + (longlong)iVar4 * 4,
                    (longlong)iVar5 << 2);
            iVar10 = local_3b8._144_4_;
          }
          local_3b8._144_4_ = iVar10 - iVar4;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)(local_3b8 + 0x88),iVar10 - iVar4,
                     (int *)(local_3b8 + 0x94));
        }
      }
      if ((int)local_3b8._32_4_ < 0x41e) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0x41e - local_3b8._32_4_,(ForAnyElementType *)(local_3b8 + 0x18),
                   (int *)(local_3b8 + 0x20),(int *)(local_3b8 + 0x24));
      }
      else if (0x41e < (int)local_3b8._32_4_) {
        iVar4 = local_3b8._32_4_ + -0x41e;
        if (iVar4 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iVar4 != 0) {
          iVar5 = (local_3b8._32_4_ - iVar4) + -0x41e;
          iVar10 = local_3b8._32_4_;
          if (iVar5 != 0) {
            memmove((FScriptContainerElement *)(local_3b8._24_8_ + 0x20f0),
                    (FScriptContainerElement *)(local_3b8._24_8_ + 0x20f0) + (longlong)iVar4 * 8,
                    (longlong)iVar5 << 3);
            iVar10 = local_3b8._32_4_;
          }
          local_3b8._32_4_ = iVar10 - iVar4;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,(ForAnyElementType *)(local_3b8 + 0x18),iVar10 - iVar4,
                     (int *)(local_3b8 + 0x24));
        }
      }
      if ((int)local_3b8._48_4_ < 0x41e) {
        iVar10 = 0x41e - local_3b8._48_4_;
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar10,(ForAnyElementType *)(local_3b8 + 0x28),
                           (int *)(local_3b8 + 0x30),(int *)(local_3b8 + 0x34));
        memset((FScriptContainerElement *)(local_3b8._40_8_ + (longlong)iVar4 * 4),0,
               (longlong)iVar10 << 2);
      }
      else if (0x41e < (int)local_3b8._48_4_) {
        iVar4 = local_3b8._48_4_ + -0x41e;
        if (iVar4 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iVar4 != 0) {
          iVar5 = (local_3b8._48_4_ - iVar4) + -0x41e;
          iVar10 = local_3b8._48_4_;
          if (iVar5 != 0) {
            memmove((FScriptContainerElement *)(local_3b8._40_8_ + 0x1078),
                    (FScriptContainerElement *)(local_3b8._40_8_ + 0x1078) + (longlong)iVar4 * 4,
                    (longlong)iVar5 << 2);
            iVar10 = local_3b8._48_4_;
          }
          local_3b8._48_4_ = iVar10 - iVar4;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)(local_3b8 + 0x28),iVar10 - iVar4,
                     (int *)(local_3b8 + 0x34));
        }
      }
      if ((int)local_3b8._64_4_ < 0x3c2) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0x3c2 - local_3b8._64_4_,(ForAnyElementType *)(local_3b8 + 0x38),
                   (int *)(local_3b8 + 0x40),(int *)(local_3b8 + 0x44));
      }
      else if (0x3c2 < (int)local_3b8._64_4_) {
        iVar4 = local_3b8._64_4_ + -0x3c2;
        if (iVar4 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iVar4 != 0) {
          iVar5 = (local_3b8._64_4_ - iVar4) + -0x3c2;
          iVar10 = local_3b8._64_4_;
          if (iVar5 != 0) {
            memmove((FScriptContainerElement *)(local_3b8._56_8_ + 0x2d18),
                    (FScriptContainerElement *)(local_3b8._56_8_ + 0x2d18) + (longlong)iVar4 * 0xc,
                    (longlong)iVar5 * 0xc);
            iVar10 = local_3b8._64_4_;
          }
          local_3b8._64_4_ = iVar10 - iVar4;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,(ForAnyElementType *)(local_3b8 + 0x38),iVar10 - iVar4,
                     (int *)(local_3b8 + 0x44));
        }
      }
      if ((int)local_3b8._80_4_ < 0x3c2) {
        iVar10 = 0x3c2 - local_3b8._80_4_;
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar10,(ForAnyElementType *)(local_3b8 + 0x48),
                           (int *)(local_3b8 + 0x50),(int *)(local_3b8 + 0x54));
        memset((FScriptContainerElement *)(local_3b8._72_8_ + (longlong)iVar4 * 4),0,
               (longlong)iVar10 << 2);
      }
      else if (0x3c2 < (int)local_3b8._80_4_) {
        iVar4 = local_3b8._80_4_ + -0x3c2;
        if (iVar4 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iVar4 != 0) {
          iVar5 = (local_3b8._80_4_ - iVar4) + -0x3c2;
          iVar10 = local_3b8._80_4_;
          if (iVar5 != 0) {
            memmove((FScriptContainerElement *)(local_3b8._72_8_ + 0xf08),
                    (FScriptContainerElement *)(local_3b8._72_8_ + 0xf08) + (longlong)iVar4 * 4,
                    (longlong)iVar5 << 2);
            iVar10 = local_3b8._80_4_;
          }
          local_3b8._80_4_ = iVar10 - iVar4;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)(local_3b8 + 0x48),iVar10 - iVar4,
                     (int *)(local_3b8 + 0x54));
        }
      }
      UE::Geometry::FSphereGenerator::GenerateVertices((FSphereGenerator *)local_3b8);
      UE::Geometry::FSphereGenerator::GenerateUVVertices((FSphereGenerator *)local_3b8);
      UE::Geometry::FSphereGenerator::OutputEquatorialTriangles((FSphereGenerator *)local_3b8);
      UE::Geometry::FSphereGenerator::OutputPolarTriangles((FSphereGenerator *)local_3b8);
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2f8,(FMeshShapeGenerator *)local_3b8);
      UPreviewMesh::UpdatePreview
                ((this->SphereMesh).field0_0x0.DebugPtr,&local_2f8,FullUpdate,AllVertexAttribs);
      pUVar7 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
      pUVar8 = ToolSetupUtil::GetDefaultBrushVolumeMaterial(pUVar7);
      if (pUVar8 != (UMaterialInstanceDynamic *)0x0) {
        UPreviewMesh::SetMaterial
                  ((this->SphereMesh).field0_0x0.DebugPtr,(UMaterialInterface *)pUVar8);
      }
      pUVar1 = (((this->SphereMesh).field0_0x0.DebugPtr)->DynamicMeshComponent).field0_0x0.DebugPtr;
      if (pUVar1 != (UDynamicMeshComponent *)0x0) {
        pUVar6 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
        iVar4 = (int)pUVar6->_padding_;
        if ((iVar4 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar6->_padding_)) {
          (**(code **)(pUVar1->_padding_ + 0xc80))(pUVar1);
          UPreviewMesh::SetShadowsEnabled((this->SphereMesh).field0_0x0.DebugPtr,false);
        }
      }
      pUVar1 = (((this->SphereMesh).field0_0x0.DebugPtr)->DynamicMeshComponent).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDynamicMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      this->_padding_ = (longlong)pUVar1;
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2f8);
      local_3b8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
      if ((FScriptContainerElement *)local_3b8._136_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._136_8_);
      }
      if ((FScriptContainerElement *)local_3b8._120_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._120_8_);
      }
      if ((FScriptContainerElement *)local_3b8._104_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._104_8_);
      }
      if ((FScriptContainerElement *)local_3b8._88_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._88_8_);
      }
      if ((FScriptContainerElement *)local_3b8._72_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._72_8_);
      }
      if ((FScriptContainerElement *)local_3b8._56_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._56_8_);
      }
      if ((FScriptContainerElement *)local_3b8._40_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._40_8_);
      }
      if ((FScriptContainerElement *)local_3b8._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._24_8_);
      }
      if ((FScriptContainerElement *)local_3b8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._8_8_);
      }
    }
  }
  return;
}

// SetVolumetricBrushVisible @ 14caa49f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UVolumetricBrushStampIndicator::SetVolumetricBrushVisible
          (UVolumetricBrushStampIndicator *this,bool param_1)

{
  UPreviewMesh *this_00;
  UDynamicMeshComponent *pUVar1;
  char cVar2;
  
  this_00 = (this->SphereMesh).field0_0x0.DebugPtr;
  if (this_00 == (UPreviewMesh *)0x0) {
    return;
  }
  pUVar1 = (this_00->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x560))();
    if ((bool)cVar2 != param_1) {
      USceneComponent::SetVisibility
                ((USceneComponent *)(this_00->DynamicMeshComponent).field0_0x0.DebugPtr,param_1,
                 Propagate);
      UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(this_00);
    }
  }
  return;
}

// Shutdown @ 14caa6760

void __thiscall UVolumetricBrushStampIndicator::Shutdown(UVolumetricBrushStampIndicator *this)

{
  UPreviewMesh *this_00;
  
  this_00 = (this->SphereMesh).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect(this_00);
  }
  (this->SphereMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  return;
}

// StaticRegisterNativesUVolumetricBrushStampIndicator @ 14caa7330

void __cdecl
UVolumetricBrushStampIndicator::StaticRegisterNativesUVolumetricBrushStampIndicator(void)

{
  return;
}

