
$settings['flysystem']['s3'] = array (
  'driver' => 's3',
  'config' => [
  	'key'    => 'moo',
  	'secret' => 'moomoomoo',
  	'region' => 'us-east-1',
  	'bucket' => 'idc',
  	'endpoint' => 'http://minio:9000',
  	'protocol' => "http",
  	'cname_is_bucket' => FALSE,
  	"cname" => "localhost:9000",
  	'use_path_style_endpoint' => TRUE,
  	'public' => FALSE,
	 'options' => [
           'ACL' => 'private',
         ],
	'prefix' => "",
   ],
   'cache' => TRUE,
);