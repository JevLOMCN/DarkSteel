// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// StaticClass @ 1468d9930

UClass * __cdecl UListViewDesignerPreviewItem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ListViewDesignerPreviewItem",
               &Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton,
               StaticRegisterNativesUListViewDesignerPreviewItem,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UListViewDesignerPreviewItem>,
               InternalVTableHelperCtorCaller<UListViewDesignerPreviewItem>,local_res8,
               UObject::StaticClass,UListView::StaticClass);
  }
  return Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton;
}

// UListViewDesignerPreviewItem @ 1469013a0

UListViewDesignerPreviewItem * __thiscall
UListViewDesignerPreviewItem::UListViewDesignerPreviewItem
          (UListViewDesignerPreviewItem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UListViewDesignerPreviewItem__6B_;
  return this;
}

// UListViewDesignerPreviewItem @ 1469013d0

UListViewDesignerPreviewItem * __thiscall
UListViewDesignerPreviewItem::UListViewDesignerPreviewItem
          (UListViewDesignerPreviewItem *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UListViewDesignerPreviewItem__6B_;
  return this;
}

// ~UListViewDesignerPreviewItem @ 1469049c0

void __thiscall
UListViewDesignerPreviewItem::~UListViewDesignerPreviewItem(UListViewDesignerPreviewItem *this)

{
  *(undefined ***)this = &___7UListViewDesignerPreviewItem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146922230

UClass * __cdecl UListViewDesignerPreviewItem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ListViewDesignerPreviewItem",
               &Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton,
               StaticRegisterNativesUListViewDesignerPreviewItem,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UListViewDesignerPreviewItem>,
               InternalVTableHelperCtorCaller<UListViewDesignerPreviewItem>,local_res8,
               UObject::StaticClass,UListView::StaticClass);
  }
  return Z_Registration_Info_UClass_UListViewDesignerPreviewItem.InnerSingleton;
}

// StaticRegisterNativesUListViewDesignerPreviewItem @ 146945930

void __cdecl UListViewDesignerPreviewItem::StaticRegisterNativesUListViewDesignerPreviewItem(void)

{
  return;
}

