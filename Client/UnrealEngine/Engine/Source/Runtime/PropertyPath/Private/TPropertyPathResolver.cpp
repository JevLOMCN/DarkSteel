// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 40

// Resolve @ 144491a70

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<int>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<int>_> *this,
          UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<int,UObject>(param_1,param_2,(FProperty **)this[2],(int *)this[1]);
  return bVar1;
}

// Resolve @ 144491a90

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<int>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<int>_> *this,
          void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<int,void>(param_1,param_2,(FProperty **)this[2],(int *)this[1]);
  return bVar1;
}

// Resolve @ 144491ab0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<float>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<float>_> *this
          ,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<float,UObject>(param_1,param_2,(FProperty **)this[2],(float *)this[1]);
  return bVar1;
}

// Resolve @ 144491ad0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<float>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<float>_> *this
          ,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<float,void>(param_1,param_2,(FProperty **)this[2],(float *)this[1]);
  return bVar1;
}

// Resolve @ 144491af0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<UObject_*>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<UObject_*>_>
           *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<UObject_*,UObject>(param_1,param_2,(FProperty **)this[2],(UObject **)this[1]);
  return bVar1;
}

// Resolve @ 144491b10

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<UObject_*>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<UObject_*>_>
           *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<UObject_*,void>(param_1,param_2,(FProperty **)this[2],(UObject **)this[1]);
  return bVar1;
}

// Resolve @ 144491b30

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<TObjectPtr<UPropertyPathTestObject>_>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<TObjectPtr<UPropertyPathTestObject>_>_>
          *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<TObjectPtr<UPropertyPathTestObject>,UObject>
                    (param_1,param_2,(FProperty **)this[2],
                     (TObjectPtr<UPropertyPathTestObject> *)this[1]);
  return bVar1;
}

// Resolve @ 144491b50

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<TObjectPtr<UPropertyPathTestObject>_>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<TObjectPtr<UPropertyPathTestObject>_>_>
          *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<TObjectPtr<UPropertyPathTestObject>,void>
                    (param_1,param_2,(FProperty **)this[2],
                     (TObjectPtr<UPropertyPathTestObject> *)this[1]);
  return bVar1;
}

// Resolve @ 144491b70

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FPropertyPathTestStruct>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FPropertyPathTestStruct>_>
          *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<FPropertyPathTestStruct,UObject>
                    (param_1,param_2,(FProperty **)this[2],(FPropertyPathTestStruct *)this[1]);
  return bVar1;
}

// Resolve @ 144491b90

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FPropertyPathTestStruct>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FPropertyPathTestStruct>_>
          *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<FPropertyPathTestStruct,void>
                    (param_1,param_2,(FProperty **)this[2],(FPropertyPathTestStruct *)this[1]);
  return bVar1;
}

// Resolve @ 144491bb0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<TEnumAsByte<enum_EPropertyPathTestEnum>_>_>
::Resolve(void *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<TEnumAsByte<enum_EPropertyPathTestEnum>,UObject>
                    (param_1,param_2,*(FProperty ***)((longlong)this + 0x10),
                     *(TEnumAsByte<EPropertyPathTestEnum> **)((longlong)this + 8));
  return bVar1;
}

// Resolve @ 144491bd0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<TEnumAsByte<enum_EPropertyPathTestEnum>_>_>
::Resolve(void *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<TEnumAsByte<enum_EPropertyPathTestEnum>,void>
                    (param_1,param_2,*(FProperty ***)((longlong)this + 0x10),
                     *(TEnumAsByte<EPropertyPathTestEnum> **)((longlong)this + 8));
  return bVar1;
}

// Resolve @ 144491bf0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FString>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FString>_>
           *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<FString,UObject>(param_1,param_2,(FProperty **)this[2],(FString *)this[1]);
  return bVar1;
}

// Resolve @ 144491c10

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FString>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<FString>_>
           *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<FString,void>(param_1,param_2,(FProperty **)this[2],(FString *)this[1]);
  return bVar1;
}

// Resolve @ 144491c30

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<bool>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<bool>_> *this,
          UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<bool,UObject>(param_1,param_2,(FProperty **)this[2],(bool *)this[1]);
  return bVar1;
}

// Resolve @ 144491c50

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<bool>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalGetterResolver<bool>_> *this,
          void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetValue<bool,void>(param_1,param_2,(FProperty **)this[2],(bool *)this[1]);
  return bVar1;
}

// Resolve @ 144491c70

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<int>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<int>_> *this,
          UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<int,UObject>(param_1,param_2,(int *)this[1]);
  return bVar1;
}

