// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 1496c2730

UClass * __cdecl UInteractiveToolWithToolTargetsBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolWithToolTargetsBuilder",
               &Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.InnerSingleton,
               StaticRegisterNativesUInteractiveToolWithToolTargetsBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolWithToolTargetsBuilder>,
               InternalVTableHelperCtorCaller<UInteractiveToolWithToolTargetsBuilder>,aFStackX_8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.InnerSingleton;
}

// UInteractiveToolWithToolTargetsBuilder @ 1496d3150

UInteractiveToolWithToolTargetsBuilder * __thiscall
UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
          (UInteractiveToolWithToolTargetsBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolWithToolTargetsBuilder__6B_;
  return this;
}

// UInteractiveToolWithToolTargetsBuilder @ 1496d3180

UInteractiveToolWithToolTargetsBuilder * __thiscall
UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
          (UInteractiveToolWithToolTargetsBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolWithToolTargetsBuilder__6B_;
  return this;
}

// ~UInteractiveToolWithToolTargetsBuilder @ 1496d4760

void __thiscall
UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
          (UInteractiveToolWithToolTargetsBuilder *this)

{
  *(undefined ***)this = &___7UInteractiveToolBuilder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1496dd7f0

UClass * __cdecl UInteractiveToolWithToolTargetsBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolWithToolTargetsBuilder",
               &Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.InnerSingleton,
               StaticRegisterNativesUInteractiveToolWithToolTargetsBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolWithToolTargetsBuilder>,
               InternalVTableHelperCtorCaller<UInteractiveToolWithToolTargetsBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolWithToolTargetsBuilder.InnerSingleton;
}

// GetTargetRequirements @ 1496de220

FToolTargetTypeRequirements * __thiscall
UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements
          (UInteractiveToolWithToolTargetsBuilder *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
      ::__l2::TypeRequirements.Interfaces.ArrayMax = 5;
      `protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
      ::__l2::TypeRequirements.Interfaces.AllocatorInstance.SecondaryData =
           (ForElementType<UClass_const_*>)0x0;
      `protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
      ::__l2::TypeRequirements.Interfaces.ArrayNum = 0;
      atexit(`UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements'::__l2::
             _dynamic_atexit_destructor_for__TypeRequirements__);
      _Init_thread_footer(&`protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
              ::__l2::TypeRequirements;
    }
  }
  return &`protected:_virtual_class_FToolTargetTypeRequirements_const&___ptr64___cdecl_UInteractiveToolWithToolTargetsBuilder::GetTargetRequirements(void)const___ptr64'
          ::__l2::TypeRequirements;
}

// StaticRegisterNativesUInteractiveToolWithToolTargetsBuilder @ 1496e6710

void __cdecl
UInteractiveToolWithToolTargetsBuilder::StaticRegisterNativesUInteractiveToolWithToolTargetsBuilder
          (void)

{
  return;
}

