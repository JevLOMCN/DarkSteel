// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 8

// <lambda_invoker_cdecl> @ 142ccc8d0

bool __cdecl
`UE::Editor::DataStorage::Queries::TQueryFunctionBase<int>::CallInternal<1>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>
          (IQueryFunctionResponse *param_1,TArrayView<void_const_*,int> *param_2,
          TArrayView<void_*,int> *param_3)

{
  void **ppvVar1;
  byte bVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  bVar2 = 0;
  ppvVar4 = param_3->DataPtr;
  ppvVar3 = param_2->DataPtr;
  ppvVar1 = ppvVar3 + (int)*(undefined8 *)&param_2->ArrayNum;
  for (; ppvVar3 != ppvVar1; ppvVar3 = ppvVar3 + 1) {
    if ((bVar2 != 0) || (bVar2 = 0, *ppvVar3 == (void *)0x0)) {
      bVar2 = 1;
    }
  }
  ppvVar1 = ppvVar4 + (int)*(undefined8 *)&param_3->ArrayNum;
  for (; ppvVar4 != ppvVar1; ppvVar4 = ppvVar4 + 1) {
    if ((bVar2 != 0) || (bVar2 = 0, *ppvVar4 == (void *)0x0)) {
      bVar2 = 1;
    }
  }
  return (bool)(bVar2 ^ 1);
}

// <lambda_invoker_cdecl> @ 142ccc940

bool __cdecl
`UE::Editor::DataStorage::Queries::TQueryFunctionBase<void>::CallInternal<1>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>
          (IQueryFunctionResponse *param_1,TArrayView<void_const_*,int> *param_2,
          TArrayView<void_*,int> *param_3)

{
  void **ppvVar1;
  byte bVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  bVar2 = 0;
  ppvVar4 = param_3->DataPtr;
  ppvVar3 = param_2->DataPtr;
  ppvVar1 = ppvVar3 + (int)*(undefined8 *)&param_2->ArrayNum;
  for (; ppvVar3 != ppvVar1; ppvVar3 = ppvVar3 + 1) {
    if ((bVar2 != 0) || (bVar2 = 0, *ppvVar3 == (void *)0x0)) {
      bVar2 = 1;
    }
  }
  ppvVar1 = ppvVar4 + (int)*(undefined8 *)&param_3->ArrayNum;
  for (; ppvVar4 != ppvVar1; ppvVar4 = ppvVar4 + 1) {
    if ((bVar2 != 0) || (bVar2 = 0, *ppvVar4 == (void *)0x0)) {
      bVar2 = 1;
    }
  }
  return (bool)(bVar2 ^ 1);
}

// <lambda_invoker_cdecl> @ 142ccc9b0

bool __cdecl
`UE::Editor::DataStorage::Queries::TQueryFunctionBase<bool>::CallInternal<1>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>
          (IQueryFunctionResponse *param_1,TArrayView<void_const_*,int> *param_2,
          TArrayView<void_*,int> *param_3)

{
  void **ppvVar1;
  byte bVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  bVar2 = 0;
  ppvVar4 = param_3->DataPtr;
  ppvVar3 = param_2->DataPtr;
  ppvVar1 = ppvVar3 + (int)*(undefined8 *)&param_2->ArrayNum;
  for (; ppvVar3 != ppvVar1; ppvVar3 = ppvVar3 + 1) {
    if ((bVar2 != 0) || (bVar2 = 0, *ppvVar3 == (void *)0x0)) {
      bVar2 = 1;
    }
  }
  ppvVar1 = ppvVar4 + (int)*(undefined8 *)&param_3->ArrayNum;
  for (; ppvVar4 != ppvVar1; ppvVar4 = ppvVar4 + 1) {
    if ((bVar2 != 0) || (bVar2 = 0, *ppvVar4 == (void *)0x0)) {
      bVar2 = 1;
    }
  }
  return (bool)(bVar2 ^ 1);
}

// <lambda_invoker_cdecl> @ 142ccca20

bool __cdecl
`UE::Editor::DataStorage::Queries::TQueryFunctionBase<void>::CallInternal<0>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>
          (IQueryFunctionResponse *param_1,TArrayView<void_const_*,int> *param_2,
          TArrayView<void_*,int> *param_3)

{
  return true;
}

// CallInternal<1> @ 142cd55f0

void __thiscall
UE::Editor::DataStorage::Queries::TQueryFunctionBase<int>::CallInternal<1>
          (TQueryFunctionBase<int> *this,TResult<int> *param_1,IContextContract *param_2,
          IQueryFunctionResponse *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *local_res8;
  
  local_res8 = `UE::Editor::DataStorage::Queries::TQueryFunctionBase<int>::CallInternal<1>'::__l2::
               <lambda_1>::<lambda_invoker_cdecl>;
  Core::Private::Function::CheckCallable(*(void **)&this->Function);
  plVar1 = *(longlong **)&(this->Function).field_0x28;
  pcVar2 = *(code **)&this->Function;
  plVar4 = (longlong *)&(this->Function).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_1,param_2,param_3,&local_res8);
  return;
}

// CallInternal<1> @ 142cd5670

void __thiscall
UE::Editor::DataStorage::Queries::TQueryFunctionBase<void>::CallInternal<1>
          (TQueryFunctionBase<void> *this,TResult<void> *param_1,IContextContract *param_2,
          IQueryFunctionResponse *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *local_res8;
  
  local_res8 = `UE::Editor::DataStorage::Queries::TQueryFunctionBase<void>::CallInternal<1>'::__l2::
               <lambda_1>::<lambda_invoker_cdecl>;
  Core::Private::Function::CheckCallable(*(void **)&this->Function);
  plVar1 = *(longlong **)&(this->Function).field_0x28;
  pcVar2 = *(code **)&this->Function;
  plVar4 = (longlong *)&(this->Function).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_1,param_2,param_3,&local_res8);
  return;
}

// CallInternal<1> @ 142cd56f0

void __thiscall
UE::Editor::DataStorage::Queries::TQueryFunctionBase<bool>::CallInternal<1>
          (TQueryFunctionBase<bool> *this,TResult<bool> *param_1,IContextContract *param_2,
          IQueryFunctionResponse *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *local_res8;
  
  local_res8 = `UE::Editor::DataStorage::Queries::TQueryFunctionBase<bool>::CallInternal<1>'::__l2::
               <lambda_1>::<lambda_invoker_cdecl>;
  Core::Private::Function::CheckCallable(*(void **)&this->Function);
  plVar1 = *(longlong **)&(this->Function).field_0x28;
  pcVar2 = *(code **)&this->Function;
  plVar4 = (longlong *)&(this->Function).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_1,param_2,param_3,&local_res8);
  return;
}

// CallInternal<0> @ 142cd5770

void __thiscall
UE::Editor::DataStorage::Queries::TQueryFunctionBase<void>::CallInternal<0>
          (TQueryFunctionBase<void> *this,TResult<void> *param_1,IContextContract *param_2,
          IQueryFunctionResponse *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *local_res8;
  
  local_res8 = `UE::Editor::DataStorage::Queries::TQueryFunctionBase<void>::CallInternal<0>'::__l2::
               <lambda_1>::<lambda_invoker_cdecl>;
  Core::Private::Function::CheckCallable(*(void **)&this->Function);
  plVar1 = *(longlong **)&(this->Function).field_0x28;
  pcVar2 = *(code **)&this->Function;
  plVar4 = (longlong *)&(this->Function).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_1,param_2,param_3,&local_res8);
  return;
}

