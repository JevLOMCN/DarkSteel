// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b77bb30

UClass * __cdecl UDS_W_DragDropOperation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_DragDropOperation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_DragDropOperation",
               &Z_Registration_Info_UClass_UDS_W_DragDropOperation.InnerSingleton,
               StaticRegisterNativesUDS_W_DragDropOperation,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_DragDropOperation>,
               InternalVTableHelperCtorCaller<UDS_W_DragDropOperation>,local_res8,
               UDragDropOperation::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_DragDropOperation.InnerSingleton;
}

// UDS_W_DragDropOperation @ 14b781c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_DragDropOperation * __thiscall
UDS_W_DragDropOperation::UDS_W_DragDropOperation
          (UDS_W_DragDropOperation *this,FVTableHelper *param_1)

{
  UDragDropOperation::UDragDropOperation((UDragDropOperation *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_W_DragDropOperation__6B_;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ShiftDown = false;
  return this;
}

// UDS_W_DragDropOperation @ 14b781c80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_DragDropOperation * __thiscall
UDS_W_DragDropOperation::UDS_W_DragDropOperation
          (UDS_W_DragDropOperation *this,FObjectInitializer *param_1)

{
  UDragDropOperation::UDragDropOperation((UDragDropOperation *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_W_DragDropOperation__6B_;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ShiftDown = false;
  return this;
}

// ~UDS_W_DragDropOperation @ 14b783140

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_DragDropOperation::~UDS_W_DragDropOperation(UDS_W_DragDropOperation *this)

{
  this->_padding_ = (longlong)&___7UDS_W_DragDropOperation__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController);
  UDragDropOperation::~UDragDropOperation((UDragDropOperation *)this);
  return;
}

// GetPrivateStaticClass @ 14b785de0

UClass * __cdecl UDS_W_DragDropOperation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_DragDropOperation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_DragDropOperation",
               &Z_Registration_Info_UClass_UDS_W_DragDropOperation.InnerSingleton,
               StaticRegisterNativesUDS_W_DragDropOperation,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_DragDropOperation>,
               InternalVTableHelperCtorCaller<UDS_W_DragDropOperation>,local_res8,
               UDragDropOperation::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_DragDropOperation.InnerSingleton;
}

// StaticRegisterNativesUDS_W_DragDropOperation @ 14b786580

void __cdecl UDS_W_DragDropOperation::StaticRegisterNativesUDS_W_DragDropOperation(void)

{
  return;
}