// Resolve @ 144491c90

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<int>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<int>_> *this,
          void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<int,void>(param_1,param_2,(int *)this[1]);
  return bVar1;
}

// Resolve @ 144491cb0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<float>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<float>_> *this
          ,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<float,UObject>(param_1,param_2,(float *)this[1]);
  return bVar1;
}

// Resolve @ 144491cd0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<float>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<float>_> *this
          ,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<float,void>(param_1,param_2,(float *)this[1]);
  return bVar1;
}

// Resolve @ 144491cf0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<TObjectPtr<UPropertyPathTestObject>_>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<TObjectPtr<UPropertyPathTestObject>_>_>
          *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<TObjectPtr<UPropertyPathTestObject>,UObject>
                    (param_1,param_2,(TObjectPtr<UPropertyPathTestObject> *)this[1]);
  return bVar1;
}

// Resolve @ 144491d10

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<TObjectPtr<UPropertyPathTestObject>_>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<TObjectPtr<UPropertyPathTestObject>_>_>
          *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<TObjectPtr<UPropertyPathTestObject>,void>
                    (param_1,param_2,(TObjectPtr<UPropertyPathTestObject> *)this[1]);
  return bVar1;
}

// Resolve @ 144491d30

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<FPropertyPathTestStruct>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<FPropertyPathTestStruct>_>
          *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<FPropertyPathTestStruct,UObject>
                    (param_1,param_2,(FPropertyPathTestStruct *)this[1]);
  return bVar1;
}

// Resolve @ 144491d50

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<FPropertyPathTestStruct>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<FPropertyPathTestStruct>_>
          *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<FPropertyPathTestStruct,void>(param_1,param_2,(FPropertyPathTestStruct *)this[1])
  ;
  return bVar1;
}

// Resolve @ 144491d70

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<PropertyPathHelpersInternal::FPropertyStructView>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<PropertyPathHelpersInternal::FPropertyStructView>_>
          *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<PropertyPathHelpersInternal::FPropertyStructView,UObject>
                    (param_1,param_2,(FPropertyStructView *)this[1]);
  return bVar1;
}

// Resolve @ 144491d90

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<PropertyPathHelpersInternal::FPropertyStructView>_>
::Resolve(TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<PropertyPathHelpersInternal::FPropertyStructView>_>
          *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<PropertyPathHelpersInternal::FPropertyStructView,void>
                    (param_1,param_2,(FPropertyStructView *)this[1]);
  return bVar1;
}

// Resolve @ 144491db0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<FString>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<FString>_>
           *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<FString,UObject>(param_1,param_2,(FString *)this[1]);
  return bVar1;
}

// Resolve @ 144491dd0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<FString>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<FString>_>
           *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<FString,void>(param_1,param_2,(FString *)this[1]);
  return bVar1;
}

// Resolve @ 144491df0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<enum_EPropertyPathTestEnum>_>
::Resolve(void *this,UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<enum_EPropertyPathTestEnum,UObject>
                    (param_1,param_2,*(EPropertyPathTestEnum **)((longlong)this + 8));
  return bVar1;
}

// Resolve @ 144491e10

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<enum_EPropertyPathTestEnum>_>
::Resolve(void *this,void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<enum_EPropertyPathTestEnum,void>
                    (param_1,param_2,*(EPropertyPathTestEnum **)((longlong)this + 8));
  return bVar1;
}

// Resolve @ 144491e30

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<bool>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<bool>_> *this,
          UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<bool,UObject>(param_1,param_2,(bool *)this[1]);
  return bVar1;
}

// Resolve @ 144491e50

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<bool>_>::Resolve
          (TPropertyPathResolver<PropertyPathHelpersInternal::FInternalSetterResolver<bool>_> *this,
          void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetValue<bool,void>(param_1,param_2,(bool *)this[1]);
  return bVar1;
}

// Resolve @ 144491e70

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpers::FInternalArrayOperationResolver>::Resolve
          (TPropertyPathResolver<PropertyPathHelpers::FInternalArrayOperationResolver> *this,
          UObject *param_1,FCachedPropertyPath *param_2)

