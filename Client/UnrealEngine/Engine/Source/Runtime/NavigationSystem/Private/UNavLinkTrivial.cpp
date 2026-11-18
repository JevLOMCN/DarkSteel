// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d609f0

UClass * __cdecl UNavLinkTrivial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkTrivial",
               &Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton,
               StaticRegisterNativesUNavLinkTrivial,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkTrivial>,InternalVTableHelperCtorCaller<UNavLinkTrivial>,
               local_res8,UNavLinkDefinition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton;
}

// UNavLinkTrivial @ 146d76200

UNavLinkTrivial * __thiscall
UNavLinkTrivial::UNavLinkTrivial(UNavLinkTrivial *this,FVTableHelper *param_1)

{
  UNavLinkDefinition::UNavLinkDefinition((UNavLinkDefinition *)this,param_1);
  *(undefined ***)this = &___7UNavLinkTrivial__6B_;
  return this;
}

// ~UNavLinkTrivial @ 146d78d10

void __thiscall UNavLinkTrivial::~UNavLinkTrivial(UNavLinkTrivial *this)

{
  *(undefined ***)this = &___7UNavLinkTrivial__6B_;
  UNavLinkDefinition::~UNavLinkDefinition((UNavLinkDefinition *)this);
  return;
}

// GetPrivateStaticClass @ 146da07f0

UClass * __cdecl UNavLinkTrivial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkTrivial",
               &Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton,
               StaticRegisterNativesUNavLinkTrivial,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkTrivial>,InternalVTableHelperCtorCaller<UNavLinkTrivial>,
               local_res8,UNavLinkDefinition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton;
}

// StaticRegisterNativesUNavLinkTrivial @ 146dba9b0

void __cdecl UNavLinkTrivial::StaticRegisterNativesUNavLinkTrivial(void)

{
  return;
}

// UNavLinkTrivial @ 146dd87a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UNavLinkTrivial * __thiscall
UNavLinkTrivial::UNavLinkTrivial(UNavLinkTrivial *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  UNavLinkTrivial *pUVar5;
  FNavigationLinkBase *this_00;
  FNavigationLinkBase local_78;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong64 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UNavLinkDefinition::UNavLinkDefinition((UNavLinkDefinition *)this,param_1);
  *(undefined ***)this = &___7UNavLinkTrivial__6B_;
  FNavigationLinkBase::FNavigationLinkBase(&local_78);
  local_38 = ___xmm_40590000000000000000000000000000;
  uStack_30 = _UNK_150f34e28;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = ___xmm_0000000000000000c059000000000000;
  uStack_10 = _UNK_15149cb18;
  if ((*(FNavigationLinkBase **)&this->field_0x28 <= &local_78) &&
     (&local_78 <
      (FNavigationLinkBase *)
      ((longlong)*(FNavigationLinkBase **)&this->field_0x28 +
      (longlong)*(int *)&this->field_0x34 * 0x70))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UNavLinkTrivial *)(*pcVar1)();
      return pUVar5;
    }
  }
  uVar3 = *(uint *)&this->field_0x30;
  if (uVar3 == *(uint *)&this->field_0x34) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(uint *)&this->field_0x30 = uVar3 + 1;
  this_00 = (FNavigationLinkBase *)(*(longlong *)&this->field_0x28 + (longlong)(int)uVar3 * 0x70);
  FNavigationLinkBase::FNavigationLinkBase(this_00,&local_78);
  this_00[1].LeftProjectHeight = (float)(undefined4)local_38;
  this_00[1].MaxFallDownLength = (float)local_38._4_4_;
  *(undefined8 *)&this_00[1].UserId = uStack_30;
  this_00[1].NavLinkId.Id = local_28;
  this_00[1].SnapRadius = (float)(undefined4)uStack_20;
  this_00[1].SnapHeight = (float)uStack_20._4_4_;
  this_00[1].SupportedAgents = (FNavAgentSelector)(undefined4)local_18;
  this_00[1].field7_0x24 = (FNavigationLinkBase_u_36)local_18._4_4_;
  *(undefined8 *)&this_00[1].Direction = uStack_10;
  uVar4 = 0;
  if ((int)uVar3 < *(int *)&this->field_0x30) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UNavLinkTrivial *)(*pcVar1)();
      return pUVar5;
    }
  }
  return this;
}

