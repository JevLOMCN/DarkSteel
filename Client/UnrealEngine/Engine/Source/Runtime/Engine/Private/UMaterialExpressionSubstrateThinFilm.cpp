// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0a9f0

UClass * __cdecl UMaterialExpressionSubstrateThinFilm::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateThinFilm.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateThinFilm",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateThinFilm.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateThinFilm,0x178,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateThinFilm>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateThinFilm>,local_res8,
               UMaterialExpressionSubstrateUtilityBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateThinFilm.InnerSingleton;
}

// UMaterialExpressionSubstrateThinFilm @ 147f2cf50

UMaterialExpressionSubstrateThinFilm * __thiscall
UMaterialExpressionSubstrateThinFilm::UMaterialExpressionSubstrateThinFilm
          (UMaterialExpressionSubstrateThinFilm *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateThinFilm__6B_;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->F0).OutputIndex = 0;
  (this->F0).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F0).InputName.Number = 0;
  (this->F0).MaskR = 0;
  (this->F0).MaskG = 0;
  (this->F0).MaskB = 0;
  (this->F0).MaskA = 0;
  (this->F0).Expression = (UMaterialExpression *)0x0;
  (this->F90).OutputIndex = 0;
  (this->F90).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F90).InputName.Number = 0;
  (this->F90).MaskR = 0;
  (this->F90).MaskG = 0;
  (this->F90).MaskB = 0;
  (this->F90).MaskA = 0;
  (this->F90).Expression = (UMaterialExpression *)0x0;
  (this->Thickness).OutputIndex = 0;
  (this->Thickness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Thickness).InputName.Number = 0;
  (this->Thickness).MaskR = 0;
  (this->Thickness).MaskG = 0;
  (this->Thickness).MaskB = 0;
  (this->Thickness).MaskA = 0;
  (this->Thickness).Expression = (UMaterialExpression *)0x0;
  (this->IOR).OutputIndex = 0;
  (this->IOR).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IOR).InputName.Number = 0;
  (this->IOR).MaskR = 0;
  (this->IOR).MaskG = 0;
  (this->IOR).MaskB = 0;
  (this->IOR).MaskA = 0;
  (this->IOR).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateThinFilm @ 147f2d030

UMaterialExpressionSubstrateThinFilm * __thiscall
UMaterialExpressionSubstrateThinFilm::UMaterialExpressionSubstrateThinFilm
          (UMaterialExpressionSubstrateThinFilm *this,FObjectInitializer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  UMaterialExpressionSubstrateThinFilm *pUVar9;
  ulonglong uVar10;
  FName local_res8;
  FName local_res18 [2];
  FName local_58;
  FName FStack_50;
  FName FStack_48;
  uint local_40;
  FName local_3c;
  FName FStack_34;
  FName FStack_2c;
  uint local_24;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar10 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateThinFilm__6B_;
  pvVar5 = ThreadLocalStoragePointer;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  lVar3 = *(longlong *)((longlong)pvVar5 + uVar10 * 8);
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->F0).OutputIndex = 0;
  (this->F0).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F0).InputName.Number = 0;
  (this->F0).MaskR = 0;
  (this->F0).MaskG = 0;
  (this->F0).MaskB = 0;
  (this->F0).MaskA = 0;
  (this->F0).Expression = (UMaterialExpression *)0x0;
  (this->F90).OutputIndex = 0;
  (this->F90).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F90).InputName.Number = 0;
  (this->F90).MaskR = 0;
  (this->F90).MaskG = 0;
  (this->F90).MaskB = 0;
  (this->F90).MaskA = 0;
  (this->F90).Expression = (UMaterialExpression *)0x0;
  (this->Thickness).OutputIndex = 0;
  (this->Thickness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Thickness).InputName.Number = 0;
  (this->Thickness).MaskR = 0;
  (this->Thickness).MaskG = 0;
  (this->Thickness).MaskB = 0;
  (this->Thickness).MaskA = 0;
  (this->Thickness).Expression = (UMaterialExpression *)0x0;
  (this->IOR).OutputIndex = 0;
  (this->IOR).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IOR).InputName.Number = 0;
  (this->IOR).MaskR = 0;
  (this->IOR).MaskG = 0;
  (this->IOR).MaskB = 0;
  (this->IOR).MaskA = 0;
  (this->IOR).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Helpers",L"Substrate Helpers");
      atexit(`UMaterialExpressionSubstrateThinFilm::UMaterialExpressionSubstrateThinFilm'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
  plVar2 = &this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)plVar2,0,piVar1);
  }
  pFVar8 = ::FName::FName(&local_res8,L"Specular Color");
  local_58 = *pFVar8;
  local_40 = 0;
  FStack_50.ComparisonIndex.Value = 0;
  FStack_50.Number = 0;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  if (((FName *)*plVar2 <= &local_58) && (&local_58 < (FName *)(*plVar2 + (longlong)*piVar1 * 0x1c))
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UMaterialExpressionSubstrateThinFilm *)(*pcVar4)();
      return pUVar9;
    }
  }
  iVar7 = (int)this->_padding_;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  pFVar8 = (FName *)(*plVar2 + (longlong)iVar7 * 0x1c);
  *pFVar8 = local_58;
  pFVar8[1] = FStack_50;
  pFVar8[2] = FStack_48;
  pFVar8[3].ComparisonIndex.Value = local_40;
  pFVar8 = ::FName::FName(local_res18,L"Edge Specular Color");
  local_3c = *pFVar8;
  local_24 = 0;
  FStack_34.ComparisonIndex.Value = 0;
  FStack_34.Number = 0;
  FStack_2c.ComparisonIndex.Value = 0;
  FStack_2c.Number = 0;
  if (((FName *)*plVar2 <= &local_3c) && (&local_3c < (FName *)(*plVar2 + (longlong)*piVar1 * 0x1c))
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UMaterialExpressionSubstrateThinFilm *)(*pcVar4)();
      return pUVar9;
    }
  }
  iVar7 = (int)this->_padding_;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  pFVar8 = (FName *)(*plVar2 + (longlong)iVar7 * 0x1c);
  *pFVar8 = local_3c;
  pFVar8[1] = FStack_34;
  pFVar8[2] = FStack_2c;
  pFVar8[3].ComparisonIndex.Value = local_24;
  return this;
}

// ~UMaterialExpressionSubstrateThinFilm @ 147f2f130

void __thiscall
UMaterialExpressionSubstrateThinFilm::~UMaterialExpressionSubstrateThinFilm
          (UMaterialExpressionSubstrateThinFilm *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateUtilityBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42f10

UClass * __cdecl UMaterialExpressionSubstrateThinFilm::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateThinFilm.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateThinFilm",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateThinFilm.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateThinFilm,0x178,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateThinFilm>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateThinFilm>,local_res8,
               UMaterialExpressionSubstrateUtilityBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateThinFilm.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateThinFilm @ 147f52bd0

void __cdecl
UMaterialExpressionSubstrateThinFilm::StaticRegisterNativesUMaterialExpressionSubstrateThinFilm
          (void)

{
  return;
}