{
  int iVar1;
  TPropertyPathResolver<PropertyPathHelpers::FInternalArrayOperationResolver> TVar2;
  TPropertyPathResolver<PropertyPathHelpers::FInternalArrayOperationResolver> TVar3;
  code *pcVar4;
  FFieldObjectUnion FVar5;
  bool bVar6;
  undefined1 uVar7;
  FPropertyPathSegment *pFVar8;
  FFieldClass *pFVar9;
  void *pvVar10;
  int local_res8 [2];
  FFieldObjectUnion local_res20;
  longlong local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  TVar2 = this[1];
  TVar3 = this[2];
  pFVar8 = FCachedPropertyPath::GetLastSegment(param_2);
  local_res20 = (FFieldObjectUnion)(pFVar8->Field).Container.Field;
  iVar1 = pFVar8->ArrayIndex;
  if ((((local_res20.Unknown & 1) != 0) &&
      ((UObject *)(local_res20.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(local_res20.Unknown & 0xfffffffffffffffe));
  }
  pFVar9 = FArrayProperty::StaticClass();
  bVar6 = FFieldVariant::IsA((FFieldVariant *)&local_res20,pFVar9);
  FVar5 = local_res20;
  if ((bVar6) && ((FProperty *)local_res20.Field != (FProperty *)0x0)) {
    pvVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        ((FProperty *)local_res20.Field,param_1,0);
    uVar7 = (undefined1)((FProperty *)(FVar5.Unknown + 0x70))->_padding_;
    local_34 = (**(code **)(**(longlong **)(FVar5.Unknown + 0x78) + 0x168))();
    local_48 = *(longlong *)(FVar5.Unknown + 0x78);
    local_38 = *(int *)(local_48 + 0x34);
    local_40 = pvVar10;
    local_30 = uVar7;
    if (local_38 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    if (local_48 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    local_res8[0] = iVar1;
    uVar7 = (*(code *)TVar2)(TVar3,&local_48,local_res8);
    return (bool)uVar7;
  }
  return false;
}

// Resolve @ 144491fd0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpers::FInternalArrayOperationResolver>::Resolve
          (TPropertyPathResolver<PropertyPathHelpers::FInternalArrayOperationResolver> *this,
          void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  TPropertyPathResolver<PropertyPathHelpers::FInternalArrayOperationResolver> local_18;
  TPropertyPathResolver<PropertyPathHelpers::FInternalArrayOperationResolver> local_10;
  
  local_18 = this[1];
  local_10 = this[2];
  bVar1 = PerformArrayOperation<void>
                    (param_1,param_2,
                     (TFunctionRef<bool___cdecl(FScriptArrayHelper_&,int)> *)&local_18);
  return bVar1;
}

// Resolve @ 144492010

bool __thiscall
PropertyPathHelpersInternal::TPropertyPathResolver<FInternalCacheResolver>::Resolve
          (TPropertyPathResolver<FInternalCacheResolver> *this,UObject *param_1,
          FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = CacheResolveAddress<UObject>(param_1,param_2);
  return bVar1;
}

// Resolve @ 144492030

bool __thiscall
PropertyPathHelpersInternal::TPropertyPathResolver<FInternalCacheResolver>::Resolve
          (TPropertyPathResolver<FInternalCacheResolver> *this,void *param_1,
          FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = CacheResolveAddress<void>(param_1,param_2);
  return bVar1;
}

// Resolve @ 144492050

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpers::FInternalStringGetterResolver>::Resolve
          (TPropertyPathResolver<PropertyPathHelpers::FInternalStringGetterResolver> *this,
          UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetPropertyValueAsString<UObject>
                    (param_1,param_2,(FProperty **)this[2],(FString *)this[1],*(uint *)(this + 3));
  return bVar1;
}

// Resolve @ 144492080

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpers::FInternalStringGetterResolver>::Resolve
          (TPropertyPathResolver<PropertyPathHelpers::FInternalStringGetterResolver> *this,
          void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = GetPropertyValueAsString<void>
                    (param_1,param_2,(FProperty **)this[2],(FString *)this[1],*(uint *)(this + 3));
  return bVar1;
}

// Resolve @ 1444920b0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpers::FInternalStringSetterResolver>::Resolve
          (TPropertyPathResolver<PropertyPathHelpers::FInternalStringSetterResolver> *this,
          UObject *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetPropertyValueFromString<UObject>
                    (param_1,param_2,(FString *)this[1],*(uint *)(this + 2));
  return bVar1;
}

// Resolve @ 1444920d0

bool __thiscall
PropertyPathHelpersInternal::
TPropertyPathResolver<PropertyPathHelpers::FInternalStringSetterResolver>::Resolve
          (TPropertyPathResolver<PropertyPathHelpers::FInternalStringSetterResolver> *this,
          void *param_1,FCachedPropertyPath *param_2)

{
  bool bVar1;
  
  bVar1 = SetPropertyValueFromString<void>(param_1,param_2,(FString *)this[1],*(uint *)(this + 2));
  return bVar1;
}

