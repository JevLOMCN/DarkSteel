// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 8

// FMaterialFactory @ 14e62ae40

FMaterialFactory * __thiscall
GLTF::FMaterialFactory::FMaterialFactory
          (FMaterialFactory *this,IMaterialElementFactory *param_1,ITextureFactory *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMaterialFactoryImpl *pFVar6;
  FMaterialFactory *pFVar7;
  FText *pFVar8;
  FText local_18;
  
  pFVar6 = ::operator_new(0x30);
  if (pFVar6 == (FMaterialFactoryImpl *)0x0) {
    (this->Impl).Ptr = (FMaterialFactoryImpl *)0x0;
  }
  else {
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    (pFVar6->MaterialElementFactory).Ptr = param_1;
    (pFVar6->TextureFactory).Ptr = param_2;
    (pFVar6->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Materials).ArrayNum = 0;
    (pFVar6->Materials).ArrayMax = 0;
    if (param_1 == (IMaterialElementFactory *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8988603957609758758>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialFactory.cpp"
                         ,0x26,"MaterialElementFactory");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMaterialFactory *)(*pcVar3)();
        return pFVar7;
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"InterchangeGLTFMaterialFactory",L"MaterialElementFactoryNull",
                          L"MaterialElementFactory is unexpected nullptr.");
      iVar5 = (int)pFVar6->_padding_;
      if (iVar5 == *(int *)((longlong)&pFVar6->_padding_ + 4)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)pFVar6,
                           (int *)((longlong)&pFVar6->_padding_ + 4));
      }
      *(int *)&pFVar6->_padding_ = iVar5 + 1;
      pFVar2 = (FScriptContainerElement *)pFVar6->_padding_;
      lVar1 = (longlong)iVar5 * 3 + 1;
      *(undefined4 *)(pFVar2 + lVar1 * 8 + -8) = 1;
      FText::FText((FText *)(pFVar2 + lVar1 * 8),pFVar8);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    (this->Impl).Ptr = pFVar6;
  }
  return this;
}

// ~FMaterialFactory @ 14e62be70

void __thiscall GLTF::FMaterialFactory::~FMaterialFactory(FMaterialFactory *this)

{
  FMaterialFactoryImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  ITextureFactory *pIVar3;
  IMaterialElementFactory *pIVar4;
  
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FMaterialFactoryImpl *)0x0) {
    pFVar2 = (pFVar1->Materials).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pIVar3 = (pFVar1->TextureFactory).Ptr;
    if (pIVar3 != (ITextureFactory *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
    pIVar4 = (pFVar1->MaterialElementFactory).Ptr;
    if (pIVar4 != (IMaterialElementFactory *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
              ((TTuple<GLTF::EMessageSeverity,FText> *)pFVar1->_padding_,(int)pFVar1->_padding_);
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x30);
    return;
  }
  return;
}

// CleanUp @ 14e631510

void __thiscall GLTF::FMaterialFactory::CleanUp(FMaterialFactory *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FMaterialFactoryImpl *pFVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Impl).Ptr;
  pFVar6 = (pFVar4->Materials).AllocatorInstance.Data;
  iVar3 = (pFVar4->Materials).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((pFVar4->Materials).ArrayNum != iVar3) {
      `TCheckedPointerIterator<GLTF::FMaterialElement_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    puVar5 = *(undefined8 **)pFVar6;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    pFVar6 = pFVar6 + 8;
  }
  pFVar4 = (this->Impl).Ptr;
  piVar1 = &(pFVar4->Materials).ArrayMax;
  (pFVar4->Materials).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pFVar4->Materials).AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateMaterials @ 14e632410

TArray<GLTF::FMaterialElement_*,TSizedDefaultAllocator<32>_> * __thiscall
GLTF::FMaterialFactory::CreateMaterials
          (FMaterialFactory *this,FAsset *param_1,UObject *param_2,EObjectFlags param_3)

{
  TArray<GLTF::FMaterialElement_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = FMaterialFactoryImpl::CreateMaterials((this->Impl).Ptr,param_1,param_2,param_3);
  return pTVar1;
}

// GetLogMessages @ 14e63c990

TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> * __thiscall
GLTF::FMaterialFactory::GetLogMessages(FMaterialFactory *this)

{
  return (TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> *)
         (this->Impl).Ptr;
}

// GetMaterialElementFactory @ 14e63d430

IMaterialElementFactory * __thiscall
GLTF::FMaterialFactory::GetMaterialElementFactory(FMaterialFactory *this)

{
  return (((this->Impl).Ptr)->MaterialElementFactory).Ptr;
}

// GetMaterials @ 14e63d470

TArray<GLTF::FMaterialElement_*,TSizedDefaultAllocator<32>_> * __thiscall
GLTF::FMaterialFactory::GetMaterials(FMaterialFactory *this)

{
  return &((this->Impl).Ptr)->Materials;
}

// GetTextureFactory @ 14e63e7e0

ITextureFactory * __thiscall GLTF::FMaterialFactory::GetTextureFactory(FMaterialFactory *this)

{
  return (((this->Impl).Ptr)->TextureFactory).Ptr;
}

